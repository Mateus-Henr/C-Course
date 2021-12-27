/*  Author: Mateus Henrique
    Purpose: The purpose of this program is to demostrate the difference between statements and expressions.
*/

/*
    Expressions and Statements

    Expressions
    Expressions consists of a combination of operators and operands (can be varaibles, constants, or both).
    Every expression has a value.
    Ex: "4 + 21"

    Statements
    Statements form the basic steps of C, and most statements are constructed from expressions.
    A program is a serie of statements with special syntax ending with a semicolon, in other words, a complete instruction to the computer.
    Declaration statement = "int Jason;".
    Assignment statement = "Jason = 5;".
    Function call statement = "printf("Jason");".
    Structure statement = "while(Jason < 20) Jason = Jason + 1".
    Return statement = "return 0;".
    OBS: C considers any expressins that ends with a semicolon as a statement.

    Compound statements
    Two or more statements grouped together by enclosing the in braces (shown below). 
*/

#include <stdio.h>

// A block of code is just multiple statements.
int main()
{
    int index = 0;

    while (index < 10) // Example of compound statement
    {
        printf("hello\n");
        index = index + 1; // A statement that constains an expressions.
    }
    

    return 0;
}