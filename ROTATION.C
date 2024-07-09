#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<math.h>
void Triangle(int x1,int y1,int x2,int y2,int x3,int y3);
void Rotate(int x1,int y1,int x2,int y2,int x3,int y3);
void main()
{
int gd,gm;
int x1,y1,x2,y2,x3,y3;
clrscr();
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("Enter the 1st point of the Triangle:-");
scanf("%d%d",&x1,&y1);
printf("Enter the 2nd point of the Triangle:-");
scanf("%d%d",&x2,&y2);
printf("Enter the 3rd point of the Triangle:-");
scanf("%d%d",&x3,&y3);
Triangle(x1,y1,x2,y2,x3,y3);
getch();
cleardevice();
Rotate(x1,y1,x2,y2,x3,y3);
setcolor(6);
Triangle(x1,y1,x2,y2,x3,y3);
getch();
}
void Triangle(int x1,int y1,int x2,int y2,int x3,int y3)
{
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
}
void Rotate(int x1,int y1,int x2,int y2,int x3,int y3)
{
int x,y,a1,b1,a2,b2,a3,b3;
int p=x1,q=y1;
float angle;
printf("Enter the angle of thr Rotation:-");
scanf("%f",&angle);
cleardevice();
angle=(angle*3.14)/180.0;
a1=p+(x1-p)*cos(angle)-(y1-q)*sin(angle);
b1=q+(x1-p)*sin(angle)+(y1-q)*cos(angle);

a2=p+(x2-p)*cos(angle)-(y2-q)*sin(angle);
b2=q+(x2-p)*sin(angle)+(y2-q)*cos(angle);

a3=p+(x3-p)*cos(angle)-(y3-q)*sin(angle);
b3=q+(x3-p)*sin(angle)+(y3-q)*cos(angle);
printf("Rotation:-");
Triangle(a1,b1,a2,b2,a3,b3);
}