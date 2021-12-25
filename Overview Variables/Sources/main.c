/*
Memory
Programs can either store data in RAM or in hard drive, the difference between storing data in RAM and in the hard drive is that when 
storing it in RAM it'll go away when you turn off the computer.
It's also worth mentioning that memory could be represented as boxes that sote 0 and 1 (bit).
A byte, 8 bits, is used to store data and each one of these bytes has an address. If you stop to think about it it makes sense together 
with the concept of pointers.
RAM is a lot faster to access and modify than the hard drive.
Programs need to manipulate data.

Constants
Types of data that do not change and keep their values thoughout the cicle of the program.

Variables
They change, so the opposite of constants.
Important to use meaningful names.
They use data type to determine how it's going to be stored in memory and what operations you have access to.
Primitve data types are types that are not objects and store all sorts of data. As we don't have objects in C, everything is a primitive data type.
RULES
In C all variable names must begin with a letter or underscore and can be followed by any combination of letters, underscores, or digits.

Declaring variables
This is when you specify the type of the variable followed by the variable name.
It's possible to declare multiple variables in the same line by using commas as a delimiter.
Ex: int x;

Assigning values
This is when we use the "=" operator for assigning a value to a variable.
Ex: x = 112; (defined above)

Initializing variables
Basically having an inicial valus to your variable.
Can be done when declaring a variable by assigning an initial value to its declaration.
It's important to remember that if you use "int x, z = 95" you will be initializing ONLY one variable.
Ex: int y = 21, u = 10;
*/

#include <stdio.h>

int main()
{
    int jason = 5; // Declaring and initializing the variable.
    jason = 8; // Assigning a value.

    return 0;
}