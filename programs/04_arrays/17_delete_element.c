/*
 * 17. Delete an Element by Position
 *
 * What it does: Removes the element at a chosen position.
 *
 * How it works:
 *   1. Check the position is valid.
 *   2. Shift every later element one place to the left.
 *   3. Decrease n by 1.
 *
 * Concept: Deletion in an array.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    int a[100], n, position;

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

    scanf("%d", &position);

    if (position < 0 || position >= n)
    {
        // Stop with an error (invalid input)
        return 1;
    }

    for (int i = position; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    n--;

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
 *   10 20 30 40 50
 *   2
 *   10 20 40 50
 */
