#include <graphics.h>
#include <conio.h>
#include <iostream>
#include <chrono>
#include <thread>
#include <cmath>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x = 0;
    while (x < getmaxx()) {
        cleardevice();

        // Draw the pattern
        for (int i = 0; i < getmaxy(); i += 20) {
            setcolor(i % 15 + 1);
            int y2 = i + 20;
            int x2 = x + 20 * std::tan(3.14159265 / 6);
            int x3 = x + 40;
            int y3 = i + 10;
            int points[6] = {x, i, x2, y2, x3, y3};
            drawpoly(3, points);
            setfillstyle(SOLID_FILL, i % 15 + 1);
            floodfill(x2, y2, i % 15 + 1);
        }

        x += 10;

        //std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    getch();
    closegraph();
    return 0;
}
