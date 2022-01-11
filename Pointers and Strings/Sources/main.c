/*  Author: Mateus Henrique
    Purpose: This program shows the relation between pointers and strings in C.
*/

/*
    Pointers and strings
    The concept of poitner arithmetic can also be applied to strings.
    Just as with arrays, it's also more advantageous to use pointers to traverse strings.

    Char arrays as pointers
    Having a pointer that points to the first element in a char array you can just implement the
    pointer to get the rest of the elements. The same concept works for decrementation.
*/

#include <stdio.h>
#include <limits.h>

#define END_STRING '\0'

// Function prototypes

void copyStringIndex(char to[], char from[]);

void copyStringPointer(char *to, char *from);

void copyStringPointerOpt(char *to, char *from);


int main(void)
{
    char string1[] = "A string to be copied.";
    char string2[CHAR_MAX];
    char string3[CHAR_MAX];
    char string4[CHAR_MAX];

    copyStringIndex(string2, string1);
    printf("%s\n", string2);

    copyStringPointer(string3, string1);
    printf("%s\n", string3);

    copyStringPointerOpt(string4, string1);
    printf("%s\n", string4);

    return 0;
}

/*
 * Copies a char array to another char array in a pointer matter.
 *
 * @param   to    the destination array.
 * @param   from  the source array.
 */
void copyStringIndex(char to[], char from[])
{
    int i;

    for (i = 0; from[i] != END_STRING; i++)
    {
        to[i] = from[i];
    }

    to[i] = END_STRING;
}

/*
 * Copies a char array to another char array in a pointer matter.
 *
 * @param   to    the destination array.
 * @param   from  the source array.
 */
void copyStringPointer(char *to, char *from)
{
    for (; *from != END_STRING; from++, to++) // Doing pointer arithmetic in both char arrays.
    {
        *to = *from; // Dereferencing and assigning.
    }

    *to = END_STRING;
}

/*
 * Copies a char array to another char array in a pointer matter (less lines of code version).
 *
 * @param   to    the destination array.
 * @param   from  the source array.
 */
void copyStringPointerOpt(char *to, char *from)
{
    while (*from) // The null characer is equal to the value 0.
    {
        *to++ = *from++;
    }

    *to = END_STRING;
}