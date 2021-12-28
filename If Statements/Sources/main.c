/*  Author: Mateus Henrique
    Purpose: The purpose of this program is to demonstrate how if statements generally work.
*/

/*
    If Statements
    Used to stipulate execution of certain parts of code in your program.
    They can be if, if-else or if-else if-else, etc.

    Structure
    if (boolean expression)
    {
        program statement;
    }
    else (Optional)
    {
        program statement;
    }
    We could translate the following sentence into the C language, for example.
    "If it's not raining, then I will go swimming."
    That would be:
    if (it is not raining)
    {
        I will go swimming;
    }
    OBS: If the condition is not true, this nothing will be evaluated, since we don't have an else statement.



    Else if statement
    You can handle additional complex decision making by adding an if statement to your else clause.

    Structure
    if (boolean expression1)
    {
        program statement1;
    }
    else
    {
        if (boolean expression2)
        {
            program statement2;
        }
        else
        {
            program statement3;
        }
    }
    And the code above code be represented as:
    if (boolean expression1)
    {
        program statement1;
    }
    else if (boolean expression2)
    {
        program statement2;
    }
    else
    {
        program statement3;
    }
    OBS: The code above means that just one condition will be met. It's important to notice that the "else if" condition will only
         be tested in case of the first condition being false.


    
    Nested If-else Statement
    Nesting conditions inside other conditions.

    Structure
    if (boolean expression1)
    {
        // Executes when boolean expression1 is true.

        if (boolean expression1)
        {
            // Executes when boolean expression2 is true.
        }
    }



    The conditional operator (ternary operator)
    It's similar to a if-else statement and it takes three operands.
    The first expression is executed if the condition is true and the second statement is executed if the condition is false.

    Structure
    condition ? expression1 : expression2;
*/

#include <stdio.h>

int main()
{
    // If statement (Just showing how the if statement works)
    int score = 95;
    int big = 90;

    if (score > big)
    {
        printf("Jackpot!\n");
    }

    if (score > big)
    {
        score++;
        printf("You win\n");
    }

    // If with an else statement (Identifying if the number is either even or odd)
    int number_to_test, remainder;

    printf("Enter the number to be tested:\n");
    scanf("%i", &number_to_test);

    remainder = number_to_test % 2;

    if (remainder == 0)
    {
        printf("The number is even.\n");
    }
    else
    {
        printf("The number is odd.\n");
    }

    // Else if statement (Identifying if the number is positive or negative or zero)
    int number, sign;

    printf("Please type a number:\n");
    scanf("%i", &number);

    if (number < 0)
    {
        sign = -1;
    }
    else if (number == 0)
    {
        sign = 0;
    }
    else
    {
        sign = 1;
    }

    printf("Sign = %i\n", sign);


    // Nested If-else Statement (Movement of a player)
    int gameIsOver = 0;
    int playerToMove = 1;

    if (gameIsOver == 0)
    {
        if (playerToMove == 1)
        {
            printf("Your Move\n");
        }
        else
        {
            printf("My Move\n");
        }
    }
    else
    {
        printf("The game is over\n");
    }


    // Ternary Operator
    int x = 6, y = 5;

    // Here x will be assigned to the value in the expression that was executed.
    x = y > 7 ? 25 : 50;
    // The same as:
    // if (y > 7)
    // {
    //     x = 25;
    // }
    // else
    // {
    //     x = 50;
    // }

    printf("x = %d\n", x);

    return 0;
}