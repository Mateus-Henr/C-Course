/*  Author: Mateus Henrique
    Purpose: This program decribes how to search, tokenize and analyse strings.
*/

/*
    Searching a string
    The stardand library offers several functions for fiding a single character or a substring.
    Being some oof them: "strchr()" and "strstr()". They are case-sensitives.

    strchr() (searching a string for a character)
    First argument is the string and second is the character that you looking for (can be an int or a char).
    It's going to return a pointer with the position in memory of the element in the string.
    If the character is not found it returns NULL.

    strstr()
    Used for searching a string inside a string.
    Returns a pointer to the positi in the first string where the substring was found.
    If it doesn't find any matches it will return NULL.
    First argument is the string that is going to be searched and the second argument is the string that you're looking for.


    Tokenizing a string
    A token is a sequence of characters within a string that is bounded by a delimiter (space, comma, period, etc).
    Breaking a sentence into words is called toknizing.
    The function used for it is the "strtok()" function.

    strtok()
    First argument is the string to be tokenized and the sefcond argument is a string that contains all the possible delimiter characters.


    Analysing strings
    Some of the functions are: "islower()", "isupper()", "isalpha()", "isdigit()", etc.
    Most of the function used for analysing strings return a nonzero value of type int (boolean values).

    Concept of a pointer
    A pointer is a type of variable, which stores an address. It still has a data type.
    Its value is the address of another location in memory that can contain a value.
    The "&" is the "address of" operator.
    The "*" is used to declare a pointer.
    If you want to get the value of what the address is pointing to you have to dereference it, and the syntax is the "*" as well.
    If your not initialising a pointer, the "*" serves the purpose of dereferencing a pointer.
    Ex: "int *pNumber = &number;".
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int number = 25;
    int *pNumber = &number;

    printf("number = %d\n", *pNumber);

    // Example strchr
    char str[] = "The quick brown fox";
    char ch = 'q';
    char *pGot_char = NULL;
    pGot_char = strchr(str, ch);

    if (pGot_char)
    {
        printf("Position of the char %c is %s\n", ch, pGot_char);
    }
    else
    {
        printf("Character %c not found.\n", ch);
    }

    // Example strstr
    char text[] = "Every dog has his day";
    char word[] = "dog";
    char *pFound = NULL;
    pFound = strstr(text, word);

    if (pGot_char)
    {
        printf("Position of the string %s is %s\n", word, pFound);
    }
    else
    {
        printf("String %s not found.\n", word);
    }

    // Example strtok
    char myStr[] = "Hello how are you - my name is - Mateus";
    const char s[] = "-";
    char *token;

    // Get the first token
    token = strtok(myStr, s);

    // Walk through other tokens
    while(token)
    {
        printf(" %s\n", token);

        token = strtok(NULL, s); // Getting the next token.
    }

    // Example functions for analysing strings
    char buff[100];
    int nLetters = 0;
    int nDigits = 0;
    int nPunct = 0;

    printf("Enter an interesting string of less than %d characters.\n", 100);
    scanf("%s", buff); // Read a string into a buffer.

    int i = 0;
    while(buff[i])
    {
        if (isalpha(buff[i]))
        {
            nLetters++;
        }
        else if (isdigit(buff[i]))
        {
            nDigits++;
        }
        else if (ispunct(buff[i]))
        {
            nPunct++;
        }

        i++;
    }

    printf("\nYour string contained %d letters, %d digits and %d punctuation characters.\n", nLetters, nDigits, nPunct);

    return 0;
}