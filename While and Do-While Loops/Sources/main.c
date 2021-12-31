/*  Author: Mateus Henrique
    Purpose: This program consists of a description of while and do-while loops in C.
*/

/*
    While and Do-While Loops

    While Loop
    It keeps its execution as long as its expression evaluates to true.
    Generally used when you don't know in advance how many times you are going to be looping.
    Pre-test loop (checks before executing code inside of it).
    If it's expressions starts out false, none of the loop statements will be executed.
    Usually its a variable that affects the "boolean expression" of the while loop, and this variable must be modified in the body of the loop.
    Preferably used for infinite looping.

    Structure
    while (boolean expression)
    {
        statement1;
        ..........;
    }
    OBS: When using while loops you can't initialize variables inside the parentheses as we did with for loops.


    Do-While Loop
    Considered as a post-test loop, since it only checks the expression after executing the loop at least once.
    After the first execution, the body is only executed while the condition is true.
    It might be interesting using this while loop with values given by the user or got through an archive, since we can perform
    some validation when using it (instead of using an infinite while loop).
    Can also be counter controlled.

    Structure (with an example)
    do
    {
        prompt for password;
        read user input;
    } while (input not equal to password);
*/

#include <stdio.h>

int main()
{
    // Simulating a counter using a while loop.
    unsigned int count = 1; // Loop control variable

    while (count <= 5)
    {
        printf("%i\n", count);
        count++;
    }
    
    // Simulating do-while loop
    int number = 0;

    do
    {
        printf("Type the number:\n");
        scanf("%d", &number);
        printf("Typed number = %d\n", number);
    } while (number >= 0);
    

    return 0;
}