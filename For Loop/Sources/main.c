/*  Author: Mateus Henrique
    Purpose: This program consists of a description of for loops in C.
*/

/*
    Repeating code
    C has some constructs that are specific used for code repetition, being them:
    It's possible to repeat code until some condition is met or a specific number of times, if there's no condition to be met you'll have an infinite loop.
    The action that you want to repeat will be in the body of the loop.
    Conditions in loops must have be evaluated to true if you want it to run again.

    Counter Controlled Loop
    It repeats just a specific number of times.
    The "for" loop is an example.
    Structure For Loop
    for (starting_condition; continuation_condition; action_per_interation)
    {
        loop_statement;
    }
    It's possible to initialize several variables in the "starting_condition", by separating them by commas.
    BUT for compiles before C99 is NOT possible to define variables inside of the for statement.
    The condition is prechecked which is different from the do-while loop.
    It doesn't matter if the "action_per_interaction" is prefixed or sufixed.
    Infinite loop using for loop:
    for (;;)
    {
        // Statements
    }


    Not Counter Controlled Loop
    This is used when you don't know beforehand how many times you want to repeat a specific code.
    The "do-while" and "while" loop are examples of it.
*/

#include <stdio.h>

int main()
{
    // Example of a for loop.
    for (int count = 1; count <= 10; ++count)
    {
        printf(" %d", count);
    }

    printf("\n");

    // Example of a for loop handling more than one variable.
    for (int i = 1, j = 2; i <= 5; ++i, j = j + 2)
    {
        printf(" %d", i * j);
    }

    // Another example
    unsigned long long sum = 0LL;
    unsigned int count = 0;

    printf("\nEnter the number of integers you want to sum:\n");
    scanf("%i", &count);

    for (unsigned int i = 1; i <= count; ++i)
    {
        sum += i;
    }

    printf("\nTotal of the first %i numbers is %llu\n", count, sum);

    // Infinite loop
    for (;;)
    {
        break;
    }

    return 0;
}