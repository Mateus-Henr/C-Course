/*  Author: Mateus Henrique
    Purpose: This program was created to give information on variable length arrays.
*/

/*
    Variable Length Arrays
    This was added in C99.
    It doesn't mean that the side of the array is going to vary just because it's a variable.
    Variable length arrays allow you to specify the size of an array with a variable when creating an array.
    It's basically using a variable for the size.
    Ex: "int array[n];".
*/

#include <stdio.h>

int main()
{
    int size;

    printf("Type the size for the array:\n");
    scanf("%d", &size);
    int array[size];

    return 0;
}