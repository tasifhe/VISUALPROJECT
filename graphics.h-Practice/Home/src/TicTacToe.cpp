#include <graphics.h>
#include <conio.h>
#include <iostream>

int board[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

void draw_board()
{
    setcolor(BLUE);
    for (int i = 1; i < 3; ++i) {
        line(100 * i, 0, 100 * i, 300);
        line(0, 100 * i, 300, 100 * i);
    }
}

void draw_x(int x, int y)
{
    setcolor(RED);
    line(x, y, x + 100, y + 100);
    line(x + 100, y, x, y + 100);
}

void draw_o(int x, int y)
{
    setcolor(GREEN);
    arc(x + 50, y + 50, 0, 360, 50);
}

bool check_win(int player)
{
    // check rows
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true;
        }
    }

    // check columns
    for (int i = 0; i < 3; ++i) {
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return true;
        }
    }

    // check diagonals
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return true;
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return true;
    }

    return false;
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    draw_board();

    int player = 1;
    int x, y;
    while (true) {
        if (player == 1) {
            std::cout << "Player 1 turn: ";
            std::cin >> x >> y;
            x = (x - 1) * 100 + 50;
            y = (y - 1) * 100 + 50;
            draw_x(x, y);
            board[(y - 50) / 100][(x - 50) / 100] = 1;
            if (check_win(1)) {
                std::cout << "Player 1 wins!" << std::endl;
                break;
            }
            player = 2;
        } else {
            std::cout << "Player 2 turn: ";
            std::cin >> x >> y;
            x = (x - 1) * 100 + 50;
            y = (y - 1) * 100 + 50;
            draw_o(x, y);
            board[(y - 50) / 100][(x - 50) / 100] = 2;
            if (check_win(2))
                {
                    std::cout << "Player 2 wins!" << std::endl;
                    break;
                }
            player = 1;
            }
    }

        getch();
        closegraph();
    return 0;
}