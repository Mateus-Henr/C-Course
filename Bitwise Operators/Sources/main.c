/*  Author: Mateus Henrique
    Purpose: Program that shows the usage of bitwise operators.
*/

/*
    Bitwise Operators
    They operate on the bits in integer values, so you pass an integer value to perform operations on.
    They are used to test and set individual bits in an integer value.
    Can be &, |, etc.
    It's possible to store a lot of data using bits, although they are integer values they can be used to represent something else,
    for example for storing several characteristics of a person, one bit for storing the genre of the person, three other bits to specify
    whether the person can speak French, German, or Italian, etc.

    Binary Number
    It's a number that includes only ones and zeroes.
    Can be converted to decimal numbers.
    Ex: 105 in binary is equal to 01101001.

    Operators
    & (AND) - It copies a bit to the result if it exists in both operands.
    | (OR) - It copies a bit to the result if it exists in either operand.
    ^ (XOR) - It copies a bit to the result if it's set in one operand but not in both.
    ~ (Ones Complement) - It's unary and it flips bits. (What was 0 becomes 1 and vice and versa)
    << (Left Shift) - The left operands value is moved left by the number of bits specified by the right operand.
    >> (Right Shift) - The left operands value is moved right by the number of bits specified by the right operand.
    OBS: If you shift to a direction too much some bits will be dropped out.
*/

#include <stdio.h>

int main()
{
    unsigned int a = 60; // In binary = 0011 1100
    unsigned int b = 13; // In binary = 0000 1101
    int result = 0;

    // By using operators you can turn bits off or on.
    result = a & b; // Result = 0000 1100
    printf("Using AND - result is %d\n", result);

    result = a | b; // Result = 0011 1101
    printf("Using OR - result is %d\n", result);

    result = a ^ b; // Result = 0011 0001
    printf("Using XOR - result is %d\n", result);

    result = ~a; // A = 1100 0011 (Turns off what was on and turns on what was off)
    printf("Using ~ ON A - result is %d\n", result);

    // The size of an integer depends on the OS architecture, you can see it by using the "sizeof()" function.
    // The 4 bytes (32 bits) integer representing the number 60 is: 0000  0000 0000 0000 0000 0000 0011 1100
    result = a << 2;// Shifting to the left by 2. Result = 1111 0000
    printf("LEFT SHIFT BY 2 ON A - result is %d\n", result);

    result = a << 4;// Shifting to the left by 4. Result = 0011 1100 0000
    printf("LEFT SHIFT BY 4 ON A - result is %d\n", result);

    // If we get to the limit of the bits' size it'll be drop out.
    result = a >> 4;// Shifting to the right by 4. Result = 0000 0000 0011
    printf("LEFT SHIFT BY 4 ON A - result is %d\n", result);


    return 0;
}