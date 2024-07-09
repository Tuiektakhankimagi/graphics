#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<math.h>
void Flood(int x,int y,int fill,int oldcolor)
{
int current;
current=getpixel(x,y);
if(current==oldcolor)
{
delay(2);
setcolor(fill);
putpixel(x,y,fill);
Flood(x+1,y,fill,oldcolor);
Flood(x-1,y,fill,oldcolor);
Flood(x,y+1,fill,oldcolor);
Flood(x,y-1,fill,oldcolor);
}
}
void main()
{
int gd,gm;
clrscr();
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
rectangle(50,50,100,100);
Flood(55,55,4,0);
Flood(55,55,3,4);

circle(200,250,30);
Flood(205,255,6,0);
Flood(205,255,4,6);
getch();
closegraph();
}