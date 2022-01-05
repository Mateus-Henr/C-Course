/*  Author: Mateus Henrique
    Purpose: This program consists of a basic description of functions.
*/

/*
    Function
    A function is a self-contained unit of program code designed to accomplish a particular task.
    Helps to avoid duplication of code and reduces overall complexity of the code. And makes readability easier.
    Can also be called subroutines or procedures.
    Divinding code into functions helps the maintainance of the code as well as debugging and testing.
    The goal of when using functions is to reduce complexity as much as possible.
    It's important to think of it as a blackbox caring only about the input and output.
    Functions can receive parameters and return data.
    When returning data, it can be either returning something from the function itself or storing the result of the function in an
    address of a variable that has been passed as parameter.
    Use descriptive function names.
    Ex: "strlen()".

    Implementing functions
    It's when you write the code for the function.
    C libraries offer functions that are already implemented, such as "printf()".

    The "main()" function
    This function is specially recognized by the C system.
    It indicates where the program is to begin execution.
    Can return optional data.
*/

#include <stdio.h>

#define SIZE 50

// The "main()" is a function.
int main()
{
    float list[SIZE];

    // Example of functions for a list.
    // readList(list, SIZE);
    // sort(list, SIZE);
    // average(list, SIZE);

    return 0;
}