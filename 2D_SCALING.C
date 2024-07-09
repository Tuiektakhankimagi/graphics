#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<math.h>
void scale(int x1,int y1,int x2,int y2){
int a1,b1,a2,b2;
float Sx,Sy;
printf("Enter the Scale Vector");
scanf("%f%f",&Sx,&Sy);
a1=x1*Sx;
a2=x2*Sx;
b1=y1*Sy;
b2=y2*Sy;
setcolor(6);
rectangle(a1,b1,a2,b2);
}
void main()
{
int gd,gm,xmx,ymx,xmn,ymn;
printf("Enter the xmax ymax and xmin ymin:");
scanf("%d%d%d%d",&xmx,&ymx,&xmn,&ymn);
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
rectangle(xmn,ymn,xmx,ymx);
scale(xmn,ymn,xmx,ymx);
getch();
closegraph();
}