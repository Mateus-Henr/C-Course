#include <stdio.h>

// The "#include" statement (preprocessor directive)
// Very similar to the "import" statement of Java.
// It's not a strictly part of the executable program, however the program won't work without it.
// It instructs the compiler to "include" in your program athe contents of the file with the same name as you defined.
// They are called header files because they are included at the head of the program source file (.h extension).

// Header files
// They define information about some of the functions that are provided by that file. "stdio.h" is one example of it.
// In other words, they specify information that the compiler uses to integrate any predefined functions within a program.
// These predefined function could either be created by you or from other sources.
// Its syntax is case sensitve on some systems, so they shoudl always be written in lowercase.
// Executable code don't go here, they go into a source code file. Header files have DEFINITIONS not implementations.
// By defining stuff in the header file is like announcing that they exists.

// Including header files
// When using "<>" you are telling the preprocessor to look for thefile in otne or more standard system directories. ("#include <Jason.h>")
// When using double quotes you are telling the preprocessor to first look in the current directory. (#include "Jason.h")
// Every C compiler that conforms to the C11 standard will have a set of standard header file supplied with it.
// "#ifndef" and "#define" to protect against multiple inclusions of a header file.

// The "stdio.h"
// It's short for standard input/output (Meaningful name as your own libraries must be).
// It's a standard C library header and provides functionality for displaying output, for example.
// It contains the information that the compiler needs to understand what the "printf" function does.


// Syntax of a Header file
//
// Some header (3define directives and other preprocessor directives)
//
// Typedefs
// typedef struct names_st names;
//
// Functon prototypes
// void get_names(names *);
// void show_names(const names *);
// char * s_gets(char * st, int n);



int main()
{
    printf("Hi, my name is Mateus.");

    return 0;
}