//DDA
# include <stdio.h>
# include <graphics.h>
# include <math.h>
{
    float x, y, x1, y1, x2, y2, dx, dy, length;
    int i, gd, gm;
    clrscr ();
    printf ("Enter the first value of x1= ");
    scanf ("%f", &x1);
    printf ("Enter the first value of y1= ");
    scanf ("%f", &y1);
    printf ("Enter the first value of x2= ");
    scanf ("%f", &x2);
    printf ("Enter the first value of y2= ");
    scanf ("%f", &y2);
    detectgraph (&gd, &gm, "C:\\ TURBO3\\BGI");
    dx=abs(x2-x1);
    dy=abs(y2-y1);
    if (dx>=dy)
        length = dx;
    else:
        length = dy;
    dx=(x2-x1)/length;
    dy=(y2-y1)/length;
    x=x1+0.5;
    y=y1+0.5;
    i=1;
    while(i<=length)
    {
        putpixel (x, y, 15);
        x=x+dx;
        y=y+dy;
        i+=1;
        delay(100);
    }
    getch();
    closegraph();
}
    }
}
