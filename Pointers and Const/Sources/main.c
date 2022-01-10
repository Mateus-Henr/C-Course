/*  Author: Mateus Henrique
    Purpose: This program shows pointers and const in C.
*/

/*
    When the const modifier on a variable or an array it tells the compiler that the contents of the variable/array
    will not be changed by the program. If tried to be modified up ahead the compiler will throw an error.
    When using the const modifier in a pointer we have to decide whether the pointer value will be changed or
    whether the value that the pointer points to will be changed.

    Constant value that the pointer points to
    If the "const" modifier is the first word used, when a pointer is declared it indicates that the value pointed 
    to must not be changed by the pointer, but it can still be modified by the variable that holds that value.
    Also, it's possible to change the value of the pointer (change its address), the only unmodified value is
    the value that the pointer points to (even after changing its address it cannot be changed).
    Example below.

    Constant pointers
    When the value (address) that the pointer holds cannot the be changed.
    To do this you put the "const" modifier after the asterisk when defining the pointer.
    Any other values can still be changed.
    Example below.

    Defining both as constants
    It's also viable to use the "const" modifier twice to make sure that the pointer cannot have its value changed
    (address), as well as, the value that the pointer points to cannot be modified by the pointer through dereferenciation.
    Basically the pointer is unmodified, but you can still modify the variable that holds the value itself.
    Example below.
*/

#include <stdio.h>

int main()
{
    // Exampele when the value that the pointer points to cannot be changed
    long value = 999L;
    const long * pValue = &value; // Cannot be changed.

    // *pValue = 8888L; // Error
    value = 888L;
    printf("pValue = %ld\n", *pValue);

    long num = 777L;
    pValue = &num;

    printf("pValue = %ld\n", *pValue);


    // Example when the address that the pointer holds cannot be changed
    int count = 43, anotherCount = 54;
    int * const pCount = &count;

    // pCount = &anotherCount; // Error
    *pCount = 67;

    printf("pCount = %d\n", *pCount);

    // Example when the both the pointer and the value that it points two are constants.
    int item = 25, anotherItem = 76;
    const int * const pItem = &item;

    // *pItem = 26; // Error
    // pItem = &anotherItem; // Error

    return 0;
}