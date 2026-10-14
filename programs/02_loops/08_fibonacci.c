/*
 * 08. Fibonacci Series
 *
 * What it does: Prints the first n Fibonacci numbers.
 *
 * How it works:
 *   1. Each number is the sum of the two before it: 0, 1, 1, 2, 3, 5, 8
 *      ...
 *   2. a = 0 and b = 1 are the first two numbers.
 *   3. Print a, then calculate next = a + b.
 *   4. Shift forward: a = b, b = next.
 *   5. Limit 93 because bigger terms do not fit in unsigned long long.
 *
 * Concept: Loops and variable shifting.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    // n will store the number typed by the user
    int n;
    unsigned long long a = 0, b = 1;

    // Read an integer into n (& = address of n)
    scanf("%d", &n);

    if (n < 1 || n > 93)
    {
        printf("Enter a number from 1 to 93.\n");

        // Stop with an error (invalid input)
        return 1;
    }

    // i goes 1, 2, 3 ... n
    for (int i = 1; i <= n; i++)
    {
        printf("%llu ", a);

        if (i < n)
        {
            unsigned long long next = a + b;
            a = b;
            b = next;
        }
    }

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   7
 *   0 1 1 2 3 5 8
 */
