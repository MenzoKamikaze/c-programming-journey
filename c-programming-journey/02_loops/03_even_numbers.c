/*
 * 03. Print Even Numbers
 *
 * What it does: Prints all even numbers up to n.
 *
 * How it works:
 *   1. Start the counter at 2.
 *   2. i += 2 adds 2 each round, so it only visits 2, 4, 6, 8 ...
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

    for (int i = 2; i <= n; i += 2)
    {
        printf("%d ", i);
    }

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   10
 *   2 4 6 8 10
 */
