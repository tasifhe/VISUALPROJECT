#include<graphics.h>
#include<iostream>
using namespace std;

int main()
{
    int gd=DETECT,gm,x,y,radius;
    initwindow(1200,600, "My-window");

    setfillstyle(SOLID_FILL, BLACK);


    setcolor(LIGHTBLUE);
    rectangle(0,0,1200,200);
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    floodfill(1,1,LIGHTBLUE);

    setcolor(WHITE);
    rectangle(0,200,1200,400);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(1,201,WHITE);

    setcolor(LIGHTBLUE);
    rectangle(0,400,1200,600);
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    floodfill(1,401,LIGHTBLUE);


    setcolor(YELLOW);
    circle(600,300,100);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(601,201, YELLOW);


    getch();
    closegraph();
    return 0;
}