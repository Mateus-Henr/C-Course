/*  Author: Mateus Henrique
    Purpose: This program decribes how to return data from functions.
*/

/*
    Returning data
    Functions can return data using a specific syntax.
    The type of data to be returned is the first thing specified when defining a function.
    If you don't want to return anything the function return type will be void.

    The return statement
    This statement provides the means of exiting from a function.
    For exiting functions that have as return type void you can use just the statement "return;".
    Multiples "return" statements makes readability more complicated, since it gets hard to indentidy where you're returning.
    That why is better to create variables and return only once.
    Functions that don't return any data must be void.

    Structure
    return expression;
    The expression must be of the same type as the one return type defined in the header.
    If it isn't the compiler will try to convert it.

    Invoking a function
    To call a function we use the function name followed by the arguments to the function between parentheses.
    When you call a function, the values of the ARGUMENTS that you specify in the call will be assigned to the PARAMETERS in the function.
    When the function executes, the computation proceeds using the values you supplied as arguments.
    The arguments you specify when you call a function must agree in type, number and sequence of parameters.
    
    Assigning data returned
    If the function returns data you can assign it to a variable similar to what we do with expressions.
    You can call a function that return data without assigning that ata to anything, "ignoring" the return.
    Ex: int x = myFunctionCall();
*/

#include <stdio.h>

/*
 * multiplyTwoNumbers();
 *
 * Multiplies two numbers.
 *
 * @param   x   an integer number.
 * @param   y   an integer number.
 * @return      the multiplication of the two numbers.
 */
int multiplyTwoNumbers(int x, int y)
{
    int result = x * y;
    return result;
}

int main(void)
{
    int result = 0;
    result = multiplyTwoNumbers(10, 20);

    printf("result is %d\n", result);

    return 0;
}