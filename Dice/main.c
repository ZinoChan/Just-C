#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int player1_score = 0, player2_score = 0;
    int i, dice1, dice2;

    // Seed the random number generator with the current time
    srand(time(NULL));

    // Loop for 10 rounds of the game
    for (i = 1; i <= 10; i++)
    {
        printf("Round %d:\n", i);

        // Player 1 rolls the dice
        printf("Player 1: Press Enter to roll the dice...\n");
        getchar();
        dice1 = rand() % 6 + 1;
        dice2 = rand() % 6 + 1;
        printf("Player 1 rolled %d and %d\n", dice1, dice2);
        player1_score += dice1 + dice2;
        printf("Player 1's score is %d\n\n", player1_score);

        // Player 2 rolls the dice
        printf("Player 2: Press Enter to roll the dice...\n");
        getchar();
        dice1 = rand() % 6 + 1;
        dice2 = rand() % 6 + 1;
        printf("Player 2 rolled %d and %d\n", dice1, dice2);
        player2_score += dice1 + dice2;
        printf("Player 2's score is %d\n\n", player2_score);
    }

    // Print the final scores
    printf("Final scores:\n");
    printf("Player 1: %d\n", player1_score);
    printf("Player 2: %d\n", player2_score);

    // Determine the winner
    if (player1_score > player2_score)
    {
        printf("Player 1 wins!\n");
    }
    else if (player2_score > player1_score)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("It's a tie!\n");
    }

    return 0;
}