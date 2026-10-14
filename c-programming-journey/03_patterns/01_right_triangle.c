/*
 * 01. Right Triangle
 *
 * What it does: Prints a right-angled triangle of stars.
 *
 * How it works:
 *   Note: In pattern programs the OUTER loop controls the rows and the
 *   INNER loop controls what is printed in each row.
 *   1. Row 1 prints 1 star, row 2 prints 2 stars, row i prints i stars.
 *   2. After each row, printf("\n") moves to the next line.
 *
 * Concept: Nested loops.
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
            printf("* ");
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
 *   * * *
 *   * * * *
 */
