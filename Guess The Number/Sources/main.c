/*  Author: Mateus Henrique
    Purpose: This program consists of my code for the "Guess The Number" challenge.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define USER_INITIAL_VALUE -1
#define ZERO 0
#define MAX_TRIES 5
#define TRIES_LEFT "\nWrong number! You have %i tr%s left."
#define MINIMUM_RANDOM_NUMBER 0
#define MAXIMUM_RANDOM_NUMBER 21
#define TOO_HIGH "\nToo High!\n"
#define TOO_LOW "\nToo Low!\n"
#define INVALID_INPUT "\nInvalid input, the input must be a number!\n"
#define INVALID_NUMBER "\nInvalid number. The number must be between 0 and 20!\n"
#define CONGRATULATIONS "\nCongrats!!! You have guessed corretly!! The number was inded %i.\n"
#define LOST "\nYou have lost the game! Your %i tries are out. The number was %i.\n"

void clean_stdin(void);

/*
 * The main function is being used to receive values from the user trying to see if the user has guessed the number correctly.
 * It also checks for invalid values.
 */
int main(void)
{
    
    unsigned int randomNumber = ZERO;
    int userNumber = USER_INITIAL_VALUE;
    int chances = MAX_TRIES;
    srand(time(NULL));

    randomNumber = rand() % MAXIMUM_RANDOM_NUMBER;

    printf("Guessing game\nYou have %d tries left\n\n", chances);

    while (chances)
    {
        printf("Try to guess the number:\n");
        if (!scanf("%d", &userNumber))
        {
            printf(INVALID_INPUT);
            clean_stdin();
            continue;
        }

        if (userNumber < MINIMUM_RANDOM_NUMBER || userNumber > MAXIMUM_RANDOM_NUMBER)
        {
            printf(INVALID_NUMBER);
            clean_stdin();
            continue;
        }

        if (userNumber == randomNumber)
        {
            printf(CONGRATULATIONS, randomNumber);
            break;
        }
        else
        {
            chances--;
            printf(TRIES_LEFT, chances, chances == 1 ? "y" : "ies");
            userNumber > randomNumber ? printf(TOO_HIGH) : printf(TOO_LOW);
        }
    }

    if (userNumber != randomNumber)
    {
        printf(LOST, MAX_TRIES, randomNumber);
    }

    return ZERO;
}

/*
 * This method is used to clean the stdin for fixing problems related to the "scanf()" function.
 */
void clean_stdin(void)
{
    int c = getchar();

    while (c != '\n' && c != EOF)
    {
        c = getchar();
    }
}
