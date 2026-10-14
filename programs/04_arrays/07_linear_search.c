/*
 * 07. Linear Search
 *
 * What it does: Finds the position of a number in an array.
 *
 * How it works:
 *   1. Check elements one by one from left to right.
 *   2. When a[i] == key, save the index and break out of the loop.
 *   3. If nothing matched, position stays -1 and we print Not found.
 *   4. Index 2 means the THIRD element.
 *
 * Concept: Searching and break.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    int a[100], n, key, position = -1;

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

    scanf("%d", &key);

    // i goes 0, 1, 2 ... n-1 (indices start at 0)
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            position = i;
            break;
        }
    }

    if (position != -1)
    {
        printf("Found at index %d\n", position);
    }
    else
    {
        printf("Not found\n");
    }

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   5
 *   10 20 30 40 50
 *   30
 *   Found at index 2
 */
