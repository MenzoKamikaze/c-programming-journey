/*
 * 19. Checkerboard
 *
 * What it does: Prints a checkerboard of stars and spaces.
 *
 * How it works:
 *   Note: In pattern programs the OUTER loop controls the rows and the
 *   INNER loop controls what is printed in each row.
 *   1. If (i + j) is even we print a star, otherwise spaces. This
 *      alternates like a chess board.
 *
 * Concept: Alternating pattern with %.
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
            if ((i + j) % 2 == 0)
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
 *   5
 *   *   *   *
 *     *   *
 *   *   *   *
 *     *   *
 *   *   *   *
 */
