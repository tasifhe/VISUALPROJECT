#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw the car
    line(200, 350, 400, 350);
    line(200, 450, 200, 350);
    line(400, 350, 500, 450);
    line(200, 450, 225, 450);
    line(275, 450, 375, 450);
    line(425, 450, 500, 450);
    circle(250, 450, 20);
    circle(400, 450, 20);

    // Draw the buildings
    setfillstyle(SOLID_FILL, YELLOW);
    rectangle(50, 50, 150, 250);
    floodfill(51, 51, WHITE);

    setfillstyle(SOLID_FILL, GREEN);
    rectangle(200, 50, 300, 250);
    floodfill(201, 51, WHITE);

    setfillstyle(SOLID_FILL, BLUE);
    rectangle(350, 50, 450, 250);
    floodfill(351, 51, WHITE);

    getch();
    closegraph();
    return 0;
}
