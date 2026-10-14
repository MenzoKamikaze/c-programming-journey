/*
 * 06. Multiplication Table
 *
 * What it does: Prints the table of a number from 1 to 10.
 *
 * How it works:
 *   1. The loop runs i = 1 to 10.
 *   2. Each round prints n x i = n * i.
 *
 * Concept: Loop with a fixed range.
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

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   5
 *   5 x 1 = 5
 *   5 x 2 = 10
 *   5 x 3 = 15
 *   5 x 4 = 20
 *   5 x 5 = 25
 *   5 x 6 = 30
 *   5 x 7 = 35
 *   5 x 8 = 40
 *   5 x 9 = 45
 *   5 x 10 = 50
 */
