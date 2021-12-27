/*  Author: Mateus Henrique
    Purpose: The purpose of this project is to show the basic operators.
*/

/*
    Operators
    They are function that use a symbolic name.
    Perform mathematical or logical functions.
    They tend to be combined with the infix style, meaning that the stay in between the operands.
    A logical operator (boolean operator) returns a boolean result (true or false).
    Can be arithmetic (-, +, /, *, %, ++, --), logical (&&, ||, !), assignment (=, +=, -=, *=), relational (<, >, !=, ==, <=, >=), bitwise (<<, >>, ~).

    Postfix
    The new value is just assigned after the expression.
    Ex: "a++;".

    Prefix
    The new value is assigned in the expression.
    Ex: "++a;".

    Unary operator vs binary operators
    Unary operators are those that perform an operation in only one operand, as an example we can mention the increment operator.
    Binary operators are those which the operation is performed on two operands, like the sum operator.

    Other assignment operators (/=, %=, <<=, >>=, &=, ^=, |=).
*/

#include <stdio.h>

int main()
{
    int a = 33;
    int b = 15;
    _Bool c = 1;
    _Bool d = 1;

    int result = 0;
    _Bool secondResult;

    result = a % b;

    printf("result is %d\n", result);

    printf("a is %d\n", a++); // Postfix operator
    printf("a is %d\n", ++a); // Prefix operator

    secondResult = c && !d;

    printf("secondResult is %d\n", secondResult);

    return 0;
}