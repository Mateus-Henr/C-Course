/*  Author: Mateus Henrique
    Purpose: This is my version for the challenge "Generate Prime Numbers".
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int primeNumbers[50];
    int currIndex = 2;

    primeNumbers[0] = 2;
    primeNumbers[1] = 3;

    for (int i = 5; i <= 100; i = i + 2)
    {
        bool isPrime = true;

        for (int j = 0; i / primeNumbers[j] >= primeNumbers[j]; j++)
        {
            if ((i % primeNumbers[j]) == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            primeNumbers[currIndex] = i;
            currIndex++;
        }
    }

    for (int i = 0; i < currIndex; i++)
    {
        i != (currIndex - 1) ? printf("%d, ", primeNumbers[i]) : printf("%d.\n", primeNumbers[i]);
    }

    return 0;
}