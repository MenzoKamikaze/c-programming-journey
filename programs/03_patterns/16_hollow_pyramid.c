/*
 * 16. Hollow Pyramid
 *
 * What it does: Prints a pyramid with only the border.
 *
 * How it works:
 *   Note: In pattern programs the OUTER loop controls the rows and the
 *   INNER loop controls what is printed in each row.
 *   1. Print stars at both ends of each row and fill the whole bottom
 *      row.
 *   2. Spaces in the middle make it hollow.
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
        for (int s = 1; s <= n - i; s++)
        {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (i == n || j == 1 || j == 2 * i - 1)
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
 *   4
 *      *
 *     * *
 *    *   *
 *   *******
 */
