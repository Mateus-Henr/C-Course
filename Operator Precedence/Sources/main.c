/*  Author: Mateus Henrique
    Purpose: The purpose of this program is to show how operator precedece works.
*/

/*
    Operator Precedence
    It determines the grouping of terms in an expression and decides how an expression should be evaluated.
    Some operators have higher precedence than others. For example when performing arithmetic operations
    multiplication operator has a higher precedence than the addition operator.
    Mathematical rules of precedence apply here.
    However with the usage of parentheses you can edit the precedence order. It's good to ALWAYS use parentheses.

    Associativity
    Associativity rules are applied when two operators have the same precedence.
    For most operators, the order is from left to right.
    Ex: "1 == 2 != 3" (more information about this example below).
*/

#include <stdio.h>

int main()
{
    unsigned int associativityExample = 1 == 2 != 3; // ((1 == 2) != 3)
    printf("associativityExample = %d", associativityExample);

    return 0;
}