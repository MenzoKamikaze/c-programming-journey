/*
 * 15. Hollow Triangle
 *
 * What it does: Prints a triangle with only the border.
 *
 * How it works:
 *   Note: In pattern programs the OUTER loop controls the rows and the
 *   INNER loop controls what is printed in each row.
 *   1. A star is printed on the left edge (j == 1), the right edge (j ==
 *      i) and the bottom row (i == n).
 *   2. All other positions print spaces.
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
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i || i == n)
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
 *   *
 *   * *
 *   *   *
 *   * * * *
 */
