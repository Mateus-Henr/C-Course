/*  Author: Mateus Henrique
    Purpose: This program consists of my version for the "utilizing common string functions" challenge.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <limits.h>

#define END_STRING '\0'

// Prototype functions

void displayInReverse(char *string);

void sortStringsInArray(char **array, unsigned int arraySize);


int main()
{
    char stringToReverse[] = "Mateus";
    char str1[CHAR_MAX] = "Watermelon",
         str2[CHAR_MAX] = "Apple",
         str3[CHAR_MAX] = "Banana",
         str4[CHAR_MAX] = "Persimon",
         str5[CHAR_MAX] = "Peach",
         str6[CHAR_MAX] = "Melon",
         str7[CHAR_MAX] = "Grapes";
    char *arrayOfStrings[] = {str1, str2, str3, str4, str5, str6, str7};
   
    displayInReverse(stringToReverse);

    sortStringsInArray(arrayOfStrings, 7);

    printf("\nSorted array:\n");
    for (int i = 0; i < 7; i++)
    {
        printf("%s\n", arrayOfStrings[i]);
    }
   
    return 0;
}

/*
 * Prints a string in reverse order.
 *
 * @param    string     a string.
 */
void displayInReverse(char *string)
{
    for (int i = (strlen(string) - 1); i >= 0; i--)
    {
        printf("%c", string[i]);
    }

    printf("\n");
}


/*
 * Sorts an array of strings in memory in ascending order.
 *
 * @param    array      an array of strings.
 * @param    arraySize  the array's size.
 */
void sortStringsInArray(char **array, unsigned int arraySize)
{
    bool flag = false;
   
    while (!flag)
    {
        flag = true;
       
        for (int i = 0; i < arraySize - 1; i++)
        {
            char str1[strlen(array[i])];
            char str2[strlen(array[i + 1])];
           
            strcpy(str1, array[i]);
            strcpy(str2, array[i + 1]);
           
            for (int j = 0; (str1[j] = toupper(str1[j])) != END_STRING; j++);
            for (int j = 0; (str2[j] = toupper(str2[j])) != END_STRING; j++);
       
            if (strcmp(str1, str2) > 0)
            {
                char temp[strlen(array[i])];
                strcpy(temp, array[i]);
                strcpy(array[i], array[i + 1]);
                strcpy(array[i + 1], temp);
                flag = false;
            }
        }
    }
}