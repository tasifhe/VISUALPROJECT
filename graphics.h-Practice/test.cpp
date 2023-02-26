#include <graphics.h>
#include <conio.h>
#include <iostream>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x = 100, y = 100, width = 200, height = 100;
    setcolor(RED);
    rectangle(x, y, x + width, y + height);

    getch();
    closegraph();
    return 0;
}
