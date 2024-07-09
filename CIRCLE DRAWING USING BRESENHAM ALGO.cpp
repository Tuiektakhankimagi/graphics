//Circle drawing using Bresenham algo
# include <graphics.h>
# include <conio.h>
int main ()
{
    int gd=DETECT, gm;
    int x, y, r;
    int x_current = 0, y_current = r;
    int decision_Param= 3-2*r;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    printf("Enter the centre coordinates (x,y) and radius: ");
    scanf("%d %d", &x, &y, &r);
    while (x_current<= y_current)
    {
        putpixel(x+x_current, y+y_current, WHITE);
        putpixel(x-x_current, y+y_current, WHITE);
        putpixel(x+x_current, y-y_current, WHITE);
        putpixel(x-x_current, y-y_current, WHITE);
        putpixel(x+y_current, y+x_current, WHITE);
        putpixel(x-y_current, y+x_current, WHITE);
        putpixel(x+y_current, y-x_current, WHITE);
        putpixel(x-y_current, y-x_current, WHITE);
        x_current++;
        if(decision_Param<0)
        {
            decision_Param += 4*x_current++6;
        }
        else
        {
            y_current--;
            decision_Param+=4*(x_current - y_current)+10;
        }
        getch();
        closegraph();
        return 0;
    }
}
