/*  Author: Mateus Henrique
    Purpose: This program shows how pointer arithmetic works in C.
*/

/*
    Pointer Arithmetic
    This concept is used to traverse an array, and the power of pointers come into play here.
    Through incrementation in a pointer, for example, you can go to the next address (next element in an array).
    Suposing that you have a pointer that points to an array, if you add 3 to the pointer you'll get the fourth
    position in the array (pointer + 3) and to get the value within this address you just dereference the expressions.
    This idea of arithmetic on pointers can be used with any data types.
    If you are using an array syntax you cannot use pointer arithmetic.
    Ex: "int urn[3];", you cannot use "urn++".

    More on pointers
    It's important to know the bounds of the array in order to not mess up with the pointers.
    When passing an array to a function, we are basically passing a pointer, since the concept of an array is very
    similar to a pointer. So the arguments of a function can be either "int array[]" or "int * array".
    A function cannot change data unless the data passed to it is a pointer.

    GOOD PRACTISE
    Whether you choose to use "int array[]" or "int * array" depends on what is going to be used inside the function.
    If you are going to use pointer arithmetic to traverse the array then use "int * array", but if you are going to
    use indexes to traverse it, then use "int array[]".
    But the pointer notation is faster.
*/

#include <stdio.h>
#include <stddef.h>

// Functions prototypes

int arraySumIndex(int array[], const int n);

int arraySumPointer(int *array, const int n);


int main(void)
{
    int array[] = {1, 2, 3, 4, 5, 6};
    int * pArray = NULL;
    
    pArray = array;

    printf("Fourth element in the array = %d.\n", *(pArray + 3));

    pArray++;
    printf("Fifth element in the array = %d.\n", *(pArray + 3));

    // Another example
    int values[] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};

    printf("The sum is %i.\n", arraySumIndex(values, 10));
    printf("The sum is %i.\n", arraySumPointer(values, 10));

    return 0; // This can be used to return a status value.
}

/*
 * Sums all the elements in an array in an index manner.
 *
 * @param   array   the array to be summed.
 * @param   n       the size of the array.
 * @return          the sum of all the elements in the array.
 */
int arraySumIndex(int array[], const int n) // Instead of "int array[]", it could also be "int * array".
{
    int sum = 0, *ptr;
    int * const arrayEnd = array + n;

    for (ptr = array; ptr < arrayEnd; ptr++)
    {
        sum += *ptr;
    }

    return sum;
}

/*
 * Sums all the elements in an array in a pointer manner.
 *
 * @param   array   the array to be summed.
 * @param   n       the size of the array.
 * @return          the sum of all the elements in the array.
 */
int arraySumPointer(int *array, const int n)
{
    int sum = 0;
    int *const arrayEnd = array + n;

    for (; array < arrayEnd; array++)
    {
        sum += *array;
    }

    return sum;
}