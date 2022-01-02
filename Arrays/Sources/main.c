/*  Author: Mateus Henrique
    Purpose: This program wwas created to give some sort of overview on arrays.
*/

/*
    Arrays
    Used to store multiple variables of the same type under a single name.
    It must be a fixed number of items.

    Declaring an array
    The same as declaring variables plus the addition of brackets (inside the nbrackets you specify the number of elements).
    Ex: "long numbers[10];".

    Accessing elements in a array
    To access an array you have to use the number of the array plus an index for the desired element that you want to access.
    Arrays are zero based, meaning that its first element is located at position 0. Therefore the last element is N - 1.
    An expression can be used as well to represent the index position, however it must be valid.
    If you try to access an index that doesn't exist in the array it may cause an error or display garbage data, this is called
    out of bounds error. This type of error is not going to be checked by the compiler, it's only detected at runtime.
    WHEN WE HAVE THIS ERROR THE BEHAVIOUR IS VERY UNPREDICTABLE.
    Ex: "numbers[0];".

    Assigning values to an array
    To do that you use the same concept of accessing elements in an array but now you use the assignment operator to assign a value
    to it, in other words you use the index to assign a value to a specific position in an array.
    Ex: "numbers[2] = 3.5454";
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