/*
 * 12. Sort in Ascending Order
 *
 * What it does: Sorts numbers from smallest to largest (bubble sort).
 *
 * How it works:
 *   1. Compare each pair of neighbours a[j] and a[j+1].
 *   2. If they are in the wrong order, swap them using a temp variable.
 *   3. After each full pass, the biggest remaining number reaches its
 *      correct place at the end.
 *
 * Concept: Bubble sort.
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

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
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
 *   5
 *   5 2 8 1 3
 *   1 2 3 5 8
 */
