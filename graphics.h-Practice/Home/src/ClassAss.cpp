#include<graphics.h>
#include<iostream>

using namespace std;

int main()
{
    //int gd = DETECT,gm,x,y,radius;
    initwindow(1200, 600);

    setcolor(GREEN);
    rectangle(0,0,600,400);
    floodfill(1,1,GREEN);

    setcolor(RED);
    circle(300,200,100);
    floodfill(300,200, RED);

    // setcolor(WHITE);
    // circle(300)

    getch();
    return 0;

}