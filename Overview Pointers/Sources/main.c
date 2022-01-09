/*  Author: Mateus Henrique
    Purpose: This program shows an overview on pointers in C.
*/

/*
    Indirection
    Pointers are very similar to the concept of indirection that is employed in everyday life.
    Let's suppose that you want to buy something, but this product needs to be ordered by the store,
    because of that you are indirectly ordering the product directly and it can be related to pointers.
    In programming languages, indirection is the ability to reference something using a name, reference,
    or container, instead of the value itself. A form of indirection that we already know is when using
    variable names.
    The most common form of indirection is the act of manipulating a value through its memory address.
    A pointer provides an indirect means of accessing the value of a particular item, being this pointer
    a varivble that stores a memory address for another location in memory that contains a value.

    Pointers
    The compiler must know the type of data stored in the variable to which it points.
    This is necessary because it needs to know how much memory is occupied and how to handle the
    contents of the memory to which it points.
    A pointer can only be used to point to variables of the same type.
    When we use the "&" symbol in front of the variable name, it's for getting the address of that value.

    Why use pointer
    Makes easier to use arrays and strings.
    It's possible to access any location and perform operations.
    Allows to refer to the same space in memory from multiple locations.
    Saves space by being able to share components in data structures, making it a lot faster.
    Allows functions to modify data passed to them as variables. It uses the concept of "pass by reference",
    passing arguments to function in a way that they can be change by the function. And this allows a function
    to allocate data, and avoids the usage of global variables.
    Can also be used to optimize the program to run faster, by allowing direct memory access, or to use less memory.
    Allows us to get multiple values from a function. Since a function can only return one value, we can pass
    arguments as pointers to get multiple values from a pointer.
    Can create dynamic memory. This makes possible to save static memory.
    Allows design and development of complex data structures, such as stacks, queues, linked lists, etc.

*/

#include <stdio.h>

int main()
{
    int number = 99;
    int *pNumber = &number;

    printf("%d\n", *pNumber);
    
    return 0;
}