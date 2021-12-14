// Getting input from the user via console
// The most general of input functions is "scanf()" and it can read a variety of formats.
// It reads the input from the standard input stream "stdin" and scans that input according to the format provided.
// The format can be specified as "%s", "%d", "%c", etc, it depends on the type of data we are going to receive.
// If the stdin is input from the keyboard then everything is text when read in, the job of scanf is to convert it to the desired
// data type.

// The "scanf()" function
// Similarly from "printf()", "scanf()" uses a control string followed by a list of arguments. This "control string" indicates
// the destination data types for the input stream of caracters.
// It uses pointers to variables.
// Some rules:
// - It returns the number of items that it successfully reads.
// - If you use "scanf()" to read a value for one of the basic variable types we have to precede the variable name with an "&" (address).
// - If you use "scanf()" to read a string into a character array, don't use an &.
// It also uses whitespaces (newlines, tabs, and spaces) to decide how to divide the input into separate fields.
// This function is the inverse of "printf()" since "printf()" converts all the data types to text to display them on screen.
// When using it it waits for the input from the keyboard and it's only processed when the user presses "Enter".
// It waits for data in the format specified.
// The biggest problem of "scanf()" is that it only reads in until it sees a space. So if you try to call it multiple times it may not work.
// Since it only reads up until a word when you press "Enter" on the keyboard it won't be able to get the line feed and the next time that you
// use it, it will read the line feed. This is a problem that happens when you have multiple "scanf()" in sequence.
// In other words, other "scanf()" won't execute because they will be reading the line feed.
// To go around that is to call "gitchar" or to use another function.

#include <stdio.h>

int main()
{
    char str[100];
    int i;
    double x;

    printf("Enter a value: "); // Informing the user what he/she needs to enter.
    // Entering multiple variables.
    // If it's a word "&" must not be used.
    // Reading a double using "%lf".
    scanf("%s %d %lf", str, &i, &x); // Waits for the user to press "Enter".

    printf("\nYou entered: %s %d ", str, i);

    return 0;
}