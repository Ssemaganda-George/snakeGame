**Snake Game in C**

This is a console-based implementation of the classic Snake game in C. The game is played in the terminal where the player controls a snake that moves around the screen, trying to eat food represented by a fruit symbol(*). As the snake eats food, it grows longer, making the game more challenging.

**How to Play**
Controls:

Use the T, F, G, and H keys to move the snake Up, Left, Down, and Right respectively.
Press X to exit the game at any time.

Objective:

Eat the fruit ('*') to score points.
Avoid running into the walls or the snake's own body, or the game will end.

**Prerequisites**

This game is implemented in C and requires a C compiler to run.
The code uses certain functions specific to Windows (conio.h), so it's best suited for Windows environments.
**How to Run**

Clone the Repository:

bash
Copy code
git clone https://github.com/your-username/snake-game-c.git
Compile the Code: 

Copy and run **test().c** code 
gcc snake.c -o snake
Run the Game:

bash
Copy code
./snake
Gameplay
The snake moves one step in its current direction in each frame.
Each time the snake eats a fruit, the player's score increases.
The game ends if the snake collides with the walls or itself.
To exit the game, press X.

**Customization**
You can customize the game by modifying the code.
Adjust the height and width variables to change the size of the game board.
Modify the speed of the game by changing the duration in the Sleep() function inside the logic() function.








