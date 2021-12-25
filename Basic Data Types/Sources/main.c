/*
Basic Data Types

It informs how much memmory you will use for a variable. The amount of memory indicates the range of value that can be stored.
These sizes may vary depending on where you are running the program. So DO NOT use hard coded values for sizing them.
Some data types (special keywords):
- int: It stores integral values, not decimal numbers. Can be negative.
       It's a signed integer, so it can be positive, negative or zero.
       In addition to assigning numbers, it's also possible to assign hexadecimal numbers
       such as "int rgbColor = 0xFFEF0D;".
       Cannot use commas.
- float: It stores floating-point numbers, values containing decimal places.
	     Can be expressed in scientific notation such as "1.7e4".
	     Depending on the OS it can store between -32K up to 32K.
	     All floating-point constants are takens as double values by the C compiler,
	     so in order to specify that a value must be a float use a "f" ("12.5f")
- double: Similar to float numbers, but it has twice the size of a float, meaning that it can store larger numbers, more precision.
	      Can go to milions.
- char
- _Bool: Stores just 0 and 1 (false and true).
	     Used in conditions.
         In C99 you can include the "stdbool.h" to have access to a boolean.

Other data types
Used to make your program more efficient.
For numeric data types you can specify them even more by using short, long and unsigned, ex: "short int" or just "short".
To make sure that the compiler expiciltly knows what it's dealing with we add a character at the end.
Unsigned can be use for variables that don't have a negative value.
You can emphasize that a variable is signed by using the "signed" keyword.
Ex: "long int numberOfPoints = 131071100L".
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int integerVar = 100;
    float floatingVar = 331.79;
    double doubleVar = 8.44e+11;
    _Bool boolVar = 0; // Default by C
    bool myBoolean = true; // From library.
    signed int myInt = -1243;
    unsigned int myInt2 = 1;

    return 0;
}