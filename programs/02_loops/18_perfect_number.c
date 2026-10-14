/*
 * 18. Perfect Number
 *
 * What it does: Checks if a number equals the sum of its proper divisors.
 *
 * How it works:
 *   1. Proper divisors are the divisors of a number except the number
 *      itself.
 *   2. For 6 they are 1, 2, 3, and 1 + 2 + 3 = 6, so 6 is perfect.
 *   3. We only check up to n / 2 because no proper divisor can be bigger
 *      than that.
 *
 * Concept: Divisors and accumulation.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    // n will store the number typed by the user
    int n;
    int sum = 0;

    // Read an integer into n (& = address of n)
    scanf("%d", &n);

    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    if (n > 1 && sum == n)
    {
        printf("Perfect number\n");
    }
    else
    {
        printf("Not a perfect number\n");
    }

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   6
 *   Perfect number
 */
