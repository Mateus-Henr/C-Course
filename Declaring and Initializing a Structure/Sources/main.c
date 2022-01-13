/*  Author: Mateus Henrique
    Purpose: This program shows my version of the "declaring and initializing a structure".
*/

#include <stdio.h>
#include <string.h>
#include <limits.h>

#define UNKNOWN "Unknown"

struct Employee
{
    char name[CHAR_MAX];
    char hireDate[CHAR_MAX];
    float salary;
};

int main(void)
{
    struct Employee employee = {"Mateus", "23/10/2004", 3134.00F};

    printf("Employee:\nName: %s, Hire Date: %s, Salary: %.02f.\n",
            employee.name, employee.hireDate, employee.salary);


    printf("Enter employee information\n");
    printf("Enter the name:\n");
    if(!fgets(employee.name, CHAR_MAX, stdin))
    {
        printf("Invalid name. Setting it to %s.\n", UNKNOWN);
        strcpy(employee.name, UNKNOWN);
    }

    printf("Enter the hire date:\n");
    if(!fgets(employee.hireDate, CHAR_MAX, stdin))
    {
        printf("Invalid hire date. Setting it to %s.\n", UNKNOWN);
        strcpy(employee.hireDate, UNKNOWN);
    }

    printf("Enter the salary:\n");
    if (!scanf("%f", &employee.salary))
    {
        printf("Invalid salary. Setting it to 0.0.\n");
        employee.salary = 0.0F;
    }

    printf("Employee:\nName: %s, Hire Date: %s, Salary: %.02f.\n", 
            employee.name, employee.hireDate, employee.salary);

    return 0;
}