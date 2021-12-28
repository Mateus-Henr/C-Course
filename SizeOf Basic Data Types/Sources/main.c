/*  Author: Mateus Henrique
    Purpose: The purpose of this program is to display the sizes of basic data types using the sizeof operator.
*/

#include <stdio.h>

int main()
{
    // It's crucial to remember that depending on the system that you're running the program on, there may be different sizes for data types.
    // Since the sizeof operator returns an unsigned int, we are using "%lu" as the format specifier.
    printf("Char size = %lu\n", sizeof(char));
    printf("Short size = %lu\n", sizeof(short));
    printf("Unsigned int size = %lu\n", sizeof(unsigned int));
    printf("Int size = %lu\n", sizeof(int));
    printf("Unsigned long size = %lu\n", sizeof(unsigned long));
    printf("Long size = %lu\n", sizeof(long));
    printf("Long long size = %lu\n", sizeof(long long));
    printf("Float size = %lu\n", sizeof(float));
    printf("Double size = %lu\n", sizeof(double));
    printf("Long double = %lu\n", sizeof(long double));

    return 0;
}