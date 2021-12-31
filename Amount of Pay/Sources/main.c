/*  Author: Mateus Henrique
    Purpose: This is my solution for the challenge "Determine the amount of weekly pay".
*/

#include <stdio.h>
#define PAYRATE 12.00 // REMEMBER THAT WE HAVE CONSTANTS IN C
#define OVERTIME 40
#define HALF 2
#define TAXRATE_300 0.15
#define TAXRATE_150 0.20
#define TAXRATE_REST 0.25

int main()
{
    unsigned int hoursWorked = 0;
    double grossPay = 0.00;
    double taxesToPay = 0.00;
    double netPay = 0.00;

    printf("Enter the number of hours worked:\n");
    scanf("%i", &hoursWorked);

    if (hoursWorked > OVERTIME)
    {
        int hoursOvertime = hoursWorked - OVERTIME;

        grossPay = (OVERTIME * PAYRATE) + (hoursOvertime * PAYRATE) + ((hoursOvertime * PAYRATE) / HALF);
    }
    else
    {
        grossPay = hoursWorked * PAYRATE;
    }

    if (grossPay <= 300)
    {
        taxesToPay = (grossPay * TAXRATE_300);
    }
    else if (grossPay <= 450)
    {
        taxesToPay = (300 * TAXRATE_300) + ((grossPay - 300) * TAXRATE_150);
    }
    else
    {
        taxesToPay = (300 * TAXRATE_300) + (150 * TAXRATE_150) + ((grossPay - 45045) * TAXRATE_REST);
    }

    netPay = grossPay - taxesToPay;

    printf("Gross pay = $%0.2lf\n"
           "Taxes = $%0.2lf\n"
           "Net pay = $%0.2lf\n",
           grossPay,
           taxesToPay,
           netPay);

    return 0;
}