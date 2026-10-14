/*
 * 06. Inverted Pyramid
 *
 * What it does: Prints an upside-down pyramid.
 *
 * How it works:
 *   Note: In pattern programs the OUTER loop controls the rows and the
 *   INNER loop controls what is printed in each row.
 *   1. The first row has the most stars. Each next row has 2 fewer stars
 *      and 1 more leading space.
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

    // i counts down from n to 1
    for (int i = n; i >= 1; i--)
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
 *   *******
 *    *****
 *     ***
 *      *
 */
