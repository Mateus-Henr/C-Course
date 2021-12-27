#include <stdio.h>
#include <stdbool.h>

// Enums
// It's a datatype that allows a programmer to define a variable and specify the valid values that could be stored into that variable.
// You can create your own data type by using "enum" and defining specific values.
// After defining the name (data type) we set a list of idetifiers enclosed by curly braces.
// Ex: "enum primaryColor {red, yellow, blue};" (in that case our type is "primaryColor" and can only hold as values red, yellow or blue).
// When using the enum you will be creating variables of that type, so it can only accept values that have been defined within the curly braces.
// We have a compiler error if the value is not valid.
//
// Enums as ints
// The compiler treats enumeration as integer constants, so in the case above if we create a new enum variable and set "January" for example
// it will have the value of 0, since January occupies the first position, but even though it's an integer we can compare it against the string itself.
//
// Specifying a specific int to an enum
// You can do it by using the assign operator when initializing the enum.
// It's important to remember that if you define values after the one that you have defined a specific int to, the values that come after will have their
// values incremented based on the previous one. For example, in the definition below, the right will have an int value of 11.
//
// Char
// Represents a single character and everything in single quotes in a program is a character data type.
// It's possible to define a char as "unsigned", but this will only mean that if the user enters a value it cannot be negative
// Double quotes is not valid.
// It's possible to assign numbers to characters, but they will be converted to the ASCII version of that number. It's considered as bad practise to do it.
//
// Espace Character
// Characters that represent certain keys or patterns, such as "\n".
// It's important to remember that they are considered as one character.


int main()
{
    enum month {January, February, March, April, May, June, July, August, September, October, November, December};
    enum direction {up, down, left = 10, right};

    enum month thisMonth = January;
    printf("This month is %d", thisMonth);

    bool isJanuary = (thisMonth == January); // Using the string version of the enum for comparison.

    if (isJanuary)
    {
        printf("\nThe month is January!");
    }

    char broiled;
    broiled = 'T';
    char x = '\n';

    printf("%c", x);

    return 0;
}