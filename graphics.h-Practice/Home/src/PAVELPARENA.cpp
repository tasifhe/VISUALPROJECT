#include <graphics.h>
#include <stdio.h>

int main()
{
    int gd=DETECT,gm;
    initwindow(1200,600, "My-window");

    // draw a line
    setcolor(YELLOW);
    line(100, 100, 200, 200);

    // draw a rectangle
    setcolor(BLUE);
    rectangle(250, 100, 350, 200);

    // draw a circle
    setcolor(GREEN);
    circle(500, 150, 50);

    // draw an ellipse
    setcolor(RED);
    ellipse(650, 150, 0, 360, 100, 50);

    // draw a triangle
    setcolor(MAGENTA);
    int points[] = {800, 100, 900, 100, 850, 200, 800, 100};
    drawpoly(4, points);

    getch();
    closegraph();
    return 0;
}