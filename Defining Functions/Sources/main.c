/*  Author: Mateus Henrique
    Purpose: This program consists of a description on how to define functions.
*/

/*
    Defining a function
    The function header is the first line of the function when defining it.
    Then you enclose the executable code in curly braces (this is called the function body).
    You can define a function without body (implementation) for testing purposes.

    The function header
    Defines the name of the function, its parameters and the type for the value that it returns.

    The function body
    Contains usual code that gets executed when you call the function.
    The code within the body has access to any values that were passed as arguments.

    Structure
    return_type function_name(parameters - separated by commas)
    {
        statements;
    }
    The return_type "void" is used to identify that the function doesn't return any value.

    Naming functions
    Must be a valid name (no keywords for example).
    There's no function overloading in C, in other words, you cannot have two functions with the same name.

    Naming function with more than one word
    - camelCase
    - CaptalizeTheFirstLetterOfAllWords
    - separeted_by_underlines

    Function prototypes
    It's a statement that defines a function.
    Defines its name, its return value trpe and the type of each of its parameters.
    Provides all the external specifications for the function.
    It's the signature of the function.
    THIS IS JUST DECLARING THE FUNCTION, IN OTHER WORDS, SAYING THAT THIS EXISTS.
    It's necessary to use it because of the order of the code.
    It enables the compiler to generate the appropriate instructions at each point where you call the function.
    It also checks if you are using the function correctly in each invocation.
    They usually goes in header files. And when you include headers files you are adding function prototypes.
    Usually appear prior to the implementations of any functions.
    Ex: void printMessage(void);

    GOOD PRACTISE
    It's good practise to ALWAYS include declarations for all of your function in a program source file
    regardless of where they are called.
    Prevent any errors from occuring and keeps your design more consistent.
*/

#include <stdio.h>

void printMessage(void); // Function prototype.

void add(void);

int main()
{
    add();
    printMessage();

    return 0;
}

void printMessage(void)
{
    printf("Programming is fun.\n");
}

void add()
{

}