/*  Author: Mateus Henrique
    Purpose: This program describes void pointers in C.
*/

/*
    Void pointers
    The type name void means absence of any type.
    A pointer of type "void *" can contain the address of a data item of any type (more flexibility).
    It's often used as a parameter type or return value type with functions that deal with data in a
    type-independent way. So you can allow you function to be more flexible if it takes it as parameter.
    It cannot be dereferenced direclty since it doesn't know what type of object it's pointing to.
    The void pointer must be explicitly cast to another pointer type before it's dereferenced.
    For example a varaiable of type int can be stored in a pointer variable of type "void *", however
    if you want to have access to the int value you have to dereference it first.
    Example below.
*/

#include <stdio.h>
#include <stddef.h>

int main()
{
    int i = 10;
    float f = 2.34F;
    char ch = 'k';

    void *voidPointer = NULL;

    voidPointer = &i;
    printf("Value of i = %d\n", *((int *) voidPointer));

    voidPointer = &f;
    printf("Value of f = %0.2f\n", *((float *) voidPointer));

    voidPointer = &ch;
    printf("Value of ch = %c\n", *((char *) voidPointer));

    return 0;
}