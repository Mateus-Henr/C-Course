/*  Author: Mateus Henrique
    Purpose: The purpose of this program is to give a general overview of control flow statements.
*/

/*
    Control Flow
    The statements inside a source file are generally executed from top to bottom, in a sequencial order.
    By using control flow statements we can add decision making, looping, or branching, and through that we can change this order of execution.
    They are divided in:
    - Decision-making statements (if-then, if-then-else, switch, goto)
    - Looping statements (for, while, do-while)
    - Branching statements (break, continue, return)

    Decision Making
    This is like asking a question inside the program, depending on the answer for that question a specific part of code gets executed.

    If Statements
    Can be just an if or an if-else or nested if statements. Basically, it asks the question or tests a specific expression and this happens inside the parentheses.

    Repeating Code
    There are times that is necessary the usage of repeating code in order to do something. This action can be met by using looping.
    Loop statements chnage execution from normal sequence and when execution leaves the scope of the loop, all objects created inside the scope of that loop get destroyed.
    A loop becomes an infinite loop if a condition never becomes false.
    Beyond the looping statements decribed above we can also find ourselves with nested loops.
    The do-while loop that is the one that differs a little bit, since it checks the condition at the bottom, so it's assured to execute at least once.
*/

#include <stdio.h>

int main()
{
    if (4 == 5)
    {
        printf("Hi, my name is Mateus.\n");
    }

    return 0;
}