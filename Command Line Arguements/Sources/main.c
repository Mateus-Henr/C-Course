#include <stdio.h>

// Command Line Arguments
// Passing data to the program via the command line (this is different from taking data from the user).
// The "main()" function is the entry point of the program (called by the runtime system).

// Arguments that can be passed to "main()"
// The first argument ("argc" for argument count) is an integer value that specifies the number
// of arguments typed on the command line.
// The second argument ("argv" for argument vector) is an array of character pointers (strings).

// When executing a C program we are basically running a command and we can pass data to it
// when it's executing. Since we are not running the command itself, we have to pass data through
// the IDE, you need to go to the settings of your IDE to set it up.

// 1° - Quantity of data
// 2° - Data itself
int main(int argc, char *argv[])
{
    // Saving data
    int numberOfArguments = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];
    
    printf("Number of Arguments: %d", numberOfArguments);
    printf("\nArgument 1 is the program name: %s", argument1);
    printf("\nArgument 2 is the command line argument: %s", argument2);

    return 0;
}