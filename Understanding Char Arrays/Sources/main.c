/*  Author: Mateus Henrique
    Purpose: This program consists of my version for the "understanding char arrays" challenge.
*/

#include <stdio.h>
#include <stdbool.h>

#define END_STRING '\0'

// Prototype fuctions

unsigned int lenString(char *string);

void concatStrings(char result[], const char str1[], const char str2[]);

bool compareStrings(char *str1, char *str2);


int main()
{
    char string[] = "My  String";
    const char stringToConcat1[] = "My name is ";
    const char stringToConcat2[] = "Mateus";
    char stringToCompare1[] = "Mateus";
    char stringToCompare2[] = "Mateus";
    char stringToCompare3[] = "Matt";
    char result[50];

    // OBS: We couldn't use the "sizeof" operator to determine a string's size because it doesn't count spaces.
    // It only tells us the size and not how many characters are in there.
    printf("Length %s = %d\n", string, lenString(string));

    concatStrings(result, stringToConcat1, stringToConcat2);
    printf("Concatenating two strings = %s\n", result);

    printf("Comparison %s and %s = %i\n", stringToCompare1, stringToCompare2, compareStrings(stringToCompare1, stringToCompare2));
    printf("Comparison %s and %s = %i\n", stringToCompare1, stringToCompare3, compareStrings(stringToCompare1, stringToCompare3));

    return 0;
}

/*
 * lenString(char *string)
 *
 * Returns the length of a string.
 * Calculates how many characters up to the first null character.
 * 
 * @param    string    an array of chars, in other words, a string.
 * @return             the number of characters in the string.
 */
unsigned int lenString(char *string)
{
    int i = 0;

    while (string[i] != END_STRING)
    {
        i++;
    }
    
    return i;
}


/*
 * concatStrings(char result[], const char str1[], const char str2[])
 *
 * Concatenates two strings.
 *
 * @param    result  an array of chars to keep the concatenation.
 * @param    str1    the string to be concatenated to.
 * @param    str2    the string to concatenate.
 */
void concatStrings(char result[], const char str1[], const char str2[])
{
    unsigned int j = 0;

    for (int i = 0; i < str1[i] != END_STRING; i++)
    {
        result[j++] = str1[i];
    }

    for (int i = 0; str2[i] != END_STRING; i++)
    {
        result[j++] = str2[i];
    }

    result[j] = END_STRING;
}


/*
 * unsigned int compareStrings(char *str1, char *str2);
 *
 * Compares whether two strings are equal or not.
 * 
 * @param    str1    a string to compare.
 * @param    str1    a string to compare.
 * @return           whether or no the comparison was true.
 */
bool compareStrings(char *str1, char *str2)
{
    unsigned int i = 0;

    while (str1[i] != END_STRING || str2[i] != END_STRING)
    {
        if (!str1 || !str2)
        {
            return false;
        }

        if (str1[i] != str2[i])
        {
            return false;
        }

        i++;
    }

    return true;
}