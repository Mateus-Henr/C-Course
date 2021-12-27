/*  Author: Mateus Henrique
    Purpose: The purpose of this program is to demostrate the usage of enums in C.
*/

#include <stdio.h>

int main()
{
    // Creating a type that can only have specific values.
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO = 10, EBAY, MICROSOFT}; // Changed the value to demonstrate the "continuation of the value".

    // Creating variables. Must be valid values, otherwise the compiler will throw an error.
    enum Company xerox = XEROX;
    enum Company google = GOOGLE;
    enum Company ebay = EBAY;

    // Enum values are integers according to their position in the list when defining them.
    printf("%d\n%d\n%d\n", xerox, google, ebay);

    // Testing things out.
    // Testing enums against an int work as well, however against char doesn't.
    if (0 == google)
    {
        printf("Was it supposed to work?! I don't have the faintest idea.\n");
    }

    return 0;
}