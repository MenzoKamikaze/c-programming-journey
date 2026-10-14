/*
 * 16. Insert an Element
 *
 * What it does: Inserts a value at a chosen position.
 *
 * How it works:
 *   1. Shift elements to the right, starting from the END, to make room.
 *   2. Put the new value at the chosen index.
 *   3. Increase n by 1.
 *   4. Position is zero-based: position 2 means the third place.
 *
 * Concept: Insertion in an array.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    int a[101], n, position, value;

    // Read an integer into n (& = address of n)
    scanf("%d", &n);

    if (n < 1 || n >= 101)
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

    scanf("%d %d", &position, &value);

    if (position < 0 || position > n)
    {
        // Stop with an error (invalid input)
        return 1;
    }

    for (int i = n; i > position; i--)
    {
        a[i] = a[i - 1];
    }

    a[position] = value;
    n++;

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
 *   4
 *   10 20 30 40
 *   2 99
 *   10 20 99 30 40
 */
