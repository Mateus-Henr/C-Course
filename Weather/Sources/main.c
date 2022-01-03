/*  Author: Mateus Henrique
    Purpose: This is my version for the challenge "Weather program".
*/

#include <stdio.h>
#include <stdbool.h>

#define YEARS 5
#define MONTHS 12
#define ZERO 0
#define ONE 1

int main()
{
    const int years[] = {2010, 2011, 2012, 2013, 2014};
    const char* months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "Ocotober", "November", "December"};

    float rainfall[YEARS][MONTHS] =
    {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };

    float yearlySum[YEARS] = {ZERO};
    float monthlyAvg[MONTHS] = {ZERO};

    float yearlyAvg = 0.0f;

    // Organizing data into what we want
    for (int year = ZERO; year < YEARS; year++)
    {
        for (int month = ZERO; month < MONTHS; month++)
        {
            yearlySum[year] += rainfall[year][month];
            monthlyAvg[month] += rainfall[year][month];
            yearlyAvg += rainfall[year][month];

            if (year == YEARS - ONE)
            {
                monthlyAvg[month] /= YEARS;

                if (month == MONTHS - ONE)
                {
                    yearlyAvg /= YEARS;
                }
            }
        }
    }

    // Displaying information asked
    printf("YEAR\tRAINFALL (inches)\n");
    for (int year = ZERO; year < YEARS; year++)
    {
        printf("%i\t  %0.1f\n", years[year], yearlySum[year]);
    }

    printf("\nThe yearly average is %0.1f inches.\n", yearlyAvg);

    printf("\nMONTHLY AVERAGES:\n");
    for (int month = ZERO; month < MONTHS; month++)
    {
        printf("%.3s  ", months[month]);
    }

    printf("\n");

    for (int month = ZERO; month < MONTHS; month++)
    {
        printf("%0.1f  ", monthlyAvg[month]);
    }

    printf("\n");

    return 0;
}