/*  Author: Mateus Henrique
    Purpose: This program wwas created to describe multidimensional arrays.
*/

/*
    Multidimensional Arrays
    A linear array has a single dimension (just one pair of brackets).
    VISUAlIZE IT AS A TABLE.
    Two-dimensional arrays represent a rectangular arrangement like rows and columns in a spreadsheet, a matrix.
    More than two dimensions aren't commonly used and the dimensions are specified by the number of brackets.
    Regarding its declaration, in addition to the single-dimensional array's declaration, it has another pair of brackets.
    Ex: "int matrix[4][5];".

    Initializing a two dimensional array
    Very similar to initializing a single-dimensional array, but now for each row you have to enclose it with brackets.
    Also, commas are necessary between the rows with an exception of the last row.
    Ex: "int numbers[3][4] = {
                        {10, 20, 30, 40}, // First wow
                        {15, 25, 35, 45},
                        {47, 48, 49, 50} // Second row
                       };".

    Initialzing just specific indexes and designated initializers
    Similarly to when using 1D arrays, for 2D arrays we can also initialize only specific values and the rest will be set to 0.
    Designated initializers work in the same way, with the exeception that now we have a matrix.
    Ex: "int matri[4][3] = {[0][0] = 1, [1][1] = 5, [2][2] = 9};".

    Other dimensions
    With other dimensions you just apply what was explained above, but now with more pair of brackets.
    The more dimensions an array has, the more nested loops are going to be necessary. The number of dimensions 
    will be equal to the number or loops necessary.
    An array of three dimensions could be seen as a stack of tables.
*/

#include <stdio.h>

int main()
{
    float grades[10];
    int count = 10;
    double sum = 0;
    float average = 0.0f;

    printf("\nEnter the 10 grades:\n");

    for (int i = 0; i < count; i++)
    {
        printf("%2d>", i + 1);
        scanf("%f", &grades[i]); // Same format as assigning a variable.
        sum += grades[i];
    }

    average = (double) sum / count;
    printf("\nAverage of the ten grades entered is: %2f\n", average);

    return 0;
}