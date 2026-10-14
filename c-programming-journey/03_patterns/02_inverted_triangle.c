/*
 * 02. Inverted Triangle
 *
 * What it does: Prints a triangle that gets smaller each row.
 *
 * How it works:
 *   Note: In pattern programs the OUTER loop controls the rows and the
 *   INNER loop controls what is printed in each row.
 *   1. The outer loop goes from n down to 1, so each row has fewer stars.
 *
 * Concept: Nested loops with a decreasing outer loop.
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

    // i counts down from n to 1
    for (int i = n; i >= 1; i--)
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
 *   * * * *
 *   * * *
 *   * *
 *   *
 */
