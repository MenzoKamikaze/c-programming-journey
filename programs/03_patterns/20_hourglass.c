/*
 * 20. Hourglass
 *
 * What it does: Prints an hourglass shape.
 *
 * How it works:
 *   Note: In pattern programs the OUTER loop controls the rows and the
 *   INNER loop controls what is printed in each row.
 *   1. The first half narrows toward the center (n down to 1).
 *   2. The second half widens again (2 up to n), skipping the middle row
 *      so it is not printed twice.
 *
 * Concept: Combining inverted and normal pyramids.
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

    if (n < 1)
    {
        // Stop with an error (invalid input)
        return 1;
    }

    // i counts down from n to 1
    for (int i = n; i >= 1; i--)
    {
        for (int s = 0; s < n - i; s++)
        {
            printf(" ");
        }

        for (int j = 0; j < 2 * i - 1; j++)
        {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    for (int i = 2; i <= n; i++)
    {
        for (int s = 0; s < n - i; s++)
        {
            printf(" ");
        }

        for (int j = 0; j < 2 * i - 1; j++)
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
 *   3
 *   *****
 *    ***
 *     *
 *    ***
 *   *****
 */
