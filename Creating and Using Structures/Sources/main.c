/*  Author: Mateus Henrique
    Purpose: This program shows how to create and use structures in C.
*/

/*
    Structure
    It's a tool for grouping elements together under a specific name.
    It's similar to an object, but without actual behaviours (methods).
    For example in order to store a data we could create a structure for a data that would contain
    members, the month, the day and the year.
    If you wanted to use the same date for other purposes, you would also be able to. Similarly to a class.

    Creating a structure
    In the structure declaration we specify what elements will be inside the structure.
    The struct keyword enables you to define a collection of variables of various types called a structure
    that can treat as a single unit.
    There's no memory allocation for a struct declaration, it only shows how it's going to be defined.

    Syntax
    struct tag_name
    {
        members of the struct; // Can be any type of variables. Can also be called fields.
    }
    Example below.

    Using a structure
    You could consider a structure as a type that you have defined.
    Variables can be declared to be of type "struct date", based on the example above.
    Only after declaring the variable for the struct that memory gets allocated.
    It's important to remember that memory is allocated for each item and the structure
    itself will have as size the sum of memory allocated for its members.
    Ex: "struct date purchaseDate;".

    Using pointers in a struct
    If you are using pointers in a struct you HAVE to allocate memory to that pointer.


    Accessing members in a struct
    A structure varaible name is not a pointer, therefore a special syntax is necessary
    for modifying or getting values from a struct, this being the dot operator ".".
    The dot operator is used before the struct variable name and after you mention the
    member name.
    Ex: "purchase.day = 25;".


    Structures in expressions
    The members inside expressions follow the same rules, so each data type still
    perform the same operations that they would perform outside a struct, for example.


    Definign the structure and variable at the same time
    C allows some flexibility while defining structures.
    It's valid to declare a variable to be of a particular structure type at the same time
    that the structure is defined.
    The variable name(s) come(s) after the terminating semicolon of the structure definition.
    It's also possible to assign intial values to the variables in the normal fashion.

    Syntax example
    struct date
    {
        int month;
        int day;
        int year;
    } today; // Declaring a variable.


    Un-named structures
    You don't have to provide the tag name.
    If all of the varaibles of a particular structure type are defined when the structure is
    defined the structure neam can be omitted.

    Syntax example
    struct
    {
        int month;
        int day;
        int year;
    } today;
    This would mean that the above struct is a struct that would be used one time and never
    again.
    A disadvantage of the above is that you can no longer define futher instances of the
    structure in another statement and all the variables of this structure type that you
    want must be defined in the one statement.
    It's also possible to initialize multiple variables by separating them by commas.

    Initializing structures
    Very similar to initializing arrays.
    The elements are listed inside a pair of braces, with each element separated by a comma.
    The initial values listed inside the curly breaces must be constant expressions.
    just like an array you don't have to provide the values for all the elements.
    And the variables that have not been set an initial value will have the value of 0.
    Ex: "struct date date1 = {12, 10};"
    It's also possible to specify the member names for initialization.
    Ex: "struct date date = {.month = 12, .day = 10};".

    Assignment with compound literal
    A compound literal is a single statement, such as below:
    today = (struct date) {9, 25, 2015};
    The statement above is not a declaration statement.
    The cast operator is used to tell the compiler the type of the expression.
    The list of values must come in order, or specifying the member name.
    Listed the same way as if you were initializing a structure variable.
    This is useful for changing the values in a less code way.
    THIS IS AFTER YOU HAVE CREATED A VARIABLE FOR THE STRUCTURE.
*/

#include <stdio.h>

struct date
{
    int month;
    int day;
    int year;
};


int main(void)
{
    struct date today; // Here memory is allocated for the structure in the stack.
    struct date purchaseDate;
    today.day = 12;
    today.month = 01;
    today.year = 2022;

    purchaseDate = {14, 12, 2000};

    if (today.day == 12)
    {
        printf("Today is day %d.\n", today.day);
    }

    printf("Today's date is %02d/%02d/%0d.\n", today.day, today.month, today.year);

    printf("Purchase's date is %02d/%02d/%0d.\n", purchaseDate.day, purchaseDate.month, purchaseDate.year);

    return 0;
}