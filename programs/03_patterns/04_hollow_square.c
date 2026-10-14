/*
 * 04. Hollow Square
 *
 * What it does: Prints a square with only the border.
 *
 * How it works:
 *   Note: In pattern programs the OUTER loop controls the rows and the
 *   INNER loop controls what is printed in each row.
 *   1. A star is printed on the first row, last row, first column or last
 *      column.
 *   2. Everywhere else we print spaces.
 *
 * Concept: Conditions inside nested loops.
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
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
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
 *   4
 *   * * * *
 *   *     *
 *   *     *
 *   * * * *
 */
