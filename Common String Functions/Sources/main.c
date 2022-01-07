/*  Author: Mateus Henrique
    Purpose: This program consists of a description of some common string functions in C.
*/

/*
    String  ("string.h")
    Length of a string - strlen()
    Copying a "string" to another - strcpy() and strncpy()
    Combining two "strings" together - strcat() and strncat()
    Determining if two "strigns" are equal - strcmp() and strncmp()

    strlen()
    Returns the length of a string as a "size_t" variable, which can be used as an int.

    strcpy()
    Copy a string to an existing string.
    It doesn't check to see whether the source string actualy fits in the target string.
    That's why a sfer why is to use "strncpy()", since it takes a third argument that is the number of characters to copy.
    DON'T USE IT.
    ALWAYS USE strncpy(), since it can avoid problems.

    strcat()
    Copy the second string to the end of the first.
    Returns the address of the first character of the string to which the second string is appended.
    It has the same problem as the "strcpy()" (buffer overflow), so it's best to use "strncat()".
    Works the same way.
    The third parameter of "strncat()" corresponds to the size of the source.

    strcmp()
    Used for comparing strings.
    Does not work for char.
    "==" checks if you have the same address.
    Returns
    0 - if its two strigns arguments are the same and nonzero
    < 0 - Indicates that str1 is less than str2
    > 0 - Indicates str2 is less than str1
    OBS: Capital letters are less than lowercase.
    The "strncmp()" function compares the strings until the differ or until it has compared a number of characcters specified
    by a third argument. For example, if you wanted to seach for strings that begin with astro, you could kimit the search
    to the first five characters. Useful for searching prefixes.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    // Example strlen()
    char myString[] = "my string";

    printf("The length of this string is: %i\n", (unsigned int) strlen(myString));

    // Example strcpy
    char src[50], dest[50];

    strcpy(src, "This is the source");
    strcpy(dest, "This is the destionation");

    printf("src = %s\ndest = %s\n", src, dest);

    // Example strncpy()
    char src1[40];
    char dest1[12];

    memset(dest1, '\0', sizeof(dest1));
    strcpy(src1, "Hello how are you doing");
    strncpy(dest1, src1, 10); // Copy just the ten first characters. Should correspond to the size of the destination.

    printf("src1 = %s\ndest1 = %s\n", src1, dest1);


    // Another example
    char myName[] = "My name is Mateus";

    char temp[50];

    strncpy(temp, myName, sizeof(temp) - 1); // Taking the null character out.
    printf("The length is: %i\n", (unsigned int) strlen(myName));
    printf("The string is: %s\n", temp);


    // Example strcat()
    char myString1[] = "my string";
    char input[80];

    printf("Enter a string to be concatenated: ");
    scanf("%s", input);

    printf("\nThe string %s concatenated with %s is\n", myString1, input);
    printf("%s\n", strcat(input, myString1));

    // Example strncat()
    char src2[50], dest2[50];

    strcpy(src2, "This is source");
    strcpy(dest2, "This is destination");

    strncat(dest2, src2, 15);

    printf("Final destination string: |%s|\n", dest2);

    // Example strcmp()
    printf("strcmp(\"A\", \"A\") is ");
    printf("%d\n", strcmp("A", "A"));

    printf("strcmp(\"A\", \"B\") is ");
    printf("%d\n", strcmp("A", "B"));

    printf("strcmp(\"B\", \"A\") is ");
    printf("%d\n", strcmp("B", "A"));

    // Example strncmp()
    if (strncmp("astronomy", "astro", 5) == 0)
    {
        printf("Found: astronomy\n");
    }

    if (strncmp("astounding", "astro", 5) == 0)
    {
        printf("Found: astronomy\n");
    }

    return 0;
}