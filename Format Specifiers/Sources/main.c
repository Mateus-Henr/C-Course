#include <stdio.h>

// Format Sepecifiers
// They are used to specify the type of data that you want to display and a specific format for it.
// Can also be used to convert data as well.
// They are preceded by the percentage symbol.
// The percentage sybol is used for mapping to varaible in order to display the variable's value.

// The "printf()" function
// It can be used for displaying values of variables.
// Arguments are separated by comma.
// The first argument is the character string to be displayed.
// If you want to display a variable you need to specify the type of the varaible in the character string and add the variable as argument.
// It's important to notice that the order matters, so the order of the arguments will be applied to the placeholder parts.


#include <stdio.h>

int main (void)
{
    int integerVar = 100;
    float floatingVar = 331.79; 
    double doubleVar = 8.44e+11; 
    char charVar = 'W';
    _Bool boolVar = 0;
    float x = 3.9999993434343;

    // Multiple values for format specifiers
    printf("integerVar = %i\n", integerVar); 
    printf("floatingVar = %f\n", floatingVar); // May diisplay a value more specific than the one assigned.
    printf("doubleVar = %e\n", doubleVar); 
    printf("doubleVar = %g\n", doubleVar); // Just a different format
    printf("charVar = %c\n", charVar);

    printf("boolVar = %i\n", boolVar); 

    // Specifying the width of a value to be printed.
    printf("%.2f", x);

    return 0;
}