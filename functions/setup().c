//declaring library packages.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int i, j, height  =20, width = 20, gameover, score;
int x, y, fruitx, fruity, flag;

void setup() {
    gameover = 0;
    x = height / 2;
    y = width / 2;
    label1:
        fruitx = rand() %20;
        if(fruitx == 0)
            goto label1;
    label2:
        fruity = rand() %20;
        if(fruity == 0)
            goto label2;
    score = 0;
}