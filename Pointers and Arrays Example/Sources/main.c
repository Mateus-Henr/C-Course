/*  Author: Mateus Henrique
    Purpose: This program shows some example of pointer arithmetic in C.
*/

/*
    Adding an integer value in other types of pointers
    Even though other types of values occupy a different space in memory than an int, when looping
    through an array we will ALWAYS get the next element by adding an integer to the pointer, it
    doesn't matter the data type of the array.
    The examples below show it.
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char multiple[] = "a string";
    char *p = multiple;

    for (int i = 0; i < strlen(multiple); i++)
    {
        printf("multiple[%d] = %c *(p+%d) = %c &multiple[%d] = %p p+%d = %p\n",
        i, multiple[i], i, *(p + i), i, &multiple[i], i, p + i);
    }

    printf("\n");

    // Another example
    long multiple1[] = {15L, 25L, 35L, 45L};
    long *p1 = multiple1;

    // IMPORTANT - It doesn't matter which data type we are looping through, by adding 1, etc, it'll
    // get the desired position.
    for (int i = 0; i < (sizeof(multiple1) / sizeof(multiple1[0])); i++)
    {
        printf("address p1+%d (&multiple1[%d]):%lld *(p1+%d) value:%ld\n",
               i, i, (unsigned long long) (p1 + i), i, *(p1 + i));
    }

    printf("\nType long occupies %d bytes.\n", (int) sizeof(long));

    return 0;
}