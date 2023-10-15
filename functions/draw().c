//declaring library packages.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h> // For kbhit(), getch(), and Sleep()


int i, j, height  =20, width = 20, gameover, score;
int x, y, fruitx, fruity, flag;

//Function to draw the boundary.

void draw() {
    system("cls"); // Clear the screen in Windows (for Linux, use system("clear"))

    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                printf("#");
            } else {
                if (i == x && j == y) {
                    printf("O"); // Head of the snake
                } else if (i == fruitx && j == fruity) {
                    printf("*"); // Fruit
                } else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    printf("Score: %d", score);
}
