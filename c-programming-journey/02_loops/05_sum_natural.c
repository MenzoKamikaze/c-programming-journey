/*
 * 05. Sum of Natural Numbers
 *
 * What it does: Adds 1 + 2 + ... + n.
 *
 * How it works:
 *   1. sum = 0 is the starting value (an accumulator).
 *   2. sum += i means sum = sum + i. It adds the current number to the
 *      running total.
 *   3. long long can hold bigger numbers than a normal int.
 *   4. Example: 1 + 2 + 3 + 4 + 5 = 15.
 *
 * Concept: Accumulator pattern.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    // n will store the number typed by the user
    int n;
    long long sum = 0;

    // Read an integer into n (& = address of n)
    scanf("%d", &n);

    // i goes 1, 2, 3 ... n
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("Sum = %lld\n", sum);

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   5
 *   Sum = 15
 */
