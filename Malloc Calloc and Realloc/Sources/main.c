/*  Author: Mateus Henrique
    Purpose: This program describes the "malloc", "calloc" and "realloc" functions in C.
*/

/*
    Malloc
    This is the simpliest and more common way of allocating memory.
    It's located in the "stdlib.h" header file.
    You need tospecify the number of bytes of memory that you want to allocated as the argument.
    Returns the address of the first byte of memory that it allocated. So a pointer that holds
    this value.

    Syntax
    int *pNumber = (int *) malloc(100);
    This function returns an address of type "void *", so to assign it to a pointer it's necessary
    casting it.
    As said before, the "void *" is useful for flexibility. However it would only be COMPLETELY
    necessary the casting when you were going to dereference the pointer.
    HOWEVER ALWAYS CAST IT AS IT'S CONSIDERED A GOOD PRACTISE.
    In the example above you are requiring 100 bytes of memory to be allocated.
    Assuming that an int has 4 bytes, we could say that we would be able to store 25 ints.
    However the number of bytes can change depending on the machine, that's why the "sizeof"
    operator is used together with this function. And it would become:
    int *pNumber = (int *) malloc(25 * sizeof(int));
    The code above is more portable.  We multipley by how many spaces we want.

    Fail
    Depending on the condition of the memory or how many bytes you are requesting the allocation
    could fail. If it fails it returns a pointer with the value of NULL. So it's always good
    doing a NULL checking after trying to allocate memory.
    If memory allocation fails you should get out of the program, stop it.

    Releasing memory
    The programmer is responsible for realising memory as well, and you MUST always do it, since
    memory is expensive.
    Memory allocated on the heap is automatically released when the program ends, but YOU ALWAYS
    HAVE TO EXPLICITLY RELEASE MEMORY THAT YOU ALLOCATED BEFORE THE PROGRAM ENDS. THIS IS A GOOD
    PRACTISE.
    A memory leak occurs when you allocate memory dinamically and you do not retain the reference
    to t, so you are unable to release it. Often occurs within a loop.
    Not releasing the memory can be really bad for your program.
    In order to release the memory that you allocated dynamically you have to use the "free()"
    function. You have to pass the pointer that holds the address which was used to dinamically
    alocate memory. After releasing the memory you must assign the POINTER TO NULL to signigy that
    that pointer is no longer in use.
    The "free()" function has a formal parameter of type "void *", so any type can be passed.
    Ex: "free(pNumber);".

    
    Calloc
    Very similar to malloc, but in addition to malloc, it also initializes the memory, so all
    bytes that it has allocated will be zero.
    Since it does this additional work this is more expensive.
    It takes two parameters, the number of items for which space is required (avoids the multiplication
    that you would do if you were using malloc) and the size of each data item.
    Also declared in the "stdlib.h" header file.
    Ex: "int *pNumber1 = (int *) calloc(75, sizeof(int));".

    Releasing memory and in case of fail to allocate
    Regarding fail and releasing memory it's similar to malloc.


    Realloc
    It allows you to reuse or extend memory that you previously allocated using "malloc()" or "calloc()".
    This is a way of dynamically change how much memory was allocated, while running the program.
    Expects two argument values, the pointer containing the address that was previously returned by a 
    call to "malloc()" or "calloc()" and the size in bytes of the new memory that you want allocated.
    It transfers the contants of the previously allocated memory referenced by the pointer that you supply
    as the first argument to the newly allocate memory.
    Returns a "void *" pointer to the new memory or NULL if it fails while trying to allocate.
    It preserves the contents of the original memory area, it just extends that memory.
    If you allocate a small space than you previously had, some elements will be lost.


    General notes
    Avoid allocating lots of small amounts of memory, the action of allocating memory is expensive, it's
    better to allocate larger chuncks rather than small ones.
    Only hang on to the memory as long as you need it. Never forget to release memory.
    Make sure not to overwrite the address of memory that you have allocated before you release it. It can
    cause a memory leak (be careful when allocating it in a loop).

    GOOD PRACTISES
    CHECKING FOR NULL WHEN ALLOCATING MEMORY AND ALWAYS FREE THE MEMORY AFTER USING IT. AFTER FREEING
    THE MEMORY DON'T FORGET TO SET THE POINTER TO NULL.
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

int main(void)
{
  // Example of malloc
  int *pNumber = (int *) malloc(25 * sizeof(int));

  if (!pNumber) // Remember that NULL is zero.
  {
    printf("Fail while trying to allocate memory.\n");
    system("exit"); // Only exits it if it fails.
  }

  free(pNumber); // NEVER FORGET
  pNumber = NULL; // GOOD PRACTISE


  // Example of calloc
  int *pNumber1 = (int *) calloc(75, sizeof(int));

  if (!pNumber) // Remember that NULL is zero.
  {
    printf("Fail while trying to allocate memory.\n");
    system("exit"); // Only exits it if it fails.
  }

  free(pNumber1);
  pNumber1 = NULL;


  // Using malloc and realloc
  char *str;

  // Initial memory allocation
  str = (char *) malloc(7);

  if (!str)
  {
    printf("Fail while trying to allocate memory.\n");
    system("exit");
  }

  strcpy(str, "Mateus");
  printf("String = %s, Address = %p\n", str, str);

  // Reallocating memory
  str = (char *) realloc(str, 15);

  if (!str)
  {
    printf("Fail while trying to allocate memory.\n");
    system("exit");
  }

  // Passing data to the string, once it has more space available for it.
  strcat(str, ".com");
  printf("String = %s, Address = %p\n", str, str);

  free(str);
  str = NULL;

  return 0;
}