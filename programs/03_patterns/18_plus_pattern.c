/*
 * 18. Plus Pattern
 *
 * What it does: Prints a plus sign.
 *
 * How it works:
 *   Note: In pattern programs the OUTER loop controls the rows and the
 *   INNER loop controls what is printed in each row.
 *   1. The middle row and the middle column are filled with stars.
 *   2. n must be odd so there is exactly one center row and column.
 *
 * Concept: Middle row and column logic.
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

    if (n < 1 || n % 2 == 0)
    {
        printf("Enter a positive odd number.\n");

        // Stop with an error (invalid input)
        return 1;
    }

    int middle = n / 2;

    // i goes 0, 1, 2 ... n-1 (indices start at 0)
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == middle || j == middle)
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
 *     *
 *     *
 *   *****
 *     *
 *     *
 */
