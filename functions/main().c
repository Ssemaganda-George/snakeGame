//declaring library packages.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int i, j, height  =20, width = 20, gameover, score;
int x, y, fruitx, fruity, flag;

void main(){
    int m, n;
    setup();
//Untill game gets over!!
    while (!gameover){

        //Functional calls
        draw();
        input();
        logic();
    }
}
