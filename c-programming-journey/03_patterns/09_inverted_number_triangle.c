/*
 * 09. Inverted Number Triangle
 *
 * What it does: Prints 1 2 3 4, then 1 2 3 ...
 *
 * How it works:
 *   Note: In pattern programs the OUTER loop controls the rows and the
 *   INNER loop controls what is printed in each row.
 *   1. The first row prints 1 to n. Each next row prints one fewer
 *      number.
 *
 * Concept: Nested loops with numbers.
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
            printf("%d ", j);
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
 *   1 2 3 4
 *   1 2 3
 *   1 2
 *   1
 */
