/*
 * 03. Average of Array Elements
 *
 * What it does: Finds the average of an array.
 *
 * How it works:
 *   1. Average = sum of all elements / number of elements.
 *   2. sum is a double so the answer keeps its decimal part.
 *
 * Concept: Averages and type choice.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    // a holds up to 100 integers, n = how many we use
    int a[100], n;
    double sum = 0;

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
        sum += a[i];
    }

    printf("Average = %.2f\n", sum / n);

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   4
 *   10 20 30 40
 *   Average = 25.00
 */
