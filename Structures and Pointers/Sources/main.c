/*  Author: Mateus Henrique
    Purpose: This program describes structures and pointers in C.
*/

/*
    Structures and pointers
    We can have a pointer to a structure inside a structure, which is easier to manipulate than
    the structure itself. A lot more efficient.
    Another reason to use pointers is because in older implementations of C, a structure could not 
    be passed as an argument to a function.
    WHEN PASSING A STRUCTURE IT MEANS THAT YOU ARE COPYING THE ENTIRE STRUCTURE (TOGETHER WITH ALL
    OF ITS MEMBERS) TO THE PARAMETER OF THE FUNCTION. THAT'S WHY PASSING A POINTER IS A lOT MORE
    EFFICIENT SINCE A POINTER IS JUST AN ADDRESS TO THAT STRUCTURE.

    Declaring a struct as a pointer
    Just like when defining a normal pointer, we just need to use the asterisk.
    It's important to initialize it to NULL.
    Also, when declaring a pointer, no memory will be created to allocate this pointer, since
    it has NOT been initialized yet.
    Ex: "struct date *pDate;".

    Accessing an the structure members that the pointer points to
    In order to indirectly access the you can dereference the element and use the dot operator
    to get the desired member.
    Parentheses are required because the structure member operator "." has higher precedence
    than teh indirection operator "*".
    Ex "(*pDate).day = 21;".

    Using structs as pointers
    To test the value of a member of a pointer we can just dereference it and get the desired
    member through the dot.
    Ex: "if ((*pDate).month == 12)";

    C's syntax for accessing date inside a pointer
    Due to the "complexity" of dereferencing a pointer to get a value of a member, C has
    the "->" (pointer operator), that's used to get a member from a pointer directly.
    MOST USED.
    Ex: "pDate->day = 12;".

    Structures containing a pointer
    It's just having a pointer as a member of an structure.
    Syntax example
    struct pInt
    {
        int *p1;
        int *p2;
    }
    The declaration of variable and accessing the member and the value is similar
    to what has been explained above.
    REMEMBER THAT TO ACCESS A MEMBER WE USE THE DOT AND TO ACCESS WHAT THE POINTER IS
    POINTING TO WE USE THE POINTER OPERATOR.
    Example below.

    Character arrays or character pointers
    Using pointer notation is more advantageous than using the array notation.
    Syntax eaxmple
    struct pNames
    {
        char *first;
        char *last;
    };
    It's ultra important to remember that the compiler will store the strings where they
    have been defined. The pointers will only hold the address to where they are stored.
    So it only works with strings that have already been allocated space in memory.
    Using "malloc" to allocate the space for the string is a good idea here.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Time
{
    struct Date *pDate;
    int hours;
    int minutes;
    int seconds;
};

struct intPtrs
{
    int *p1; 
    int *p2; 
};

struct PName
{
    char *first;
    char *last;
};

// Function prototypes

void getInfo(struct PName *pName);


int main(void)
{
    struct Date date = {12, 12, 2002};

    // Initializing the pointer to the structure that we've created.
    // It's important to remmeber that to give a value to a pointer either we give it an address of a variable
    // that has already been initialized before or we allocate memory for it dinamically.
    struct Time time = {&date, 23, 45, 43};

    // Accessing a pointer in a structure through defereferenciation.
    printf("Time\n%02d/%02d/%04d\n%02d:%02d:%02d\n\n",
           (*time.pDate).day, (*time.pDate).month, (*time.pDate).year, time.hours, time.minutes, time.seconds);

    // Altering the value, as the date is a pointer inside the time structure, if we modify the date structure
    // the value will be modified in the entire program.
    date.day = 10;

    // Accessing a pointer in a structure through dereferenciation.
    printf("Time\n%02d/%02d/%04d\n%02d:%02d:%02d\n\n",
           time.pDate->day, time.pDate->month, time.pDate->year, time.hours, time.minutes, time.seconds);

    
    // Another example
    struct intPtrs pointers; 
    int i1 = 100, i2;

    pointers.p1 = &i1; 
    pointers.p2 = &i2; 
    *(pointers.p2) = -97;

    printf("i1 = %d, *pointers.p1 = %d\n", i1, *(pointers.p1));
    printf("i2 = %d, *pointers.p2 = %d\n\n", i2, *(pointers.p2));


    // Structures using pointers to strings
    struct PName name;
    char firstName[] = "Mateus";
    char lastName[] = "Figueiredo";

    name.first = firstName;
    name.last = lastName;

    printf("Name: %s %s.\n", name.first, name.last); // For strings do not use dereferenciation.


    // Example of malloc
    // The structure MUST ALREADY HAVE BEEN CREATED in order to use function that assigns
    // values to its pointers. YOU CANNNOT PASS A POINTER TO THE STRUCTURE TO BE INTIALIZED
    // BECAUSE THE POINTER WILL HAVE NO VALUE. REMEMBER THAT A POINT ONLY HOLDS AN ADDRESS TO
    // A STRUCTURE, THE STRUCTURE ITSELF MUST BE INITIALIZED BEFORE THE USE OF THE A POINTER
    // FOR THAT STRUCTURE.
    struct PName pName;

    getInfo(&pName);

    printf("Name: %s %s.\n", pName.first, pName.last);

    return 0;
}

/*
 * Gets the name from the user, allocates space in memory for it and sets it in the allocated space.
 *
 * @param   pName   a pointer for the struct.
 */
void getInfo(struct PName *pName)
{
    char temp[CHAR_MAX];
    printf("Please enter your first name:\n"); 
    scanf("%s", temp);

    // Allocate memory to hold name
    pName->first = (char *) malloc(strlen(temp) + 1); // Don't forget the null character.

    // Copy name to allocated memory
    strcpy(pName->first, temp); 
    printf("Please enter your last name:\n"); 
    scanf("%s", temp);

    // Allocating more memory for the last name
    pName->last = (char *) malloc(strlen(temp) + 1);
    strcpy(pName->last, temp);
}