/*
 * 17. X Pattern
 *
 * What it does: Prints a big X.
 *
 * How it works:
 *   Note: In pattern programs the OUTER loop controls the rows and the
 *   INNER loop controls what is printed in each row.
 *   1. An X has stars on both diagonals.
 *   2. i == j is one diagonal. i + j == n - 1 is the other diagonal.
 *   3. Everything else is a space.
 *
 * Concept: Diagonals in a grid.
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

    // i goes 0, 1, 2 ... n-1 (indices start at 0)
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i + j == n - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        // Move to the next line
        printf("\n");
    }

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   5
 *   *   *
 *    * *
 *     *
 *    * *
 *   *   *
 */
