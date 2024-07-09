#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<math.h>
void main()
{
int gd,gm;
int x1,y1,x2,y2,x3,y3,x4,y4,shf;
clrscr();
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

//printf("Enter the 1st Coordinates of rectangle:");
//scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
//printf("Enter the 2nd coordinates of the rectangle;");
//scanf("%d%d%d%d",&x3,&y3,&x4,&y4);

printf("Enter the 1st Coordinates of rectangle:");
scanf("%d%d",&x1,&y1);
printf("Enter the 2nd coordinates of the rectangle;");
scanf("%d%d",&x2,&y2);
printf("Enter the 3rd Coordinates of rectangle:");
scanf("%d%d",&x3,&y3);
printf("Enter the 4th coordinates of the rectangle;");
scanf("%d%d",&x4,&y4);
printf("Enter the Sheraing factor:");
scanf("%d",&shf);
cleardevice();
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x4,y4);
line(x4,y4,x1,y1);

printf("Shearing X-axis");
setcolor(3);
x1=x1+y1*shf;
x2=x2+y2*shf;
x3=x3+y3*shf;
x4=x4+y4*shf;

//printf("Shearing Y-axis");
//setcolor(9);
//y1=y1+x1*shf;
//y2=y2+x2*shf;
//y3=y3+x3*shf;
//y4=y4+x4*shf;

line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x4,y4);
line(x4,y4,x1,y1);

getch();
closegraph();
}
