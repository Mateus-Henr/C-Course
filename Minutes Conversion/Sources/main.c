/*  Author: Mateus Henrique
    Purpose: To convert minutes to days and years.
*/

#include <stdio.h>

int main()
{
    // If the user exceeds the capacity of a data type, C is going to define the biggest value for that data type.
    // Because of that ALWAYS think about the data type that you are going to allow the user to enter. 
    double minutes = 0.0;
    double years = 0.0;
    double days = 0.0;
    double minutesInAYear = 525948.766; // From Google, to be more specific.

    printf("Type the number of minutes:\n");
    scanf("%lf", &minutes); // Using a format specifier to convert the value to a double. This function reads a string.

    years = (minutes / minutesInAYear);
    days = (minutes / 1440.0);

    printf("\n%lf minutes is equal to %lf year(s) or %lf day(s).", minutes, years, days);

    return 0;
}