#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<math.h>
void main()
{
int x[4],y[4],i,gd,gm;
float u,px,py;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
for(i=0;i<4;i++)
{
printf("Enter the X & Y Coordinate:-");
scanf("%d %d", &x[i], &y[i]);
cleardevice();
}
for(u=0;u<=1.0;u=u+0.001)
{
px=pow(1-u,3)*x[0]+3*pow(u,2)*(1-u)*x[2]+pow(u,3)*x[3];
py=pow(1-u,3)*y[0]+3*pow(u,2)*(1-u)*y[2]+pow(u,3)*y[3];
putpixel(px,py,6);
}
getch();
closegraph();
}