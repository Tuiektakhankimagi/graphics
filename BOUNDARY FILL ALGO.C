#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<math.h>
void Boundary(int x,int y,int boundary,int fill)
{
int current=getpixel(x,y);
if((current!=boundary)&(current!=fill))
{
setcolor(fill);
putpixel(x,y,fill);
delay(2);
Boundary(x+1,y,fill,boundary);
Boundary(x-1,y,fill,boundary);
Boundary(x,y+1,fill,boundary);
Boundary(x,y-1,fill,boundary);
}
}
void main()
{
int gd,gm;
clrscr();
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
circle(250,200,30);
Boundary(255,205,1,15);
rectangle(50,50,100,100);
Boundary(55,55,3,15);
getch();
closegraph();
}