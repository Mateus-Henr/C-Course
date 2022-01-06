/*  Author: Mateus Henrique
    Purpose: This program is my version of the challenge "write some functions".
*/

#include <stdio.h>
#include <math.h>

#define NEGATIVE_VALUE "\nValue cannot be negative!\n"

int gdc(int x, int y);

float myAbs(float num);

float mySqrt(float num);

int main()
{
    int num = -10;

    printf("GDC(%d, %d) = %d\n", 54, 43, gdc(54, 43));
    printf("GDC(%d, %d) = %d\n", -1, 43, gdc(-1, 43));

    printf("abs %.2f = %.2f\n", -46.0, myAbs(-46.0));

    printf("sqrt %.2f = %.2f\n", 10.0, mySqrt(10.0));
    printf("sqrt %.2f = %.2f\n", -10.0, mySqrt(-10.0));

    return 0;
}

int gdc(int x, int y)
{
    if (x < 0 || y < 0)
    {
        printf(NEGATIVE_VALUE);
        return -1;
    }

    while (y)
    {
        unsigned int temp = x % y;
        x = y;
        y = temp;
    }

    return x;
}

float myAbs(float num)
{
    return num < 0 ? -num : num;
}

float mySqrt(float num)
{
    if (myAbs(num) != num)
    {
        printf(NEGATIVE_VALUE);
        return -1.0;
    }

    const  float  epsilon = .00001;
    float  guess   = 1.0;
    float returnValue = 0.0;

    while (myAbs(guess * guess - num) >= epsilon)
    {
        guess = (num / guess + guess) / 2.0;
    }


    return guess;
}