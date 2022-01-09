/*  Author: Mateus Henrique
    Purpose: This program shows some common mistakes in C.
*/

/*
    Misplacing a semicolon or missing a semicolon
    Ex: if (j == 1000);
            j = 0;

    Confusing the "=" operator with the "==" operator
    It cannot be used for strings.
    Ex: "int i = 0" is different from "i == 0".
    Ex: if (a = 2) // THe assignment operation never fails, so this condition will always be evaluated to true.
            printf("Your turn.\n");

    Omitting prototype declarations
    This happens when a function is defined later in the program, or in another file, and is not explicitly declared.
    Always include a prototype declaration for all functions that you call (either explicitly yourself or implicitly by including
    the correct header file in your program).
    The compiler assumes that when the function fits in this type, it'll return an int.
    Ex: result = squareRoot(2);

    Failing to include the header file for an external function
    Compiler tells you.
    Ex: "double answer = sqrt(value1);" (Without including "math.h")

    Confusing a character constant and a character string
    When definign characters we have to use single quotes and double quotes are used for strings.
    Ex: "text = 'a';" is different from "text = "a";".
    In the example above, in the first one a single char is assigned to text and in the second example a pointer to the character
    string is assigned to text.

    Using the wrong bounds for an array
    Always remember that arrays are zero based.
    When using an array for a string DON'T FORGET to reserve an additional space for the null terminator.
    That why you don't assign a size to the array when initializing it.
    Ex:
    int a[100], i, sum = 0;
    for (i = 1; i <= 100; i++)
        sum += a[i];
    
    Confusing the "->" operator with the "." operator when referencing structure members
    The "." operator is used for structure variables.
    The "->" is used for structure pointer variables.

    Ommitting the ampersand("&") before nonpointer variables in a scanf() call
    Ex: int number;
        scanf("%i", number);

    Using a pointer variable before it's initialized
    Ex: char *char_pointer;
        *char_pointer = 'X'; (assigning a value by dereferencing the pointer)
    
    Ommiting the break statement at the end of a case in the switch statement
    If you don't include the "break" statement it'll fall into the cases below.
    
    Inserting a semicolon at the end of a preprocessor definition
    You can't add semicolons there.
    Ex: "#define END_OF_DATA 999;".

    Omitting a closing parentheses or closing quotation marks on any statement
    Don't forget to close all parentheses, brackets, quotes, etc.
    Generates compiler errors, and it might move the error down.
    Ex: "sum = (1 + 2;".
*/

#include <stdio.h>

int main()
{
    return 0;
}