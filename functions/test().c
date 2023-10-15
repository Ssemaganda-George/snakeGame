#include <stdio.h>
#include <conio.h>
#include <windows.h> // For kbhit(), getch(), and Sleep()

int i, j, height = 20, width = 20, gameover, score;
int x, y, fruitx, fruity, flag;

// Function to draw the boundary and snake
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

// Function to set up the initial game state
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

// Function to handle user input
void input() {
    if (_kbhit()) {
        switch (_getch()) {
            case 'a':
                flag = 1;
                break;
            case 's':
                flag = 2;
                break;
            case 'd':
                flag = 3;
                break;
            case 'w':
                flag = 4;
                break;
            case 'x':
                gameover = 1;
                break;
        }
    }
}

// Function to update the game logic
void logic() {
    Sleep(1000); // Sleep for a short interval for smooth gameplay

    switch (flag) {
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

    if (x < 0 || x >= height || y < 0 || y >= width)
        gameover = 1;

    if (x == fruitx && y == fruity) {
label3:
        fruitx = rand() % (height - 1);
        if (fruitx == 0)
            goto label3;
label4:
        fruity = rand() % (width - 1);
        if (fruity == 0)
            goto label4;
        score += 10;
    }
}

int main() {
    int m, n;
    setup();

    while (!gameover) {
        draw();
        input();
        logic();
    }

    return 0;
}
