/*  Author: Mateus Henrique
    Purpose: This program shows ways of converting strings in C.
*/

/*
    Converting Strings
    Making a string uppercase - toupper()
    Making a string lowercase - tolower()
    If the character is already in the right case it'll just return it.
    They return a type int that's the ASCII value (can be casted to a char).
    You can use thiese functions to ignore the case.

    Converting strings to number
    There are strings such "atof()" to convert a string to a double, "atoi" to convert a string to an int, etc.
    For string to double there's "strtod()" that is a newer version.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define END_STRING '\0'

int main()
{
    // Example toupper()
    char buff[] = "My string";

    for (int i = 0; (buff[i] = (char) toupper(buff[i])) != END_STRING; i++);

    printf("%s\n", buff);

    // Example of comparing strings ignoring the case
    char text[100]; // Input buffer for string to be searched
    char substring[40]; // Input buffer for string sought

    printf("Enter the string to be searched (less than %d characters):\n", 100); 
    scanf("%s", text);

    printf("\nEnter the string sought (less than %d characters)\n", 40); 
    scanf("%s", substring);

    printf("\nFirst string entered\n%s\n", text); 
    printf("Second string entered:\n%s\n", substring);

    // Convert both strings to uppercase.
    for(int i = 0; (text[i] = (char) toupper(text[i])) != END_STRING; i++);
    for(int i = 0; (substring[i] = (char) toupper(substring[i])) != END_STRING; i++);

    printf("The second string %s found in the first.\n", ((strstr(text, substring) == NULL) ? "was not" : "was"));

    // Example atof()
    char value_str[] = "98.4";
    double value = atof(value_str);

    printf("Value = %lf\n", value);

    // Example strtod()
    value = 0.0;
    char str[] = "3.5 2.5 1.26";
    char *pstr = str;
    char *ptr = NULL;

    // Looping through the array in memory.
    while (true)
    {
        value = strtod(pstr, &ptr);

        if (pstr == ptr)
        {
            break;
        }
        else
        {
            printf("%f\n", value);
            pstr = ptr;
        }
    }
    

    return 0;
}