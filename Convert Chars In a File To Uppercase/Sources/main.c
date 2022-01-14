/*  Author: Mateus Henrique
    Purpose: The purpose of this program is to show my version of the "find the number of lines in a file" challenge.
*/

#include <stdio.h>
#include <ctype.h>

#define FILE_NAME "myfile.txt"
#define TEMP_FILE "mytempfile.txt"

int main()
{
    FILE *pFile = NULL;
    FILE *pTemp = NULL;
    char currChar;
    
    pFile = fopen(FILE_NAME, "r");

    if (!pFile)
    {
        printf("Error while trying to open the file.\n");
        return -1;
    }

    pTemp = fopen(TEMP_FILE, "w+");

    if (!pTemp)
    {
        printf("Error while trying to open the file.\n");
        fclose(pFile);
        return -1;
    }

    while ((currChar = fgetc(pFile)) != EOF)
    {
        if (islower(currChar))
        {
            currChar -= 32; // Transforming in uppercase
        }
        
        fputc(currChar, pTemp);
    }

    fclose(pFile);
    fclose(pTemp);
    pFile = NULL;
    pTemp = NULL;

    if (remove(FILE_NAME))
    {
        printf("Error while trying to delete the file.\n");
    }
    else
    {
        printf("The file has been deleted.\n");
        
        if (rename(TEMP_FILE, FILE_NAME))
        {
            printf("Error while trying to rename the file.\n");
        }
        else
        {
            printf("The file has been renamed.\n");
        }
    }

    pFile = fopen(FILE_NAME, "r");

    if (!pFile)
    {
        printf("Error while trying to open the file.\n");
        return -1;
    }

    // Printing out the contents of the file.
    while ((currChar = fgetc(pFile)) != EOF)
    {
        printf("%c", currChar);
    }
    
    printf("\n");
    fclose(pFile);
    pFile = NULL;

    return 0;
}