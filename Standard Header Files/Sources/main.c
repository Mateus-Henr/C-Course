/*  Author: Mateus Henrique
    Purpose: This program describes standard header files in C.
*/

/*
    The C standard library is basically all the functionalities that come with the C programming
    language, such as string manipulation, inputting and outputting stuff, etc.

    <stddef.h>
    Contains some standard definitions, being "NULL" and "size_t" amongst them.
    NULL - A null pointer constant.
    offsetof(structure, member) - The offset in bytes of the member from the start of the structure.
                                  The type of the result is "size_t".
    ptrdiff_t - The type of integer produced when subtracting two pointers.
    size_t - The return type of the "sizeof" operator.
    wchar_t - The type of integer required to hold a wide character.

    <limits.h>
    Contains the limits for all the data types, for example what is the biggest and smallest value
    that a data type can take. Some examples are:
    CHAR_MAX - Maximum value for an object of type char.
    SCHAR_MAX - Maximum value for an object of signed char.
    INT_MAX - Maximum value of an int.

    <stdbool.h>
    Contains definitions for working with Boolean variables.
    bool - Substitute name for the basic "_Bool" data type.
    true - Value of 1.
    false - Value of 0.
*/

#include <stdio.h>

int main(void)
{
    return 0;
}