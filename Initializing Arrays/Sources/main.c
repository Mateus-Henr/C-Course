/*  Author: Mateus Henrique
    Purpose: This program was created to describe ways of initializing arrays.
*/

/*
    Initializing an array
    It's good to initialize values in an array to avoid problems.
    This way you can aassign initial values to an array when it's declared.
    To do so, you provide the values in a list, which each value is separated by commas and the entire list is enclosed by curly braces.
    The values are assigned in the order that they are written.
    Ex: "int counters[5] = {0, 0, 0, 0, 0}".

    Initializing just some values
    We don't actually need to initialize all the values in an array, we can only initialize some.
    It's important to know that when we initialize just some values of an array the other elements that have not been initialized will
    have the valeu of 0.
    Ex: "float data[500] = {100.0, 343.54, 6576.43}".

    Designed Initializers
    Available from C99.
    Allows to choose which elements are initialized.
    Basically you inform the index of the element that you want to initialize.
    Ex: "float sample_data[5000] = {[2] = 500.5, [10] = 345.54]}"

    Repeating an initial value
    C doesn't provide any mechanisms to initialize the same values for all elements except if the desired value is 0.
    The only way of doing it is through a loop.
*/

#include <stdio.h>

#define MONTHS 12

int main()
{
    // Normal initialization
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int index = 0; index < MONTHS; index++)
    {
        printf("Month %d has %2d days.\n", index + 1, days[index]);
    }

    printf("\n\n");

    // Designated initialization
    // Values that are not being initialized here will be equal to 0.
    int days1[MONTHS] = {31, 28, [4] = 31, 30, 31, [1] = 29};

    for (int i = 0; i < MONTHS; i++)
    {
        printf("%2d %d\n", i + 1, days1[i]);
    }

    printf("\n\n");

    // Initializing all elements to the same value
    int array_values[10] = {0, 1, 4, 9, 16};

    for (int i = 5; i < 10; i++)
    {
        array_values[i] = i * i;

        for (int i = 0; i < 10; i++)
        {
            printf("array_values[%i] = %i\n", i, array_values[i]);
        }
    }

    return 0;
}