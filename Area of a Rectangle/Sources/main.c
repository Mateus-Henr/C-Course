#include <stdio.h>

int main()
{
    double width = 0.0;
    double height = 0.0;
    double perimeter = 0.0;
    double area = 0.0;

    width = 10.43;
    height = 5.43;
    perimeter = 2.0 * (width + height);
    area = width * height;

    printf("Perimeter = %.2lf", perimeter);
    printf("\nWidth = %.2lf Height = %.2lf Area = %.2lf", width, height, area);

    return 0;
}