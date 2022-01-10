/*  Author: Mateus Henrique
    Purpose: This program is my version for the challenge "pointer basics".
*/

#include <stdio.h>
#include <stddef.h>

int main()
{
    int value = 10;
    int * pValue = NULL;

    pValue = &value;

    if (pValue)
    {
        printf("Address of the value = %p\n"
               "Address of the pointer = %p\n"
               "Value of the pointer = %p\n"
               "Value to which the pointer is pointing to = %d\n",
               (void *) &value,
               (void *) &pValue, 
                pValue,
               *pValue);
    }

    return 0;
}