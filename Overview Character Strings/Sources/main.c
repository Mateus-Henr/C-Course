/*  Author: Mateus Henrique
    Purpose: This program consists of an overview on character strings in C.
*/

/*
    Character strings
    When assigning a value to a char it can only be enclosed by single quotes. This happens because you can only assign a single character to a char.

    Strings
    A string constant or string literal is a sequence of characters or symbols enclosed by a pair of ddouble-quotes.
    ANYHING between double quotes is interpreted by the compiler as a string.
    An example of us using strings is when using "printf()" function, the first parameter must be a string literal.

    Escaping special characters
    If you want to use the double quote symbol inside a string you have to escape the symbol by using a backslash before the double quote symbol.
    Another symbol that needs "escaping" when used in a string is the backslash. You can escape it by adding another backslash in front of it.

    A string in memory
    A string in memory always finishes with a "\0" which's the null character.
    This null character is a special character with the code value 0 that's used for the compiler to determine where the string ends.
    The length of a string is always one greater than the number of characters because of the null character.
    You can use the "\0" explicitally and after using it, it would mean that you have two strings.
    
    Null character vs NULL
    null character is a string terminator.
    NULL is a symbol that represents a memory address that doesn't reference anything.
*/

#include <stdio.h>

int main()
{
    // The "/0" indicates the end of the string, therefore the value displayed will be only up to this symbol.
    // The function stops displaying when it finds the null character.
    printf("The character \0 is used to terminate a string.");

    return 0;
}