//declaring library packages.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h> // For kbhit(), getch(), and Sleep()


int i, j, height  =20, width = 20, gameover, score;
int x, y, fruitx, fruity, flag;

void setup() {
    gameover = 0;
    x = height / 2;
    y = width / 2;
label1:
    fruitx = rand() % (height - 1);
    if (fruitx == 0)
        goto label1;
label2:
    fruity = rand() % (width - 1);
    if (fruity == 0)
        goto label2;
    score = 0;
}