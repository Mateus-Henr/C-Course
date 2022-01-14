/*  Author: Mateus Henrique
    Purpose: The purpose of this program is to desmostrate how reading from a file works in C.
*/

/*
    Reading characters from a text file
    After opening a file for reading we can use "fgetc()" to read a character from a file.
    This function takes the file pointer as argument and returns an int.
    The "getc()" function is very similar tot the "fgetc()" one, the only difference is that
    "getc" may be implemented as a macro, whereas "fgetc()" is a function.
    It's not the most efficient way since it's more efficient reading strings.

    Returning to the beginning at the file
    After realizing any operation the pointer will change its position to prepare for more
    operations. To get the pointer back at the beginning at teh file we use the "rewind()"
    function.

    Reading a string from a file
    The function "fgets()" is used to read from any file or stream.
    The function takes three arguments, being them:
    - A pointer to an array of char. The destination of the string read.
    - The number of chars.
    - A pointer to FILE, the stream.
    The function reads a string into the memory pointed to by the strings form the
    file specified by stream.
    Characters are read until either a "\n" is read or number of chars - 1 have been
    read from the stream, whichever occurs first.
    If a newline character is read, it's retained in the string. The "\0" will be appended
    at the end tof the string.
    If there is no error, this function returns a pointer to the string, otherwise returns
    NULL. In addition to that, reading EOF also causes NULL to be returned.

    Reading formatted input from a file
    To do that we can use the "fscanf()" function.
    This is when the data to be read has a specific format specified with it.
    It takes as the first argument a FILE pointer, the second parameter is
    the format (similar to "scanf()") and the rest are the variables for the data.
    The function returns the number of input items successfully matched and assigned.
    When doing this type of file you must understand the type of formatting being used.

    OBS: If you want to run the executable itself in the PC you can use "sytem("pause");"
         for stopping the cmd execution to see any results that might be printed there.
*/

#include <stdio.h>
#include <ctype.h>
#include <limits.h>

#define FILE_NAME "myfile.txt"
#define FORMATTED_FILE "myformattedfile.txt"

int main()
{
    FILE *pFile = NULL;
    int theChar = 0;

    pFile = fopen(FILE_NAME, "r");

    if (!pFile)
    {
        printf("Error trying to open the file.\n");
        return -1;
    }

    // Reading characters from a file.
    while ((theChar = fgetc(pFile)) != EOF)
    {
        printf("%c", theChar);
    }

    printf("\n");


    rewind(pFile); // Returning to the beginning of the file.

    // Reading strings from the file.
    char string[CHAR_MAX];

    while (fgets(string, CHAR_MAX, pFile))
    {
        printf("%s", string);
    }
    

    printf("\n");
    fclose(pFile);
    pFile = NULL; // Don't forget!


    // Example of fscanf()
    int num1, num2, num3;

    // Creating another file because the contents of the file must be
    // formatted, otherwise it won't work.
    pFile = fopen(FORMATTED_FILE, "w+");

    if (!pFile)
    {
        printf("Error trying to open the file.\n");
        return -1;
    }

    // Putting data in the file
    fputs("1 2 3", pFile);
    // fputs("5 6 7", pFile);

    // Rewinding because we have written content to the file so
    // the current position has changed.
    rewind(pFile);

    fscanf(pFile, "%d %d %d", &num1, &num2, &num3);
    printf("%d %d %d\n", num1, num2, num3);
    

    fclose(pFile);
    pFile = NULL; // Don't forget!

    return 0;
}