/*  Author: Mateus Henrique
    Purpose: This program describes local and global variables.
*/

/*
    Local variables
    They are variables defined within a block of code, such as functions, loops, if statements, etc.
    These variables cannot be accessed outside the block of code.
    For variables defined in a function for example, it'll be local to that function and it cannot be accessed outside of it.
    If an initial values is given to a variable inside a function, that initial values is assigned each time the function is called.
    Static variables have the program scope.
    There's a keyword called "auto" that can be used when defining local variables, but the C compiler adds it automatically.

    Global varaibles
    Can be accessed by any functions in the program.
    To create one you just need to create it at the top outside any function.
    Any functions can modify this variable.
    If there's a global variable and a local variable with the same name the local variable will take precedence and the global
    variable becomes unaccessible. DON'T USE THE SAME NAME FOR GLOBAL AND LOCAL VARIABLES.
    Example below.
    
    Good practise
    Global variables should be AVOIDED because they promote coupling (dependecy) between functions.
    It makes the program hard to maintain.
    If a function needs data you pass it through a function.
    But if there's a case that you need to use global variables document it.
*/

#include <stdio.h>

int myGlobal = 0; // Global variable

int main()
{
    int myLocalMain = 0; // Local variable
    // Can access myGlobal and myLocal

    return 0;
}

void myFunction()
{
    int x; // Local variable
    // Can access myGlobal and x, cannot access myLocal
}