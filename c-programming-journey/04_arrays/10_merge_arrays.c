/*
 * 10. Merge Two Arrays
 *
 * What it does: Joins two arrays into one.
 *
 * How it works:
 *   1. Copy the first array to the start of c.
 *   2. Copy the second array into c starting at index n, right after the
 *      first array.
 *   3. This joins them (concatenates). It does NOT sort them.
 *
 * Concept: Combining arrays with index offsets.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    int a[100], b[100], c[200];
    int n, m;

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

    scanf("%d", &m);

    if (m < 1 || m > 100)
    {
        // Stop with an error (invalid input)
        return 1;
    }

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    // i goes 0, 1, 2 ... n-1 (indices start at 0)
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i];
    }

    for (int i = 0; i < m; i++)
    {
        c[n + i] = b[i];
    }

    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", c[i]);
    }

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   3
 *   1 2 3
 *   2
 *   4 5
 *   1 2 3 4 5
 */
