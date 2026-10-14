/*
 * 08. Count Even and Odd Elements
 *
 * What it does: Counts how many elements are even and how many are odd.
 *
 * How it works:
 *   1. a[i] % 2 == 0 means the element is even.
 *   2. Increase the even counter or the odd counter accordingly.
 *
 * Concept: Counters and modulus.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    // a holds up to 100 integers, n = how many we use
    int a[100], n;
    int even = 0, odd = 0;

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

        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Even = %d\nOdd = %d\n", even, odd);

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   5
 *   1 2 3 4 5
 *   Even = 2
 *   Odd = 3
 */
