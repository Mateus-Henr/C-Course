/*  Author: Mateus Henrique
    Purpose: This program is shows structures and functions in C.
*/

/*
    Structures as arguments to functions
    You just need to use "struct struct_name_tag variable_name".
    Example below.

    Pointers to structures
    A function should in most of the cases use a pointer as an argument, rather than the structure itself. 
    Since C uses the concept of "pass by value", when you use structures the entire structure will get 
    copied to the parameter of the function. Even though when using pointers this concept doesn't really
    change, a pointer is just an address making the usage of memory less.
    So pointers to structures are used to avoid memory consuption and time that takes to get a structure
    copied.
    Example below.

    Avoiding modifications to the address or to what the pointer is pointing to.
    You can use the "const" before the "*" to not allow any modification to what the structure is pointing 
    to, and you can use it after the "*" to not allow any modification to the address that the pointer holds.
    But the second one is not useful, since in C we have "pass by value" even if you alter the address that
    the pointer holds, the variable outside of the function (the one that was copied to the parameter) won't
    change its value.
    Ex: "const struct Family *member1, const struct Family *member2".
    Ex: "struct Family *const member1, struct Family *const member2". (NOT USEFUL)

    Returning a structure from a function
    The return_type of the function will be "struct struct_tag".
    The advantages of this model is that we can return more data, since they will be stored in the struct.
    Again it's not the best way to move struct around, it's best to work with pointers.
    When returning a pointer to struct, the struct is created on the heap (dinamically allocated). The
    programmer maintains it.
    Ex: "struct Date myFun(void);".

    GOOD PRACTISE
    WHENEVER POSSIBLE USE POINTERS TO STRUCTURES OVER STRUCTURES AS ARGUMENT.
    It's also good because increases compatibilty with older versions of C and
    saves time and space compared to using structures.
    One drawback of using pointers is that your data is more unprotected, but
    it's very easy to solve this problem, the solution is to use "const", so
    the function will not be able to modify the data that the pointer points to.
    One advantage of using strucures is that it creates copy of the original
    data, which is safer than working with the original data.
    Passing structures by value is more often done for structures that are small.
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <limits.h>

struct Family
{
  char name[20];
  int age;
  char father[20];
  char mother[20];
};

struct Funds
{
  char bank[CHAR_MAX];
  double bankFund;
  char save[CHAR_MAX];
  double saveFund;
};

// Functions prototypes

bool siblingsStruct(struct Family member1, struct Family member2);

bool siblingsPointer(const struct Family *member1, const struct Family *member2);

double sumStruct(const struct Funds person);

double sumPointer(const struct Funds *person);


int main(void)
{
  struct Family person1 = {"Marcos", 34, "Júlio", "Lucia"};
  struct Family person2 = {"Gabriel", 44, "Júlio", "Lucia"};

  printf("Siblings = %s\n", (siblingsStruct(person1, person2) ? "Yes" : "No"));

  printf("Siblings = %s\n", (siblingsPointer(&person1, &person2) ? "Yes" : "No"));


  // Examples of returning a structure
  struct Funds stan = {"Garlic-Melon Bank", 4032.27, "Lucky's Saving and Loan", 8543.94};

  printf("Stan has a total of $%.2f.\n", sumStruct(stan));

  printf("Stan has a total of $%.2f.\n", sumPointer(&stan));

  return 0;
}

/*
 * Tells if two people are siblings (if they have the same mother).
 * This is not really the most optmized version since it makes copies
 * of the structures to the parameters, being this concept called
 * "Pass by value". The most optimized version would be using pointers.
 *
 * @param   member1   a structure of type Family.
 * @param   member2   a structure of type Family.
 * @return            whether two people are siblings or not.
 */
bool siblingsStruct(struct Family member1, struct Family member2)
{
  return strcmp(member1.mother, member2.mother) == 0;
}

/*
 * Tells if two people are siblings (if they have the same mother).
 * This is a more optimized version using pointers.
 * "const" is being used to avoid any modification of the members of the struct.
 *
 * @param   member1   a pointer to a structure of type Family.
 * @param   member2   a pointer to a structure of type Family.
 * @return            whether two people are siblings or not.
 */
bool siblingsPointer(const struct Family *member1, const struct Family *member2)
{
  return strcmp(member1->mother, member2->mother) == 0;
}

/*
 * Gets the sum of the bank fund and the save fund of a person.
 * Uses a struct as parameter.
 *
 * @param   person   a structure of type Funds.
 * @return           the sum of the bank fund and the save fund.
 */
double sumStruct(const struct Funds person)
{
  return(person.bankFund + person.saveFund);
}

/*
 * Gets the sum of the bank fund and the save fund of a person.
 * Uses a pointer to struct as parameter.
 *
 * @param   person   a structure of type Funds.
 * @return           the sum of the bank fund and the save fund.
 */
double sumPointer(const struct Funds *person)
{
  return(person->bankFund + person->saveFund);
}