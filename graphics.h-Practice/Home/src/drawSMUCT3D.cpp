#include <graphics.h>
#include <conio.h>
#include <math.h>

const int SIZE = 50;
const int X_START = 100;
const int Y_START = 100;
const int Z_START = 50;

void draw_s()
{
    bar3d(X_START, Y_START + SIZE, X_START + SIZE, Y_START, Z_START, Z_START + SIZE, 0, 1);
    bar3d(X_START, Y_START, X_START + SIZE / 2, Y_START + SIZE / 2, Z_START + SIZE, Z_START, 0, 1);
    bar3d(X_START + SIZE / 2, Y_START + SIZE / 2, X_START + SIZE, Y_START, Z_START, Z_START + SIZE, 0, 1);
}

void draw_m()
{
    bar3d(X_START + SIZE * 2, Y_START, X_START + SIZE * 3, Y_START + SIZE, Z_START, Z_START + SIZE, 0, 1);
    bar3d(X_START + SIZE * 2, Y_START + SIZE, X_START + SIZE * 2 + SIZE / 2, Y_START + SIZE / 2, Z_START + SIZE, Z_START, 0, 1);
    bar3d(X_START + SIZE * 3, Y_START + SIZE, X_START + SIZE * 2 + SIZE / 2, Y_START + SIZE / 2, Z_START + SIZE, Z_START, 0, 1);
}

void draw_u()
{
    bar3d(X_START + SIZE * 4, Y_START, X_START + SIZE * 5, Y_START + SIZE, Z_START, Z_START + SIZE, 0, 1);
    bar3d(X_START + SIZE * 4, Y_START, X_START + SIZE * 4 + SIZE / 2, Y_START + SIZE / 2, Z_START, Z_START + SIZE, 0, 1);
    bar3d(X_START + SIZE * 5, Y_START, X_START + SIZE * 4 + SIZE / 2, Y_START + SIZE / 2, Z_START, Z_START + SIZE, 0, 1);
}

void draw_c()
{
    bar3d(X_START + SIZE * 6, Y_START, X_START + SIZE * 7, Y_START + SIZE, Z_START, Z_START + SIZE, 0, 1);
    bar3d(X_START + SIZE * 6, Y_START, X_START + SIZE * 6 + SIZE / 2, Y_START + SIZE / 2, Z_START, Z_START + SIZE, 0, 1);
    bar3d(X_START + SIZE * 6, Y_START + SIZE, X_START + SIZE * 6 + SIZE / 2, Y_START + SIZE / 2, Z_START, Z_START + SIZE, 0, 1);
}

void draw_t()
{
    bar3d(X_START + SIZE * 8, Y_START, X_START + SIZE * 9, Y_START + SIZE, Z_START, Z_START + SIZE, 0, 1);
    bar3d(X_START + SIZE * 8 + SIZE / 2, Y_START, X_START + SIZE * 8 + SIZE / 2, Y_START + SIZE, Z_START, Z_START + SIZE, 0, 1);
    bar3d(X_START + SIZE * 8 + SIZE / 2, Y_START + SIZE, X_START + SIZE * 8 + SIZE / 2, Y_START + SIZE / 2, Z_START + SIZE, Z_START, 0, 1);
}


int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    draw_s();
    draw_m();
    draw_u();
    draw_c();
    draw_t();

    getch();
    closegraph();
    return 0;
}