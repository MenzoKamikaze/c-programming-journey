/*
 * 11. Check Leap Year
 *
 * What it does: Tells whether a year is a leap year.
 *
 * How it works:
 *   1. A year is a leap year if it is divisible by 400, OR divisible by 4
 *      but NOT by 100.
 *   2. % gives the remainder, == checks equal, != checks not equal.
 *   3. && needs both conditions true. || needs at least one true.
 *   4. 2000 is a leap year (divisible by 400). 1900 is not (divisible by
 *      100 but not 400). 2024 is a leap year.
 *
 * Concept: Combining logical conditions.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        printf("Leap year\n");
    }
    else
    {
        printf("Not a leap year\n");
    }

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   Enter a year: 2024
 *   Leap year
 */
