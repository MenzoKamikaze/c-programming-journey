/*
 * 20. Grade Calculator
 *
 * What it does: Converts marks (0 to 100) into a grade.
 *
 * How it works:
 *   1. First reject marks below 0 or above 100.
 *   2. Then check from highest to lowest: 90+ is A, 80+ is B, 70+ is C,
 *      60+ is D, 40+ is E, else F.
 *   3. ORDER MATTERS: the first condition that is true runs and the rest
 *      are skipped.
 *   4. These marks ranges are just an example, not an official grading
 *      policy.
 *
 * Concept: if-else-if chains and range checking.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    float marks;

    printf("Enter marks from 0 to 100: ");
    scanf("%f", &marks);

    if (marks < 0 || marks > 100)
    {
        printf("Invalid marks\n");
    }
    else if (marks >= 90)
    {
        printf("Grade A\n");
    }
    else if (marks >= 80)
    {
        printf("Grade B\n");
    }
    else if (marks >= 70)
    {
        printf("Grade C\n");
    }
    else if (marks >= 60)
    {
        printf("Grade D\n");
    }
    else if (marks >= 40)
    {
        printf("Grade E\n");
    }
    else
    {
        printf("Grade F\n");
    }

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   Enter marks from 0 to 100: 85
 *   Grade B
 */
