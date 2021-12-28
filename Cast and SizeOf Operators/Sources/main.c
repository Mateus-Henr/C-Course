/*  Author: Mateus Henrique Vieira Figueiredo
    Purpose: The purpose of this project is to demostrate the cast and sizeof operators.
*/

/*
    Type Convertions
    Conversion between different types can happen automatically (implicit conversion) by the language or explicit by the program.
    Normally, you shouldn't mix types, but it may be useful.


    Implicit Convertion
    Whenever a floating-point value is assigned to an integer variable in C, the decimal portion of the number gets truncated (disappears).
    However doing the opposite, convering an int to a float there's no "damage" to the number.

    During Arithmetic Expressions
    If two operands in an expression are integers then any decimal portion resulting from a division operation is discarded, even if the result
    is assigned to a floating variable.
    If one operand is an int and the other is a float then the operation is performed as a floating point operation.


    Explicit Convertion
    This is the best practise, since when using this you're telling C exaclty to what type it should convert data to, avoiding data loss and
    making readability easier.
    This is called a cast and consists of preceding the quantity with the name of the desired type in parentheses.g
    This operator (cast) has a higher precedence than all the arithmetic operators except unary minuas and unary plus.
    Ex: (int) 21.51 + (int) 26.99 becomes 21 + 26.



    Sizeof Operator
    This operator is used to tell how many bytes are occupied in memory by a given type.
    Since that the size of some data types depends on what OS the program is being run, this operator is used to determine the size of the data type
    in that specific OS.
    NOT A FUNCTION and it's evaluated at compile time and not at runtime, unless a variable-length is used in its argument.
    Its argument can be a variable, an array name, the name of a basic ord derived data type or an expression (being the result of the expression what the
    operator is going to calculate).
    Whenever as possible use it to avoid hard-code sizes.


    
    Other Operators
    The "*" can be used as a unary operator to represent a pointer to a variable.
    The "?" is using for decision making (comparisons). Called the ternary operator.
*/

#include <stdio.h>

int main()
{
    int x = 0;
    float f = 12.125;
    x = f;

    printf("Value = %d", x);

    return 0;
}