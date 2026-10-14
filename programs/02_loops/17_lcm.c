/*
 * 17. LCM (Least Common Multiple)
 *
 * What it does: Finds the smallest number divisible by both numbers.
 *
 * How it works:
 *   1. Formula: LCM = (a x b) / GCD(a, b).
 *   2. First we find the GCD (same as the previous program).
 *   3. We divide first ((a / gcd) * b) to reduce the risk of overflow.
 *   4. Example: LCM of 12 and 18 is 36.
 *
 * Concept: Using GCD to find LCM.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    long long a, b;
    long long x, y;

    scanf("%lld %lld", &a, &b);

    if (a == 0 || b == 0)
    {
        printf("LCM = 0\n");

        // Program finished successfully
        return 0;
    }

    if (a < 0)
    {
        a = -a;
    }
    if (b < 0)
    {
        b = -b;
    }

    x = a;
    y = b;

    while (y != 0)
    {
        long long remainder = x % y;
        x = y;
        y = remainder;
    }

    printf("LCM = %lld\n", (a / x) * b);

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   12 18
 *   LCM = 36
 */
