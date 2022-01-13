/*  Author: Mateus Henrique
    Purpose: This program describes nested structures in C.
*/

/*
    Nested structures
    This is when you have another structure as member of a structure.
    In the example below it's shown how to group date and time together
    because in most applications they are closely related.

    Naming conventions for nested structures
    Just like with pointers is recommended to when creating nested structures
    to use the "s" prefix to make clear that the member is a structure.

    Accessing members in a nested structure
    Just like any other members, we can access a structure inside a structure
    using the "." (dot) operator.
    To reference a particular member inside a nested structure, the period is
    also used.
    Ex: "event.sdate.hours = 12";

    Initializing a nested struct
    The initialization is the same as initializing an array when we have an array
    of structures.
    It's also possible to initialize specific members, by using the dot member. 
    Ex: "struct dateAndTime event = {{.month = 2}, {.seconds = 14}};".

    An array of nested structures
    It follows the same pattern.

    Declaring a structure within a structure
    Looking at the exaples above, it's possible to define the date structure within the
    time structure definition, so you wouldn't have two separated structures.
    THIS IS USED WHEN YOU DON'T WANT TO GIVE ACCESS TO A STRUCT BY ITSELF. VERY USEFUL.
    More informations in the example below.
*/

#include <stdio.h>

struct time
{
    int hours;
    int minutes;
    int seconds;
};

struct date
{
    int day;
    int month;
    int year;
};

// Grouping the date and time structures (nested structure).
struct dateAndTime
{
    struct date sdate;
    struct time stime;
};

// Declaring a structure whitin a structure.
struct time1
{
    // Defining a structure this way, makes impossible the usage of the struct
    // anywhere else in the code by itself. You have to create a variable of type
    // "time1" to get access to the "date1" struct.
    // It's impossible to create a "date1" variable outside of the "time1" struct.
    // This declaration is enclosed within the scope of the outer struct.
    struct date1
    {
        int day;
        int month;
        int year;
    } dob; // Creating a variable for the struct.

    int hours;
    int minutes;
    int seconds;
};

int main()
{
    // Defining a variable of our struct type.
    struct dateAndTime event;

    // Accessing member in a structure.
    event.sdate = (struct date) {12, 12, 2001};
    event.stime.hours = 12;
    event.stime.minutes = 45;
    event.stime.seconds = 56;
    event.stime.seconds++;

    printf("Event\nDay: %02d\nMonth: %02d\nYear: %04d\nHours: %02d\nMinutes: %02d\nSeconds: %02d\n\n",
            event.sdate.day, event.sdate.month, event.sdate.year, event.stime.hours, event.stime.minutes, event.stime.seconds);

    //Initializing a structure.
    struct dateAndTime event1 = {{2, 1, 2015}, {3, 30, 0}};

    printf("Event1\nDay: %02d\nMonth: %02d\nYear: %04d\nHours: %02d\nMinutes: %02d\nSeconds: %02d\n\n",
            event1.sdate.day, event1.sdate.month, event1.sdate.year, event1.stime.hours, event1.stime.minutes, event1.stime.seconds);

    // Array of nested structures
    struct dateAndTime events[100];

    events[0].stime.hours = 12;
    events[0].stime.minutes = 00;
    events[0].stime.seconds = 00;

    // Declaration of a structure inside of a structure
    struct time1 time1;

    // As this structure is nested in the "time1", we don't have access to it,
    // therefore, making this statement invalid.
    // struct date1 date1;

    // Also invalid since we DO NOT HAVE ACCESS TO THE "date1" STRUCT.
    // time1.dob = (struct date1) {12, 10, 2043};

    // New discovery, if you're assigning only specific members, the rest will be set to zero.
    // For example in the commented statement above, I'm assigning values to the nested struct,
    // however when assigning values to other data members in a different statement, the values
    // inserted first would dissapear.
    // time1 = (struct time1) {.dob = {21, 12, 2025}}; 
    time1 = (struct time1) {.dob = {21, 12, 2025}, .hours = 10, .minutes = 20, .seconds = 43};

    printf("Time1\nDay: %02d\nMonth: %02d\nYear: %04d\nHours: %02d\nMinutes: %02d\nSeconds: %02d\n\n",
            time1.dob.day, time1.dob.month, time1.dob.year, time1.hours, time1.minutes, time1.seconds);

    return 0;
}