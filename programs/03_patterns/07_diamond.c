/*
 * 07. Diamond
 *
 * What it does: Prints a diamond made of stars.
 *
 * How it works:
 *   Note: In pattern programs the OUTER loop controls the rows and the
 *   INNER loop controls what is printed in each row.
 *   1. First part prints a normal pyramid.
 *   2. Second part prints an inverted pyramid but starts from n - 1 so
 *      the widest row is not printed twice.
 *
 * Concept: Combining two patterns.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    // n will store the number typed by the user
    int n;

    // Read an integer into n (& = address of n)
    scanf("%d", &n);

    // i goes 1, 2, 3 ... n
    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= n - i; s++)
        {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int s = 1; s <= n - i; s++)
        {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   4
 *      *
 *     ***
 *    *****
 *   *******
 *    *****
 *     ***
 *      *
 */
