#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    bar3d(100, 100, 200, 200, 50, 1);

    getch();
    closegraph();
    return 0;
}
