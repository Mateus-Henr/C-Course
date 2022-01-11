/*  Author: Mateus Henrique
    Purpose: This program is my version for the challenge "using pointers as parameters".
*/

#include <stdio.h>

// Function prototypes

void squareNumber(int * const number);


int main(void)
{
    int value = 6;

    squareNumber(&value);

    printf("The value squared = %d\n", value);

    return 0;
}


/*
 * Squares a number by itself and sets the value to the pointer
 * that has been passed.
 *
 * @param   number   a pointer to an integer.
 */
void squareNumber(int * const number) // Not allowing the function to modify the pointer's value.
{
    *number *= *number;
}