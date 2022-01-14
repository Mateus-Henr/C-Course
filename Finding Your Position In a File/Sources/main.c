/*  Author: Mateus Henrique
    Purpose: The purpose of this program is to desmostrate how to find your current position in a file.
*/

/*
    File positioning
    For many apps, you need to be able to access data in a file other than sequential order.
    There are various functions used to access data in random sequence.
    There are two aspects to file positioning
    - Finding out where you are in a file.
    - Moving to a given point in a file.

    Finding out where you are
    There are two functions for this purpose:
    - "ftell()": It accepts a FILE pointer as argument and ir returns a long with the position of
                 where you are in the file.
                 It's interesting to save a specific position in a variable to return later.
                 The value is the offset in bytes from the beginning of the file.
    - "fgetpos()": It takes two parameters, the first is the FILE pointer and the second is 
                   a pointer to the "fpos_t" type that is able to record every position within
                   a file, this is where the data is going to be placed at.
                   This function is designed to be used with the positioning function"fsetpos()".
                   This function stores the current position and file state information for the
                   file in position and returns 0 if tthe operation is successful. It returns
                   a non-zero integer for failure.

    Setting a position in the file (fseek())
    As a complement for the "ftell()", we have the "fseek()" function.
    The first parameter is the FILE pointer, the second is an offset from a reference point
    specified by the third parameter, and the third parameter is the reference point that
    can be one of three values:
    - SEEK_SET: Defines the beginning of the file.
    - SEEK_CUR: Defines the current position in the file.
    - SEEK_END - Defines the end of the file.
    For a text mode file, the second argument must be a value returned by "ftell()" and the
    third argument must be "SEEK_SET", since for text files, all operations with "fseek()"
    are performed with reference to the beginning of the file.
    For binary files, the offset argument is simply relative by count. So it can supply
    positive or negattive values for the offset when the reference point is "SEEK_CUR".

    Setting a position in the file (fsetpos())
    A complement of the "fgetpos()".
    The first parameter is a FILE pointer, and the second parameter is a pointer of the "fpos_t"
    type (the position that is stored at the address was obatained by calling "fgetpos()").
    Returns a nonzero value on error or 0 when it succeeds.
    This can only be used to get the position of a place in the file that you have been before,
    which is the main difference compared to "fseek()" that allow you to go to any position in 
    the file.
*/

#include <stdio.h>
#include <ctype.h>

#define FILE_NAME "myfile.txt"

int main()
{
    FILE *pFile = NULL;
    fpos_t here;

    pFile = fopen(FILE_NAME, "r+");

    if (!pFile)
    {
        printf("Error trying to open the file.\n");
        return -1;
    }

    // Moves the pointer to the end of the file.
    fseek(pFile, 0, SEEK_END);

    // Using "ftell()" for getting the position in the file.
    printf("Total size of the file = %ld bytes\n", ftell(pFile));

    // Using "fgetpos()" for getting the position in the file.
    // Here we cannot declare a pointer because there will not be any memory allocated
    // to store the position data (you didn't initialize the structure).
    fgetpos(pFile, &here); // Saving the position in the "here" variable.
    fputs("MAYBE", pFile);

    // Using "fseek()" to move 7 bytes from the beginning of the file.
    fseek(pFile, 7, SEEK_SET);
    fputs("Test", pFile);

    // Returning to the position that he were before, when we save it to the "here" variable.
    fsetpos(pFile, &here);
    fputs("This is going to override previous content", pFile);

    fclose(pFile);
    pFile = NULL;

    return 0;
}