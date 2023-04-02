#include<graphics.h>
#include<iostream>
using namespace std;

int main()
{
    int gd=DETECT,gm;
    initwindow(1200,600, "My-window");

    setfillstyle(SOLID_FILL, BLACK);

    setcolor(GREEN);
    rectangle(0,0,600,400);
    setfillstyle(LTSLASH_FILL, GREEN);
    floodfill(1,1,GREEN);

    setcolor(RED);
    circle(300,200,100);
    setfillstyle(HATCH_FILL, RED);
    floodfill(300,200, RED);

    //setcolor(WHITE)

    getch();
    closegraph();
    return 0;
}