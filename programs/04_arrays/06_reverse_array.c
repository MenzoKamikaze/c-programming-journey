/*
 * 06. Reverse an Array
 *
 * What it does: Prints the array from last to first.
 *
 * How it works:
 *   1. The last valid index is n - 1 (because indices start at 0).
 *   2. The loop goes from n - 1 down to 0.
 *
 * Concept: Reverse traversal.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    // a holds up to 100 integers, n = how many we use
    int a[100], n;

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
    }

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   5
 *   1 2 3 4 5
 *   5 4 3 2 1
 */
