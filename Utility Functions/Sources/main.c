/*  Author: Mateus Henrique
    Purpose: This program describes utility functions in C.
*/

/*
    Utility functions (<stdlib.h>)
    abs() - Returns the absolute value of x.
    exit() - Terminates a program execution, closing any open files and returning the exit
             status specifed by its int argument. Used when you have a fatal error.
             Also has some contants: EXIT_SUCCESSS and EXIT_FAILURE.
             Some related functions are "abort()" and "atexit()".
    getenv() - Used to get environment variables. Stuff related to the environment.
    qsort() - Sorts an array, based on a function of sorting passed to it.
    rand() - Generates a random number. You can specify a seed for it.
    srand() - Used with the "rand()" functio, it seeds the random number generator.
    system() - Used to execute system calls. Stuff that you would do through the CMD.

    
    Assert library (<assert.h>)
    Used for debugging.
    assert() - Checks if an expression is true or false. If it evaluates to false (nonzero)
               the "assert()" macro writes an error message to the strderr and calls the 
               "abort()" function. Making sure that everything is working.
    

    Other useful header files
    <time.h> - Macros and function supporting operations with dates and times.
    <errno.h> - Macros for reporting of errors.
    <locale.h> - Macros and functions for formatting data such as monetary units, etc.
    <signal.h> - Useful for program termination by generating different signals.
    <stdarg.h> - Defines facilities that enable a variable number of arguments to be passed
                 to a function.
*/

#include <stdio.h>

int main(void)
{
    return 0;
}