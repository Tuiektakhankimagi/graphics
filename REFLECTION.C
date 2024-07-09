#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<math.h>
void main()
{
int gd,gm;
//int ax, var;
int x1,y1,x2,y2,x3,y3;
//int x1=100,y1=100,x2=100,y2=200,x3=200,y3=100;
clrscr();
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("Enter the 1st coordinate of Triangle:");
scanf("%d%d",&x1,&y1);
printf("Enter the 2nd coordinate of Triangle:");
scanf("%d%d",&x2,&y2);
printf("Enter the 3rd coordinate of Triangle:");
scanf("%d%d",&x3,&y3);
cleardevice();
line(getmaxx()/2,0,getmaxx()/2,getmaxy());
line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
printf("Before the Reflection object in 2nd Quadrant");
setcolor(14);
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
getch();
//printf("\n Enter your Choise:"
//"\n Press 1 for xy axis wise Reflection"
//"\n Press 2 for x axis wise Reflection"
//"\n Press 3 for y axis wise Reflection"
//"\n Press 4 for y=x Reflection"
//"\n Press 5 for exit::");
//cleardevice();
//scanf("%d",&var);
printf("\n After Reflection:");
//switch(var){
//case 1:
setcolor(4);
line(getmaxx()-x1,getmaxy()-y1,getmaxx()-x2,getmaxy()-y2);
line(getmaxx()-x2,getmaxy()-y2,getmaxx()-x3,getmaxy()-y3);
line(getmaxx()-x3,getmaxy()-y3,getmaxx()-x1,getmaxy()-y1);
//break;
//case 2:
setcolor(3);
line(x1,getmaxy()-y1,x2,getmaxy()-y2);
line(x2,getmaxy()-y2,x3,getmaxy()-y3);
line(x3,getmaxy()-y3,x1,getmaxy()-y1);
//break;
//case 3:
setcolor(2);
line(getmaxx()-x1,y1,getmaxx()-x2,y2);
line(getmaxx()-x2,y2,getmaxx()-x3,y3);
line(getmaxx()-x3,y3,getmaxx()-x1,y1);
//break;
//case 4
//setcolor(9);
//line(x1,y1,x3,y3);
//line(x2,2*y1-y2,x1,y1);
//line(x3,y3,x2,2*y1-y2);
//break;
//case 5:
//exit(0);
//break;
//default:
//printf("Default case is Matched");
//}
getch();
closegraph();
}