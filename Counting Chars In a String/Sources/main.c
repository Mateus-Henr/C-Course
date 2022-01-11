/*  Author: Mateus Henrique
    Purpose: This program shows my version for the "Counting characters in a string" challenge.
*/

#include <stdio.h>
#include <string.h>

// Function prototypes

unsigned int stringLength(const char *string);


int main(void)
{
    char string[] = "This is my string.";

    printf("Length of the string = %i.\n", stringLength(string));
    printf("Length of the string = %i.\n", (unsigned int) strlen(string));

    return 0;
}


/*
 * Calculates the length of a string using pointers.
 *
 * @param   string   a string.
 * @return           the length of the string.
 */
unsigned int stringLength(const char *string)
{
    const char *endString = string; // This means that we can't change the value that the pointer points to.

    while (*endString)
    {
        endString++;
    }

    return (unsigned int) (endString - string);
}