/*  Author: Mateus Henrique
    Purpose: This program describes the concept of "pass by reference" in C.
*/

/*
    There are two ways that you can pass data to a function, being them:
    - Pass by value
    - Pass by reference
    C only does the "pass by value". But it simulates "pass by reference" because
    we copy addresses.

    Pass by value
    This is when a function copies the actual value of an argument into the formal parameter
    of the function. Changes made to the parameter inside the function have no effect on the argument.
    C programming uses this type of concept to pass arguments, due to this, code within a function
    cannot alter the arguments used to call the function, even though the values might have been changed
    inside the function.

    Pass by reference
    Copies the address of an argument into the formal parameter. The address is used to access
    the actual argument used in the call, so any changes made to the parameter will affect the passed
    argument.
    In order to mimic it in C, we declare the function parameters as pointer types, so then when the function
    is invoked the parameters will be a copy of the arguments passed in.
    C DOES NOT DO THIS, HOWEVER IT MIMICS IT. WE ACTUALLY COPY THE ADDRESS.

    The "const" modifier as a function parameter
    It's only hanfy if the parameter is a pointer, since you can't modify the values in the parameter outside
    of the function.
    You can use it in a pointer to specify that a function will not change the value to which the argument points.
    And it doesn't allow the value that the pointer points to be modified.
    You could specify the pointer itself as a constant too, but it doesn't make sense because the address is
    passed by value, meaning that it would only have that value within the function.
    THIS IS VERY IMPORTANT TO MAKE SURE THAT A FUNCTION CANNOT MODIFY THE VALUE THAT THE POINTER POINTS TO
    THAT CAME AS A PARAMETER.

    Returning pointers from a function
    It provides a way to return a set of values.
    You have to declare it with the return type of a pointer.
    Ex: "int * myFunction()".
*/

#include <stdio.h>

// Function prototypes

void swapByValue(int x, int y);

void swapByReference(int *x, int *y);


int main(void)
{
    // Showing that "passing by reference" doesn't work in C.
    int x = 10, y = 12;

    swapByValue(x, y);

    printf("Pass by value: X = %d, Y = %d\n", x, y);

    // The way that c simulates "pass by reference"
    swapByReference(&x, &y);

    printf("'Pass by reference': X = %d, Y = %d\n", x, y);


    return 0;
}

/*
 * Demostrates how "pass by reference" doesn't work in C.
 * Shows the "pass by value" concept.
 *
 * @param   x   an integer.
 * @param   y   an integer.
 */
void swapByValue(int x, int y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;
}

/*
 * Simulates a "pass by reference" in C.
 *
 * @param   x   an integer.
 * @param   y   an integer.
 */
void swapByReference(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}