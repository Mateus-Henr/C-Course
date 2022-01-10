/*  Author: Mateus Henrique
    Purpose: This program describes how to use pointers in C.
*/

/*
    Operations on pointers
    Assigning an address to a pointer.
    Dereference a pointer.
    Take a pointer address.
    Perform pointer arithmetic. Allows you to move in memory quicker, usually used when using arrays.
    Finding difference between two pointers, finding how many elements in an array there are between the two pointers. Minus them.
    Use relational operators to compare the values of two pointers.
    Two ways of subtracting, being them, subtracting one pointer from another to get an integer and subtracting an integer
    from a pointer to get a pointer.
    Be careful with the array out of bounds when doing arithmetic with pointers.
    
    Pointers used in expressions
    The value referenced by a pointer can be used in arithmetic expressions, following the rules of the data type.
    Using a pointer to access the value that it points to is the same as using the variable name itself.
    Remember that the pointer points to a value in memory, therefore if you derenference a pointer and alters the value
    it'll be altered in memory as well.
    You can use a pointer to change the values of many different variables of the same type.
    Example below.

    Incrementing a value in a pointer
    When incrementing the value that the pointer points to it's necessary to use "++" as a prefix, otherwise it won't work.

    When receiving input
    When using "scanf()" we have to pass in a pointer in the second parameter to indicate where the input will be stored at.
    If you have a pointer that already contains an address you don't have to use the ampersand operator.
    Example below.

    Testing for NULL
    THIS MUST ALWAYS BE DONE.
    Trying to access a dereference a pointer that hasn't been initialized might cause the program to crash, ovewrite data, etc.
    Remember that in order to be able to dereference a pointer it has to be pointing to an address that contain a value.
    There are two ways of assigning a memory location to a pointer, being either assigning the address of an existing variable or
    using "malloc()" to allocate memory first.
    In order to not dereference an uninitialized pointer you must check for null.
    You can use "if (!pValue)" to do this checking. Usually done in functions.
    ALWAYS HAVE THE IF CHECKS FOR NULL VALUES.
*/

#include <stdio.h>
#include <stddef.h>

int main()
{
    int number = 0;
    int * pNumber = NULL;

    number = 10;
    pNumber = &number;
    *pNumber += 25;
    
    printf("pNumber = %d\n", *pNumber);

    // Another example
    long num1 = 0L;
    long num2 = 0L;
    long * pNum = NULL;

    pNum = &num1;
    *pNum = 2L;
    num2++;
    num2 += *pNum;

    pNum = &num2;
    ++*pNum; // Incrementing num2 indirectly

    printf("num1 = %ld\nnum2 = %ld\n*pNum = %ld\n*pNum + num2 = %ld\n", num1, num2, *pNum, *pNum + num2);


    // Example of scanf()
    int value = 0;
    int * pValue = &value;

    printf("Input an integer:\n");
    scanf("%d", pValue);

    printf("you entered %d.\n", value);

    return 0;
}