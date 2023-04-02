#include<graphics.h>
#include<iostream>
using namespace std;

int main()
{
    int gd = DETECT, gm, x, y, radius;
    initwindow(600, 400, "Brazil Flag");

    // draw green background
    setcolor(GREEN);
    rectangle(0, 0, 600, 400);
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(1, 1, GREEN);

    // draw yellow circle
    x = 300;
    y = 200;
    radius = 70;
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    circle(x, y, radius);
    floodfill(x, y, YELLOW);

    // draw blue rectangle
    int width = 240;
    int height = 60;
    int top_x = x - width/2;
    int top_y = y - height/2;
    setcolor(BLUE);
    setfillstyle(SOLID_FILL, BLUE);
    rectangle(top_x, top_y, top_x+width, top_y+height);
    floodfill(x, y, BLUE);

    // draw white stars
    int star_size = 10;
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    int star_y = y - height/2 + 5;
    int star_x = top_x + 10;
    for (int i=0; i<5; i++) {
        if (i % 2 == 0) {
            fillellipse(star_x, star_y, star_size, star_size);
        }
        else {
            fillellipse(star_x, star_y+10, star_size, star_size);
        }
        star_x += 30;
    }
    star_x = top_x + 25;
    star_y += 15;
    for (int i=0; i<4; i++) {
        if (i % 2 == 0) {
            fillellipse(star_x, star_y, star_size, star_size);
        }
        else {
            fillellipse(star_x, star_y+10, star_size, star_size);
        }
        star_x += 30;
    }

    getch();
    closegraph();
    return 0;
}