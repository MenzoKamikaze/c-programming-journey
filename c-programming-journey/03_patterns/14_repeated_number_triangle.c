/*
 * 14. Repeated Number Triangle
 *
 * What it does: Prints 1, 2 2, 3 3 3 ...
 *
 * How it works:
 *   Note: In pattern programs the OUTER loop controls the rows and the
 *   INNER loop controls what is printed in each row.
 *   1. Unlike the earlier number triangle, this prints the ROW number i
 *      again and again instead of the column number.
 *
 * Concept: Row number vs column number.
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
            printf("%d ", i);
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
 *   1
 *   2 2
 *   3 3 3
 *   4 4 4 4
 */
