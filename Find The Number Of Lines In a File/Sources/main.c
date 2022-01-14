/*  Author: Mateus Henrique
    Purpose: The purpose of this program is to show my version of the "find the number of lines in a file" challenge.
*/

#include <stdio.h>
#include <ctype.h>

#define FILE_NAME "myfile.txt"

int main()
{
    FILE *pFile = NULL;
    char currChar;
    int lines = 0;
    char lastChar;

    pFile = fopen(FILE_NAME, "r");

    if (!pFile)
    {
        printf("Error trying to open the file.\n");
        return -1;
    }

    while ((currChar = fgetc(pFile)) != EOF)
    {
        if (currChar == '\n')
        {
            lines++;
        }

        lastChar = currChar;
    }

    // Checking if the last char is a '\n' in order to see if the last line has
    // been counted. This makes up for the fact that the final line might or
    // might not have a newline character.
    if (lastChar != '\n')
    {
        lines++;
    }

    printf("The number of lines in the file is %d.\n", lines);

    fclose(pFile);
    pFile = NULL;

    return 0;
}