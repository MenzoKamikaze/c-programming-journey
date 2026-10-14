/*
 * 01. Read and Display an Array
 *
 * What it does: Reads n numbers into an array and prints them.
 *
 * How it works:
 *   Note: An array stores many values of the same type. Indices start at
 *   0, so an array of 5 has indices 0, 1, 2, 3, 4.
 *   1. First loop reads values into a[0], a[1], ... a[n-1].
 *   2. Second loop goes through the same positions and prints them.
 *
 * Concept: Array input, output and traversal.
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

    // i goes 0, 1, 2 ... n-1 (indices start at 0)
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   3
 *   10 20 30
 *   10 20 30
 */
