/*
 * 08. Check Positive, Negative or Zero
 *
 * What it does: Tells whether a number is positive, negative or zero.
 *
 * How it works:
 *   1. n > 0 means positive.
 *   2. n < 0 means negative.
 *   3. If neither is true, the number must be zero (the final else).
 *   4. else if lets us test another condition when the first one is
 *      false.
 *
 * Concept: Comparison operators and else if.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    // n will store the number typed by the user
    int n;

    printf("Enter an integer: ");

    // Read an integer into n (& = address of n)
    scanf("%d", &n);

    if (n > 0)
    {
        printf("Positive\n");
    }
    else if (n < 0)
    {
        printf("Negative\n");
    }
    else
    {
        printf("Zero\n");
    }

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   Enter an integer: -5
 *   Negative
 */
