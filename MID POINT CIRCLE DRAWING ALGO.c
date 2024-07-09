//Circle drawing using Mid Point algo
# include <stdio.h>
# include <conio.h>
# include <graphics.h>
void main ()
{
    int gd=DETECT, gm;
    int x, y, r;
    void cir (int, int, int);
    printf("Enter the mid point and radius: ");
    scanf("%d %d %d", &x, &y, &r);
    initgraph(&gd, &gm,"");
    cir(x, y, r);
    getch();
    closegraph();
}
void cir (int x1, int y1, int r)
{
    int x=0, y=r, p=1-r;
    void cliplot (int, int, int, int);
    cliplot (x1,y1,x,y);
    while(x<y)
    {
        x++;
        if (P<0)
            P==2*x+1;
        else
        {
            y--;
            P+=2*(x-y)+1;
        }
    }
    void cliplot (int xctr, int yctr, int x, int y)
    {
        putpixel(xctr + x, yctr + y, 1);
        putpixel(xctr - x, yctr + y, 1);
        putpixel(xctr + x, yctr - y, 1);
        putpixel(xctr - x, yctr - y, 1);
        putpixel(xctr + y, yctr + x, 1);
        putpixel(xctr - y, yctr + x, 1);
        putpixel(xctr + y, yctr - x, 1);
        putpixel(xctr - y, yctr - x, 1);
        getch();
    }
}
