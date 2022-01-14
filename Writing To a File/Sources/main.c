/*  Author: Mateus Henrique
    Purpose: The purpose of this program is to desmostrate how writing to a file works in C.
*/

/*
    Writing characters to a text file
    To write a single charaacter we use the function "fputc()", notice that the file must
    already have been opened to do this.
    The first argument of this function is an integer, and the second parameter is the FILE
    pointer.
    Returns the character that was written if successful, otherwise returns EOF.
    In practice, it's extremely inefficient to write characters one by one.
    There's also the "putc()" that may be implemented as a macro, whereas "fputc()" is a
    function.

    Writing a strung to a text file
    More eficient than writing characters.
    The function "fputs()" is used for this.
    It takes the string to be written in the file as the first argument, and as the second
    argument it takes a FILE pointer.
    This function will write characters from a string until it reaches a '\0' character.
    Does not write the null terminator though. So it can complicate things, because when
    reading it back it won't have the null terminator.
    Expects to write a line of text that has a newline character at the end.

    Writing formatted output to a file
    For this, we use the "fprintf()" function.
    It takes a FILE pointer (stream) as the first parameter, the second parameter it takes
    the way that the string is going to be formatted to, and rest of the parameters are
    the values for the format specifiers.
    If successful, it returns the number of characters written, otherwise it returns a
    negative number.
*/

#include <stdio.h>
#include <ctype.h>

#define FILE_NAME "myfile.txt"

int main()
{
    FILE *pFile = NULL;

    pFile = fopen(FILE_NAME, "w+");

    if (!pFile)
    {
        printf("Error trying to open the file.\n");
        return -1;
    }

    // Writing the characters
    // It's also possible to assign a character to an int, so it gets
    // easier to see from where the loop's starting.
    for (int character = 33; character <= 100; character++)
    {
        // The integer will be converted to the character in the ASCII table.
        fputc(character, pFile);
    }


    // Writing strings to a file
    fputs("This is Mateus.", pFile);
    fputs("I am me.", pFile);


    // Writing formatted strings to a file
    fprintf(pFile, "%s %s %s %s %d", "\nHello", "my", "number", "is", 500);

    fclose(pFile);
    pFile = NULL;

    return 0;
}