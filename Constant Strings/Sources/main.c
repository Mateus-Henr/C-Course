/*  Author: Mateus Henrique
    Purpose: This program consists of a description of constant strings in C.
*/

/*
    Constant strings
    Values that never change.
    Also constants increase readability, because a variable name can give more information than the value itself.
    Also, helps maintainance since you only have to modify in one place in the program.
    Whenever you have a number (magic numbers) in the program it's best to put that in a constant.

    #define
    You can use this preprocessor to define constants.
    When the program is compiled, where you using that constant will be substituted by the value (compile-time substitution).
    Can be seen in the entire program.
    You can also "store" a keyboard key in a constant.
    Ex: "#define TAXRATE 0.015".

    const
    C90 added it.
    This keyword is used to convert a declaration for a variable int a declaration for a constant.
    It's more flexible than using define, since it allows you yo declare the tpye and allows better control over
    which parts of a program can use the constant.
    With const we can initialize and declare a character array as const, that's a good way of handling standard messages.
    Ex: "const int MONTHS = 12;".

    enum
    Another way of creating a constant.
*/

#include <stdio.h>

#define TAXRATE 0.015

int main()
{
    const int MONTHS = 12;

    printf("MONTHS = %d\n", MONTHS);
    printf("TAXRATE = %0.3lf\n", TAXRATE);

    return 0;
}