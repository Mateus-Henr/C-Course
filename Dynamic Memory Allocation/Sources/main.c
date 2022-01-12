/*  Author: Mateus Henrique
    Purpose: This program describes dynamic memory allocation in C.
*/

/*
    Dynamic memory allocation
    This is employed on pointers.
    Whenever you define a variable in C, the compiler automatically allocates the correct amount of storage
    for you based on the data type.
    This is when you want to allocate memory to a pointer without having to assign the address from a
    variable.
    When dynamically allocating memory you can manage memory while the program is running.

    Reading data from a file into an array
    If you wanted to do this uou have three choices:
    - Define the array to contain the maximum number of possible elements at compile time. Lack of flexibility.
      Ex: "int dataArray[1000];".
    - Use a variable-length array to dimension the size of the array at runtime. Still static.
      Ex: "int dataArray[variable]".
    - Allocate the array dinamically using one of C's memory allocation routines. You can get storage
      as you need it, while the program is running. Depends on the concept of a pointer.
      Having a pointer available you can reallocate the amount of memory that it needs.

    Heap vs Stack
    There are two ways that you can store data in a program either in the stack or in the heap.
    Dynamic memory allocation reserves space in the heap.
    The heap allows changes in the memory during runtime. It lasts during the execution of the program.
    Also, this memory is controlled by you, so it's up to you to keep track of the address in memory that was
    allocated. Beyond that it's also up to you to free the space that you have allocated there.
    This is one of the advantages of C, by being able to control memory it makes a program much faster.
    The stack is used for function arguments, local variables in a function, etc. It stores the execution order
    in a stack format. Automatically managed by C.
    We could say that the stack is for local data and functions and the heap is for "global variables" in a
    smarter way.
*/

#include <stdio.h>

int main(void)
{
    return 0;
}