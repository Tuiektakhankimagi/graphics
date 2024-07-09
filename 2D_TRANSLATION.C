#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
#include<math.h>
void Rectangle(int x,int y, int h,int w);
void Translate(int x,int y, int h,int w);
void main()
{
int gd,gm;
int x,y,h,w;
clrscr();
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("Enter the 1st point of the rectangle:-");
scanf("%d%d",&x,&y);
printf("Enter the 2nd point of the rectangle:-");
scanf("%d%d",&h,&w);
Rectangle(x,y,h,w);
getch();
cleardevice();
Translate(x,y,h,w);
Rectangle(x,y,h,w);
getch();
}
void Rectangle(int x,int y, int h,int w)
{
line(x,y,x+w,y);
line(x,y,x,y+h);
line(x+w,y,x+w,y+h);
line(x,y+h,x+w,y+h);
}
void Translate(int x,int y, int h,int w)
{
int tx,ty,a,b;
printf("Enter the Translation coordinates;-");
scanf("%d%d",&tx,&ty);
cleardevice();
a=x+tx;
b=y+ty;
Rectangle(a,b,h,w);
}