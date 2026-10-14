/*
 * 19. Rotate Array Right
 *
 * What it does: Rotates the array to the right k times.
 *
 * How it works:
 *   1. One right rotation: save the last element, shift all others right,
 *      put the saved one at the front.
 *   2. Repeat k times.
 *
 * Concept: Array rotation.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    int a[100], n, k;

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

    scanf("%d", &k);

    k = ((k % n) + n) % n;

    for (int r = 0; r < k; r++)
    {
        int last = a[n - 1];

        for (int i = n - 1; i > 0; i--)
        {
            a[i] = a[i - 1];
        }

        a[0] = last;
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
 *   5
 *   1 2 3 4 5
 *   2
 *   4 5 1 2 3
 */
