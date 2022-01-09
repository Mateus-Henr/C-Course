/*  Author: Mateus Henrique
    Purpose: This program describes how to define pointers in C.
*/

/*
    Declaring pointers
    It's important to know that different types of varaibles take up different amount of storage.
    Depending on the pointer operation it might be necessary to know that storage size.
    It's a good idea to use names beginning with "p" in order to identify a pointer more easily.

    Structure
    data_type *variable_name;
    Differently from when defining variables, we have to add an asterisk before the name to indicate
    that we are defining a pointer.
    The pointer can store any address of variable of the same type.
    Ex: "int *pNumber;".

    More on pointers
    It's not possible to do operations that the data types offer with pointers, for example subtraction.
    The format specifier for pointers is "%p".

    Null pointers
    This is when you initialize a pointer that does not pointer to anything.
    NULL is a constant defined by the standard library that is equivalent of zero for a pointer (it doesn't
    point to anything). It implicitly prevents the accidental overwriting of memory since it doesn't point to
    anything. The NULL can be found at "stddef.h".
    This is what you should do if you're not going to initialize a pointer right away.
    The NULL 
    Ex: "int *pNumber = NULL;".

    Address of operator
    If you want to initialize your pointer to the address of a variable that has already been defined you can
    use the "&" operator.
    The variable has to have been allocated in memory already in order to initialize a pointer with the address of it.
    Ex: int number = 99;
        int *pNumber = &number;

    Multiple variable declarations
    A pointer variable always has the "*" before it.
    Ex: "int *p, q;".
    In the statement above, only p is a pointer, q is an int.
*/

#include <stdio.h>

int main()
{
    return 0;
}