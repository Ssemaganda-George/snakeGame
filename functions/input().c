//declaring library packages.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h> // For kbhit(), getch(), and Sleep()


int i, j, height  =20, width = 20, gameover, score;
int x, y, fruitx, fruity, flag;
// Guides the user on inputs to move around the screen
void input() {
    if (_kbhit()) {
        switch (_getch()) {
            case 'f':
                flag = 1;
                break;
            case 'g':
                flag = 2;
                break;
            case 'h':
                flag = 3;
                break;
            case 't':
                flag = 4;
                break;
            case 'x':
                gameover = 1;
                break;
        }
    }
}