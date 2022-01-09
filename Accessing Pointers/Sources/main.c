/*  Author: Mateus Henrique
    Purpose: This program describes how to access pointers in C.
*/

/*
    Getting the value to which the pounter points to
    It's important to remember that a pointer stores an address of a variable that stores a value.
    The indirectiorn operator ("*") is used to access the value of the variable pointed by a pointer.
    This is also referred as the dereference operator since we dereference a pointer using it.
    It's important to know that the position of the "*" matters, since this same operator can be
    used for multiple purposes.
    Example below.

    Displaying a pointer's value
    The format specifier is "%p" and it outputs a memory address in hexadecimal form.

    Space that a pointer takes
    Pointers occupy 8 bytes and the addresses have 16 hexadecimal digits.
    If a machine has a 64-bit operating system, the compiler might support 64-bit addresses.
    Some compilers only support 32-bit addressing and the addresses will be 32-bit.

    Values and addresses in a pointer
    A pointer has its own address that is allocated in memory, also it can store a variable's address.
    In order to display a pointer's address beyond using the format specifier for pointers, it's also
    necessary yo use "(void *)" in order to get around a warning. Example below.

    Displaying the number of bytes a pointer is using
    The "sizeof" operator is used for getting this.
    Since the "sizeof" operator returns a "size_t" type of variable, in order to prevent a warning
    when getting the size of a pointer we cast it to an int.

    GOOD PRACTISE
    ALWAYS initialize the pointer to NULL if you're not going to assign a value to it when defining it.
    Also when defining a pointer leave a space between the indirection operator.
*/

#include <stdio.h>
#include <stddef.h>

int main()
{
    int number = 15;
    int * pointer = &number;
    int result = *pointer;

    result = *pointer + 5;

    // Don't forget the casting when printing a pointer's value.
    printf("The pointer whose address is %p that points to the adrress %p has as value %d.\n", (void *) &pointer, pointer, result);
    printf("The pointer's size is %d bytes\n", (int) sizeof(pointer));

    // Another example
    int count = 10, x;
    int * intPointer = NULL; // GOOD PRACTISE

    intPointer = &count;
    x = *intPointer; // Dereferencing the pointer

    printf("count = %d, x = %d\n", count, x);

    // Another example
    int number1 = 0; // A variable of type int initialized to o
    int * pnumber1 = NULL; // A pointer that can point to type int

    number1 = 10;
    printf("number1's address: %p\n", (void *) &number1); // Output the address
    printf("number1's value: %d\n\n", number1); // Output the value

    pnumber1 = &number1; // Store the address of number in pnumber1

    printf("pnumber1's address: %p\n", (void *) &pnumber1); // Output the address 
    printf("pnumber1's size: %d bytes\n", (int) sizeof(pnumber1)); // Output the size
    printf("pnumber1's value: %p\n", pnumber1); // Output the value (an address)
    printf("Value pointed to: %d\n", *pnumber1); // Value at the address

    return 0;
}