/*
 * 02. Sum of Array Elements
 *
 * What it does: Adds all elements of an array.
 *
 * How it works:
 *   1. Each element is added to sum while it is being read.
 *   2. This is the accumulator pattern.
 *
 * Concept: Traversal and accumulation.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    // a holds up to 100 integers, n = how many we use
    int a[100], n;
    long long sum = 0;

    // Read an integer into n (& = address of n)
    scanf("%d", &n);

    // Reject sizes outside 1 to 100
    if (n < 1 || n > 100)
    {
        // Stop with an error (invalid input)
        return 1;
    }

    // i goes 0, 1, 2 ... n-1 (indices start at 0)
    for (int i = 0; i < n; i++)
    {
        // Read the next element into position i
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("Sum = %lld\n", sum);

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   4
 *   1 2 3 4
 *   Sum = 10
 */
