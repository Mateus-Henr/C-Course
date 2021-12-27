// The comment below is considered good practise.
/*  Author: Mateus Henrique
    Purpose: This program is going to calculate the area and perimeter of a rectangle.
*/

#include <stdio.h>

int main()
{
    // Declaring and initializing variables.
    double width = 0.0;
    double height = 0.0;
    double perimeter = 0.0;
    double area = 0.0;

    // Assigning specific values to the variables.
    width = 10.43;
    height = 5.43;
    perimeter = 2.0 * (width + height);
    area = width * height;

    printf("Perimeter = %.2lf\n", perimeter);
    printf("Width = %.2lf Height = %.2lf Area = %.2lf", width, height, area);

    return 0;
}