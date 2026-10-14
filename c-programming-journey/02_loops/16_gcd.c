/*
 * 16. GCD (Greatest Common Divisor)
 *
 * What it does: Finds the largest number that divides both numbers.
 *
 * How it works:
 *   1. Uses Euclid's algorithm: GCD(a, b) = GCD(b, a % b).
 *   2. Repeat until the remainder becomes 0. The remaining number is the
 *      GCD.
 *   3. Trace for 12 and 18: (12,18) -> (18,12) -> (12,6) -> (6,0), so GCD
 *      = 6.
 *
 * Concept: Euclid's algorithm.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    int a, b;

    // Read two integers into a and b
    scanf("%d %d", &a, &b);

    if (a < 0)
    {
        a = -a;
    }
    if (b < 0)
    {
        b = -b;
    }

    while (b != 0)
    {
        int remainder = a % b;
        a = b;
        b = remainder;
    }

    printf("GCD = %d\n", a);

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   12 18
 *   GCD = 6
 */
