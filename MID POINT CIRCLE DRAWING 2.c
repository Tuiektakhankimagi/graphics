#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void cliplot(int xctr, int yctr, int x, int y) {
    putpixel(xctr + x, yctr + y, 1);
    putpixel(xctr - x, yctr + y, 1);
    putpixel(xctr + x, yctr - y, 1);
    putpixel(xctr - x, yctr - y, 1);
    putpixel(xctr + y, yctr + x, 1);
    putpixel(xctr - y, yctr + x, 1);
    putpixel(xctr + y, yctr - x, 1);
    putpixel(xctr - y, yctr - x, 1);
}

void cir(int x1, int y1, int r) {
    int x = 0, y = r;
    int p = 1 - r;

    cliplot(x1, y1, x, y);

    while (x < y) {
        x++;
        if (p < 0) {
            p = p + 2 * x + 1;
        } else {
            y--;
            p = p + 2 * (x - y) + 1;
        }
        cliplot(x1, y1, x, y);
    }
}

void main() {
    int gd = DETECT, gm;
    int x, y, r;

    printf("Enter the mid point and radius: ");
    scanf("%d %d %d", &x, &y, &r);

    initgraph(&gd, &gm, "");
    cir(x, y, r);
    getch();
    closegraph();
}