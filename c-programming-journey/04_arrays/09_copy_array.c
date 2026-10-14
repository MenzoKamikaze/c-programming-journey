/*
 * 09. Copy an Array
 *
 * What it does: Copies one array into another.
 *
 * How it works:
 *   1. Read the original array a.
 *   2. b[i] = a[i] copies each element to the same position in b.
 *   3. Print b to prove the copy worked.
 *
 * Concept: Array assignment element by element.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    int a[100], b[100], n;

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
        b[i] = a[i];
    }

    // i goes 0, 1, 2 ... n-1 (indices start at 0)
    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   3
 *   7 8 9
 *   7 8 9
 */
