//Including the required library packages.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h> // For kbhit(), getch(), and Sleep()

// Parameter declaration
int i, j, height  =20, width = 20, gameover, score;
int x, y, fruitx, fruity, flag;

//Initialised the main function
int main() {
    int m, n;
    setup();
    //untill we see game over.
    while (!gameover) {
         draw();
        input();
        logic();  
    }

    return 0;
}
