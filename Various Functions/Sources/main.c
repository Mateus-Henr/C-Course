/*  Author: Mateus Henrique
    Purpose: This program describes some functions in the C standard library.
*/

/*
    Various functions from the C standard library

    String functions (<string.h>)
    strcat - Concatenates two strings. Returns s1 with s2 concatenated.
    strncat - Deals with buffer overflows, should be utilized over the other.
    strchr - Searches the string for the first occurrence of a character. Returns a pointer
             to the character. NULL if not found.
    strrchr - Returns the last occurence instead of the first.
    strcmp - Compares two strings. Returns an int indicating if a string is greater (1)
             equal (0) or less (-1) than the other.
    strncmp - Avoids buffer overflow by comparing just a max number of characters.
    strcpy - Copies one string to the other. Returns the first string copied.
             In C we cannot assign strings directly.
    strncpy - Avoids buffer overflows.
    strlen - Returns the length of a string, excluding the null character.
    strstr - Search for the first occurence of a string in another. Returns the pointer to
             the string. NULL if not found.
    strtok - Breaks a string into tokens based on delimiter characters.
             Separates patterns.
    

    Character function (<ctype.h>)
    It has functions for checkings on a single character, such as isalpha, isblank, islower, etc.
    It also has some convertion functions like toupper, to lower, etc.


    I/O functions (input and output <stdio.h>)
    Beyond its functions, it alos has definitions for EOF, stdin, strdout, stderr, FILE, etc.
    fclose() - Closes a file (stream). Returns EOF if an error occurs otherwise 0.
    feof() - Returns nonzerro if the identified file has reached the end of file, returns
             zero otherwise. Can be used instead of the comparison for EOF.
    fflush() - Writes any data from internal buffers to the indicated file, returns 0
               if the operation was successful and EOF otherwise. Gets rid of anything
               inside of a buffer.
    fgetc() - Returns the next character. Returns EOF if an error occurs.
    fgetpos() - Gets the curresnt fle position. Returns 0 on success, and nonzero on failure.
    fgets() - Reads up to a newline character or n - 1.
    fopen() - Opens a file in a specific mode (strem). Returns the pointer for the opened file.
    fprintf() - Writes data in a specified format.
    fputc() - Writes characters to a file. Returns EOF on failure.
    fputs() - Writes a string until the termination null character.
    fscanf() - Reads data from a file in a specified format.
    fseek() - Moves the position of what you're pointing to in the file.
    fsetpos() - Sets the position to a position that it has been before. 0 on success, nonzero
              otherwise.
    ftell() - Returns the posotion of the "pointer" in the file.
    printf() - Display output on the screen.
    remove() - Removes a file. 0 on success, and nonzero on failure.
    rename() - Renames a file. 0 on success, and nonzero on failure.
    scanf() - Reads input from the keyboard by default.


    Conversion functions (stdlib.h)
    atof() - Converts a string to a double.
    atoi() - Converts a string to an int.
    atol() - Converts a string to a long.
    attol() - Converts a string to a long long.


    Dynamic memory allocation functions (stdlib.h)
    calloc() - Allocates a size in memory and initializes the values to 0.
               Returns NULL on failure, otherwise returns a "void *" that has to be casted.
    free() - Liberates memory allocated by the programmer.
    malloc() - Allocates a size in memory.
               Returns NULL on failure, otherwise returns a "void *" that has to be casted.
    realloc() - Changes a size previously allocated. Usually used for expanding memory.
                Returns NULL on failure, otherwise returns a "void *" that has to be casted.
*/

#include <stdio.h>

int main(void)
{
    return 0;
}