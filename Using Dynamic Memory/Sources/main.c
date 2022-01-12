/*  Author: Mateus Henrique
    Purpose: This program is my versior for the "using dynamic memory" challenge.
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

#define INVALID_INPUT "\nInvalid input.\n"

// Function prototypes

void clean_stdin(void);


int main(void)
{
    while (true)
    {
        int lengthUser = 0;
        
        printf("Enter the length of the string:\n");
        if (!scanf("%d", &lengthUser))
        {
          printf(INVALID_INPUT);
          clean_stdin();
          continue;
        }
    
        if (lengthUser <= 0)
        {
          printf(INVALID_INPUT);
          continue;
        }
    
        char *string = (char *) malloc(lengthUser);
    
        if (!string)
        {
          printf("Error while trying to allocate memory.\n");
          system("exit");
        }

        clean_stdin();
        printf("Enter the string:\n");
        fgets(string, lengthUser, stdin);
    
        printf("\nString = %s\nAddress = %p\n", string, string);
    
        free(string);
        string = NULL;
        break;
    }

  return 0;
}

/*
 * Cleans the stdin for fixing problems related to the "scanf()" function.
 */
void clean_stdin(void)
{
    int c = getchar();

    while (c != '\n' && c != EOF)
    {
        c = getchar();
    }
}