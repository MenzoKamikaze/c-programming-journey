/*
 * 12. Binary Triangle
 *
 * What it does: Prints a triangle of alternating 0s and 1s.
 *
 * How it works:
 *   Note: In pattern programs the OUTER loop controls the rows and the
 *   INNER loop controls what is printed in each row.
 *   1. (i + j) % 2 is 0 when i + j is even and 1 when it is odd, so the
 *      values alternate.
 *
 * Concept: Using the modulus operator in patterns.
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
            printf("%d ", (i + j) % 2);
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
 *   0
 *   1 0
 *   0 1 0
 *   1 0 1 0
 */
