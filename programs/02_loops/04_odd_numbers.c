/*
 * 04. Print Odd Numbers
 *
 * What it does: Prints all odd numbers up to n.
 *
 * How it works:
 *   1. Start the counter at 1.
 *   2. i += 2 adds 2 each round, so it visits 1, 3, 5, 7 ...
 *
 * Concept: Loop with a step of 2.
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

    for (int i = 1; i <= n; i += 2)
    {
        printf("%d ", i);
    }

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   10
 *   1 3 5 7 9
 */
