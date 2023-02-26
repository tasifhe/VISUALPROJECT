#include <graphics.h>
#include <conio.h>
#include <iostream>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x = 50, y = 50;
    int speed_x = 5, speed_y = 5;

    while (true) {
        //* check if square hits the right or left boundary
        if (x + 50 >= getmaxx() || x <= 0) {
            speed_x = -speed_x;
        }
        //* check if square hits the top or bottom boundary
        if (y + 50 >= getmaxy() || y <= 0) {
            speed_y = -speed_y;
        }
        x += speed_x;
        y += speed_y;

        //* draw square at new position
        setcolor(GREEN);
        rectangle(x, y, x + 50, y + 50);
        delay(10);
        //* clear screen for next iteration
        cleardevice();
    }

    getch();
    closegraph();
    return 0;
}
