#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<math.h>

//Region Codes
#define INSIDE 0
#define LEFT 1
#define RIGHT 2
#define BOTTOM 4
#define TOP 8

//Window Boundaries
#define X_MIN 50
#define Y_MIN 50
#define X_MAX 300
#define Y_MAX 300

// Function To Compute Region Code For a Point(X,Y)
int computeCode(int x, int y)
{
int code = INSIDE;
if(x<X_MIN)
code|=LEFT;
else if(x>X_MAX)
code|=RIGHT;
if(y<Y_MIN)
code|=BOTTOM;
else if(y>Y_MAX)
code|=TOP;
return code;
}

void CohenSutherland(int x1,int y1,int x2,int y2)
{
int code1=computeCode(x1,y1);
int code2=computeCode(x2,y2);
int m,x,y;

//OR AND
int or_result=code1|code2;
int and_result=code1&code2;
if(or_result==0)
{
printf("Line is Completely Inside The Window");
return;
}
if(and_result!=0)
{
printf("Line is Completely Outside The Window\n");
return;
}
printf("Line is Particially Inside The Window\n");

m=(y2-y1)/(x2-x1); //Slope
if(code1&LEFT)
{
x=X_MIN;
y=y1+m*(X_MIN-x1);
printf("Intersection with Left Boundary:(%d,%d)\n",x,y);
return;
}
else if(code1&RIGHT)
{
x=X_MAX;
y=y1+m*(X_MAX-x1);
printf("Intersection with Right Boundary:(%d,%d)\n",x,y);
return;
}
else if(code1&BOTTOM)
{
y=Y_MIN;
x=x1+(Y_MIN-y1)/m;
printf("Intersection with bottom boundary: (%d , %d)\n",x,y);
return;
}
else if(code1 & TOP)
{
y=Y_MAX;
x=x1+(Y_MAX-y1)/m;
printf("Intersection with TOP boundary:(%d,%d)\n",x,y);
}
setcolor(BLACK);
line(x1,y1,x,y);
}
int main()
{
int gd,gm;
int x1,y1,x2,y2;
printf("enter the Line Coordinate 1st point");
scanf("%d%d",&x1,&y1);
printf("enter the Line Coordinate 2nd point");
scanf("%d%d",&x2,&y2);
printf("Line:(%d%d) to (%d%d)\n",x1,y1,x2,y2);
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
line(X_MIN,Y_MIN,X_MAX,Y_MIN);
line(X_MIN,Y_MIN,X_MIN,Y_MAX);
line(X_MAX,Y_MIN,X_MAX,Y_MAX);
line(X_MIN,Y_MAX,X_MAX,Y_MAX);
setcolor(9);
line(x1,y1,x2,y2);
CohenSutherland(x1,y1,x2,y2);
getch();
closegraph();
return 0;
}
