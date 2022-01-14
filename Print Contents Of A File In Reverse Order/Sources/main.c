/*  Author: Mateus Henrique
    Purpose: The purpose of this program is to showw my version of the "print the contents of a file in reverse order" challenge.
*/

#include <stdio.h>
#include <ctype.h>

#define FILE_NAME "myfile.txt"

int main()
{
    FILE *pFile = NULL;
    int endPosition = 0;
    int currPosition = 0;

    pFile = fopen(FILE_NAME, "r");

    if (!pFile)
    {
        printf("Error trying to open the file.\n");
        return -1;
    }

    // Positioning the "cursor" at the end of the file.
    fseek(pFile, 0, SEEK_END);

    // Getting the amount of bytes that we need to read.
    endPosition = ftell(pFile);

    // While it's not the number of bytes.
    while (currPosition < endPosition)
    {
        currPosition++; // Change the current position from 0.
        fseek(pFile, -currPosition, SEEK_END); // Seek from so many bytes from the end.
        printf("%c", fgetc(pFile));
    }
    
    printf("\n");
    fclose(pFile);
    pFile = NULL;

    return 0;
}