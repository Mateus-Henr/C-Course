/*  Author: Mateus Henrique
    Purpose: This program is shows structures and arrays in C.
*/

/*
    Array of structures
    We can define an array of structures the same way that we would define a normal
    array, but instead of the C data types we use "struct our_data_type name_array[n]".
    Ex: "struct date myDates[10];".

    Identifying members of an array of structures
    The same rule is applied, we apply the dot operator to get a member of an element
    of the array.
    Ex: "myDates[0].day = 10;".

    Initializing an array of structures
    It's similar to intialization of multidimensional arrays.
    Double curly brances, etc. Just like other array, if you don't intialize all the
    element they will be set to 0.
    Ex: "struct date myDates1[5] = {{12, 10, 1975}, {12, 30, 1980}, {11, 15, 2005}};".

    Initializing a specific element of an array of structures
    You can initialize a specific element by using the index when initializing the array.
    Ex: "struct date myDates2[5] = {[2] = {12, 10, 1970}};".
    Also, it's possible to intialize only specific data members.
    Ex: "struct date myDates2[5] = {[2].month = 12, [2].day = 13};".

    Structures containing arrays
    It's common to have structures that have arrays as members (strings are a good example).

    Syntax example
    struct month
    {
      int numberOfDays;
      char name[3];
    };

    Defining a variable
    You can define a variable of the data type of the struct just like we did with normal structs.
*/

#include <stdio.h>

struct date
{
  int day;
  int month;
  int year;
};

struct month
{
  int numberOfDays;
  char name[3];
};

int main(void)
{
  struct date myDates[10];
  myDates[0] = (struct date) {10, 12, 2002}; // Assigning a value using a compound literal. 

  printf("Date = %02d/%02d/%04d.\n", myDates[0].day, myDates[0].month, myDates[0].year);

  // Initialization
  struct date myDates1[5] = {{12, 10, 1975}, {12, 30, 1980}, {11, 15, 2005}};

  printf("Date = %02d/%02d/%04d.\n", myDates1[0].day, myDates1[0].month, myDates1[0].year);

  // Struct containing an array
  struct month aMonth;
  aMonth = (struct month) {31, {"Jan"}};

  printf("Month = %s | Number of days = %d\n", aMonth.name, aMonth.numberOfDays);

  return 0;
}