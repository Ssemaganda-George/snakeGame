//declaring library packages.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


//int i, j, height  =20, width = 20, gameover, score;
//int x, y, fruitx, fruity, flag;

//Constructing the boundary outline using draw(), tool.
int i, j, height = 20;
int width = 20, gameover, score;

//Function to draw the boundary.

void draw(){

    for (i = 0; i < height; i++){
        for (j = 0; j < width; j ++ ){
            if (i == 0 || i == width - 1 || j == 0 || j == height - 1){
                    printf("#");
            }

            else{
                    printf(" ");
            }
        }
        printf("\n");

    }
}
//Declaring the main function.
int main(){
    //functional  call
    draw();

    return 0;
}
