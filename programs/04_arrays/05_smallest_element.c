/*
 * 05. Find Smallest Element
 *
 * What it does: Finds the smallest number in an array.
 *
 * How it works:
 *   1. Same as finding the largest, but the comparison uses < instead of
 *      >.
 *
 * Concept: Finding a minimum.
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

    int smallest = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] < smallest)
        {
            smallest = a[i];
        }
    }

    printf("Smallest = %d\n", smallest);

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   5
 *   4 9 2 15 6
 *   Smallest = 2
 */
