/*
 * 11. Floyd's Triangle
 *
 * What it does: Prints consecutive numbers in a triangle.
 *
 * How it works:
 *   Note: In pattern programs the OUTER loop controls the rows and the
 *   INNER loop controls what is printed in each row.
 *   1. value keeps increasing across rows and never resets.
 *   2. value++ prints the current value, then adds 1.
 *
 * Concept: Counter that keeps growing.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    // n will store the number typed by the user
    int n;
    int value = 1;

    // Read an integer into n (& = address of n)
    scanf("%d", &n);

    // i goes 1, 2, 3 ... n
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", value++);
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
 *   2 3
 *   4 5 6
 *   7 8 9 10
 */
