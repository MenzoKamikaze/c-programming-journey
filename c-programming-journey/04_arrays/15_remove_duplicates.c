/*
 * 15. Remove Duplicate Elements
 *
 * What it does: Removes repeated values from an array.
 *
 * How it works:
 *   1. For each element, look through the rest of the array for equal
 *      values.
 *   2. When a duplicate is found, shift everything after it one place to
 *      the left and reduce n.
 *   3. j is NOT increased after a deletion because a new element has
 *      moved into that position and still needs checking.
 *
 * Concept: Shifting elements.
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
        for (int j = i + 1; j < n;)
        {
            if (a[i] == a[j])
            {
                for (int k = j; k < n - 1; k++)
                {
                    a[k] = a[k + 1];
                }

                n--;
            }
            else
            {
                j++;
            }
        }
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
 *   6
 *   1 2 2 3 1 4
 *   1 2 3 4
 */
