/*
 * 11. Second Largest Element
 *
 * What it does: Finds the second biggest different number.
 *
 * How it works:
 *   1. First loop finds the largest value.
 *   2. Second loop finds the biggest value that is strictly smaller than
 *      the largest.
 *   3. Duplicates count as one value: in 10 30 20 30 15 the second
 *      largest is 20.
 *
 * Concept: Two-pass searching.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    // a holds up to 100 integers, n = how many we use
    int a[100], n;
    int largest, second = 0;
    int hasSecond = 0;

    // Read an integer into n (& = address of n)
    scanf("%d", &n);

    if (n < 2 || n > 100)
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

    largest = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }

    // i goes 0, 1, 2 ... n-1 (indices start at 0)
    for (int i = 0; i < n; i++)
    {
        if (a[i] < largest && (!hasSecond || a[i] > second))
        {
            second = a[i];
            hasSecond = 1;
        }
    }

    if (hasSecond)
    {
        printf("Second largest = %d\n", second);
    }
    else
    {
        printf("No second-largest distinct element\n");
    }

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   5
 *   10 30 20 30 15
 *   Second largest = 20
 */
