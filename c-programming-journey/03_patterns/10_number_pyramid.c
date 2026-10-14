/*
 * 10. Number Pyramid
 *
 * What it does: Prints a symmetrical number pyramid like 12321.
 *
 * How it works:
 *   Note: In pattern programs the OUTER loop controls the rows and the
 *   INNER loop controls what is printed in each row.
 *   1. Print spaces first.
 *   2. Then count UP from 1 to i, then count DOWN from i - 1 to 1. This
 *      makes the row symmetrical.
 *
 * Concept: Up and down counting.
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

        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        for (int j = i - 1; j >= 1; j--)
        {
            printf("%d", j);
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
 *      1
 *     121
 *    12321
 *   1234321
 */
