/*  Comments like this are used if you want a multliine comment.
    Usually multiline lines tell us what the program is doing.

    GOOD PRACTISE
    At the beginning at the file is important to have the name of the author, the purpose of the program and the date as followed:
    Author: Mateus Henrique
    Purpose: This program adds two integer values and displays the results.
    Date: 12/10/2021
*/

// It's important to use comments to make readability easiar, therefore making the code easier to maintaint.
// However too many comments is not good.

#include <stdio.h>

int main()
{
    // Declare variables (This is a single line comment)
    int value1, value2, sum;

    // Assign values and calculate their sum
    value1 = 50;
    value2 = 25;
    sum = value1 + value2;

    // Display the result
    printf("The sum of %i and %i is %i\n", value1, value2, sum);

    return 0;
}