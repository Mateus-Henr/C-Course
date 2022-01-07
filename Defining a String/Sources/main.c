/*  Author: Mateus Henrique
    Purpose: This program consists of an overview on character strings in C.
*/

/*
    Character strings
    C doesn't have any special variable type for strings.
    Strings in C are stored in an array of type char. In memory, the characters of a string are strored in adjacent memory cells,
    one character per cell.
    The standard library offers various functions for manipulating strings.

    Defining a string
    A string can be declared as "char myString[20];".
    In the case below we have a string that contains up to 19 characters (the 20th character is null character).

    Initializing a string
    We initialize a char array the same way that we initialize other arrays.
    Ex: "char word[] = {'H', 'e', 'l', 'l', 'o', '!'};".
    OBS: If you don't specify the size, such as in the above example, the C compiler automatically computes the number of elements and adds the
    null character.

    Easier way of initializing a string
    Instead of separating each character using single quotes, you can either do as following:
    Ex: "char word[7] = {"Hello!"};".
    You can either specify the size implicitly or explicitaly, when specifying it explicitly you MUST ADD ONE for the null character.

    BEST PRACTISE
    When using a string literal ALWAYS LET THE COMPILER FIGURE OUT THE SIZE.

    When you iniitialize only a part of an array of chars the other elements will be empty.

    Assigning a value to a string
    If you create the array and then now you want to assign a string to the array you CANNOT use "s = "Hello"", being "s" the array.
    It's not possible to assign one array of characters to another array of characters.
    To do that you have to use "strncpy()" to assign values to a char array after it has been declared or initialized.

    BEST PRACTISE
    Initialize a string with no size and let "strncopy()" do the work to figure out the size.

    Displaying a string
    When you want to refer to a string you use the array name by itself.
    The "%s" format specifier is for outputting a null-terminated string.
    Ex: "printf("\nThe message is: %s", message);".

    Inputting a string
    For inputting a string you use the "scanf()" function with the "%s" as format specifier and the array name.
    We don't need to provide the "&" on as string.
    "scanf()" in a string will only read up until a space. ONCE IT HITS A SPACE IT WON'T READ THE REST OF THE STRING.
    A function that can be used to read a string and its spaces is "fgets()".
    Ex: "scanf("%s", input);".

    Testing for equality
    As strings are arrays we cannot use the equality operator on them.
    Therefore, to compare two strings to see if they are equal you can either compare character by character or use the "strcmp()" function.

    ALWAYS FOLLOW THE BEST PRACTISES.
    IN OTHER WORDS, NO SIZES FOR STRINGS, ONLY EMPTY BRACKETS.
*/

#include <stdio.h>

#define END_STRING '\0'

// Shows a way of figuring out how many characters are in string.
// In practse we would use "strlen()".
int main()
{
    char str1[] = "To be or no to be";
    char str2[] = ", that is the question";
    unsigned int count = 0;

    while (str1[count] != END_STRING) // Comparing a character
    {
        count++;
    }

    printf("The length of the string \"%s\" is %d characters.\n", str1, count);

    count = 0;
    while (str2[count] != END_STRING)
    {
        count++;
    }

    printf("The length of the string \"%s\" is %d characters.\n", str2, count);

    return 0;
}