/*  Author: Mateus Henrique
    Purpose: This program consists of a description of for arguments and paramenters.
*/

/*
    Arguments and Parameters

    Paramenter
    It's a variable in a function declaration (just the signature) and function definition (implementation), the header.
    They are placeholders for the arguments that need to be specified when the function is called.
    When a function has no parameters is recommended to put "void" in the parentheses.
    The parameter names are local to the function. 
    HAVE TO DO WITH THE FUNCTION DECLARATION AND IMPLEMENTATION, PLACEHOLDERS.

    Argument
    It's the data that you pass into the function parameters.
    They are the actual value of a variable that gets passed to the function.
    When passing an array as an argument to a function you must also pass the size of the array.
    WHEN YOU CALL THE FUNCTION.
    As example of arguments we have the values that we pass to "printf()".

    Good Practise
    To add comments before each function definition.

*/

#include <stdio.h>

/*
 * multiplyTwoNumbers();
 *
 * Multiplies two numbers and prints the result.
 *
 * @param   x   an integer number.
 * @param   y   an integer number.
 */
void multiplyTwoNumbers(int x, int y) // Function definition (2 parameters)
{
    int result = x * y;
    printf("The product of %d multiplied by %d is: %d\n", x, y, result);
}

int main(void)
{
    multiplyTwoNumbers(10, 20);
    multiplyTwoNumbers(20, 30);
    multiplyTwoNumbers(50, 2);

    return 0;
}
