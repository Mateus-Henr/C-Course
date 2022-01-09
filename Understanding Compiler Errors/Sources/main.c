/*  Author: Mateus Henrique
    Purpose: This program is aimed to give a better understanding on compiler errors.
*/

/*
    Understanding compiler errors and warnings
    It's important to understand what the compiler is telling you.
    In order to get more informations you can enable the "-Wall" option in the compiler.

    Types of problems that the compileer shows
    Errors - A condtion that prevents the creation of a final program, it can't create an executable.
    warnings - Messages about "special" situations that may cause problems, non-fatal errors.
    Both MUST be FIXED.

    ...variable undeclared (first use in this function)
    You forgot to declare a variable.

    Warning: implicit declaration of function...
    When the compiler has no information about the function because you didn't provide the function prototype.
    Need to declare a function prototype.

    Warning: control reaches end of non-void function
    When you forgot the return statement for non-void functions.

    Warning: unused varaible...
    When you have a variable that's not being used.

    Undefined reference to...
    When there's a function invoked in the code that has not been defined anywhere.
    Function with no definition.

    Error: conflicting types for...
    When two definitions of a function prototype have been found.
    One is the prototype (the function header) and the other is the definition with the function body.
    The information in both places is not identical, and a conflict has been detected.
    The compiler shows in which line the conflcit appears and the previous definition that caused the problem.
    Summing up, the function prototype is different from the function declaration.

    Runtime errors
    Errors that happen when you run the program.
    The program may terminate abruptly when one is detected.
    C programs only print the message "Segmentation fault".
    Usually generate a core file with the call stack.

    Google the error if you don't know how to fix it.
*/

#include <stdio.h>

int main()
{
    return 0;
}