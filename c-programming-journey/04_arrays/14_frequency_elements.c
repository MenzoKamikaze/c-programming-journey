/*
 * 14. Frequency of Each Element
 *
 * What it does: Counts how many times each value appears.
 *
 * How it works:
 *   1. For each element not yet counted, count its matches later in the
 *      array.
 *   2. visited[] marks duplicates already counted so we do not print them
 *      again.
 *
 * Concept: Counting duplicates with a marker array.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    // a holds up to 100 integers, n = how many we use
    int a[100], n;
    int visited[100] = {0};

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
        if (visited[i])
        {
            continue;
        }

        int count = 1;

        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                visited[j] = 1;
            }
        }

        printf("%d occurs %d time(s)\n", a[i], count);
    }

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   6
 *   1 2 2 3 1 2
 *   1 occurs 2 time(s)
 *   2 occurs 3 time(s)
 *   3 occurs 1 time(s)
 */
