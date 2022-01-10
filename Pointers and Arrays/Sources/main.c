/*  Author: Mateus Henrique
    Purpose: This program describes how to define pointers in C.
*/

/*
    Pointers and Arrays
    An array is a collection of objects of the same type that you can refer to using a a single name.
    The main reasons for using pointers to arrays are ones of notational convenience and of efficiency.
    For the most part use pointers over arrays.
    When using pointer in a array, we use the pointer to point to a specific element in the array.

    Setting a pointer to an array
    To set a pointer to the first element in the array you just have to assign the array to the pointer.
    Under the hood, an array name is a pointer that points to the first element in the array.
    That's why you should not use the "&".

    Going to other elements in an array
    It's possible to access other elements in an array by either using "array[i]" or "*(array + i)".
    The "array++" expression only words if "array" is a pointer variable, it doesn't work otherwise.
*/

#include <stdio.h>

int main()
{
    int values[100] = {1, 2, 3};
    int *valuesPtr;

    // Assigning the first element of an array to a pointer
    valuesPtr = values; // &values[0]; is also valid

    printf("valuesPtr = %d\n", *valuesPtr);

    return 0;
}