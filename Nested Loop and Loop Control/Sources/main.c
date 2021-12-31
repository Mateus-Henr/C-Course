/*  Author: Mateus Henrique
    Purpose: This program has as purpose to give an insight in mnested loops and loop control.
*/

/*
    Nested Loops
    A loop inside of another.


    Continue Statement
    This is used when you want to skip the current iteration.
    It ignores any code that comes after the "continue" keyword, code which is inside the loop.

    
    Break Statement
    This is used when you want to exit the loop earlier, let's ssay if a condition has been met you want to end the loop.
    By jumping out of the loop, statements that come after the "break" keyword are going to be ignored.
    If it's inside nested loops, it'll only affect the innermost loop.
    It's often used when you have more than one reason to leave a loop.
*/

#include <stdio.h>

int main()
{
    // Example of nested loops.
    int count = 5;
    int sum = 0;

    for (int i = 1; i <= count; i++)
    {
        sum = 0; // Initializing in the inner loop.

        for (int j = 1; j <= i; j++)
        {
            sum += j;
        }

        printf("\n%d\t%d\n", i, sum);
    }

    // Same version as above, but now we are nesting a while loop.
    for (int i = 1, j = 0; i <= count; i++)
    {
        sum = 1;
        j = 1;
        printf("\n1");

        while (j < i)
        {
            sum += ++j;
            printf(" + %d", j);
        }

        printf(" = %d\n", sum);
    }

    // Continue example
    enum Day {Monday, Tuesday, Wednesday, Thursday, Friday, Saturdaty, Sunday};

    // We can modify an enum through its index.
    for (enum Day day = Monday; day <= Sunday; day++)
    {
        if (day == Wednesday)
        {
            continue; // Skipping the code that comes below.
        }

        printf("It's not Wednesdday!\n");
    }

    int p = 5;
    int q = 0;

    // Break example
    while (p > 0)
    {
        printf("%d\n", p);
        scanf("%d", &q);

        while (q > 0)
        {
            printf("%d\n", p * q);

            if (q > 100)
            {
                break;
            }

            scanf("%d", &q);
        }

        // This condition is completely equal to the one in the loop above, and it basically means that swe want to jump out of both
        // loops if a sparticular condition has been met. If we had more loops it could be acceptable to use the "goto" keyword.
        if (q > 100)
        {
            break;
        }

        scanf("%d", &p);
    }
    
    return 0;
}