//declaring library packages.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int i, j, height  =20, width = 20, gameover, score;
int x, y, fruitx, fruity, flag;

void logic(){
    sleep(0.01);
    switch(flag){
        case 1:
            y--;
            break;
        case 2:
            x++;
            break;
        case 3:
            y++;
            break;
        case 4:
            x--;
            break;
        default:
            break;
    }
    if(x < 0 || x > height || y < 0|| y > width)
        gameover = 1;
    if(x == fruitx && y == fruity){
            label3:
                fruitx = rand()%20;
                if(fruitx == 0)
            goto label3;
            label4:
                fruity = rand()%20;
                if(fruity == 0)
            goto label4;
            score += 10;
    }
}
