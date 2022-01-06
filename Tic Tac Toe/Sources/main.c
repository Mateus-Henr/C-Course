/*  Author: Mateus Henrique
    Purpose: This program is my version of the challenge "tic tac toe game".
*/

#include <stdio.h>

#define BOARD_SIZE 9
#define X 'X'
#define O 'O'
#define FIRST_PLAYER 1
#define SECOND_PLAYER 2
#define INVALID_INPUT "\nInvalid input.\n"
#define CONGRATULATIONS "\nCongratulations player with the symbol %c!! You have won!\n"

char board[BOARD_SIZE];

void drawBoard(void);

void clean_stdin(void);

unsigned int checkIfWin(char symbol);

int main(void)
{
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        board[i] = (i + 1) + '0';
    }

    unsigned int playsLeft = BOARD_SIZE;
    int input = 0;
    int currPlayer = FIRST_PLAYER;

    while (playsLeft)
    {
        drawBoard();

        printf("\nPlayer %d, type the position:\n", currPlayer);

        if (!scanf("%d", &input))
        {
            printf(INVALID_INPUT);
            clean_stdin();
            continue;
        }

        if (input < 1 || input > 9)
        {
            printf(INVALID_INPUT);
            clean_stdin();
            continue;
        }

        if (board[input - 1] == X || board[input - 1] == O)
        {
            printf(INVALID_INPUT);
            clean_stdin();
            continue;
        }

        if (currPlayer == FIRST_PLAYER)
        {
            board[input - 1] = X;
            currPlayer = SECOND_PLAYER;
        }
        else
        {
            board[input - 1] = O;
            currPlayer = FIRST_PLAYER;
        }

        if (checkIfWin(board[input - 1]))
        {
            break;
        }

        playsLeft--;
    }



    return 0;
}

void drawBoard()
{
    printf("\t\tTic Tac Toe\n\tPlayer 1 - X\tPlyer 2 - O\n\n\t\t");

    for (int i = 0; i < BOARD_SIZE; i++)
    {
        if ((i + 1) % 3 == 0)
        {
            printf(" %c\n\t\t", board[i]);
        }
        else
        {
            printf(" %c |", board[i]);
        }
    }

    printf("\n");
}

unsigned int checkIfWin(char symbol)
{
    int hasWon = 0;

    for (int i = 0, j = 0; i < 3; i++, j += 3)
    {
        if ((board[j] == board[j + 1] && board[j + 1] == board[j + 2]) || (board[i] == board[i + 3] && board[i + 3] == board[i + 6]))
        {
            drawBoard();
            printf(CONGRATULATIONS, symbol);
            hasWon = 1;
        }
    }

    if ((board[0] == board[4] && board[4] == board[8]) || (board[2] == board[4] && board[4] == board[6]))
    {
        drawBoard();
        printf(CONGRATULATIONS, symbol);
        hasWon = 1;
    }

    return hasWon;
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