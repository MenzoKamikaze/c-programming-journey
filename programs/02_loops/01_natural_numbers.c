/*
 * 01. Print Natural Numbers
 *
 * What it does: Prints 1 to n.
 *
 * How it works:
 *   1. A for loop has 3 parts: start; condition; update.
 *   2. int i = 1 starts the counter at 1.
 *   3. i <= n keeps looping while i is at most n.
 *   4. i++ adds 1 to i after every round.
 *   5. printf() prints the current value of i each round.
 *
 * Concept: for loop.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    // n will store the number typed by the user
    int n;

    printf("Enter n: ");

    // Read an integer into n (& = address of n)
    scanf("%d", &n);

    // i goes 1, 2, 3 ... n
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   Enter n: 5
 *   1 2 3 4 5
 */
