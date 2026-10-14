/*
 * 14. Prime Number
 *
 * What it does: Checks if a number is prime.
 *
 * How it works:
 *   1. A prime is greater than 1 and has only two divisors: 1 and itself.
 *   2. We try dividing by 2, 3, 4 ... If anything divides evenly, it is
 *      not prime.
 *   3. We only need to test up to the square root of n.
 *   4. i <= n / i is the same idea as i * i <= n but avoids overflow.
 *   5. prime is a flag: 1 means still prime, 0 means we found a divisor.
 *
 * Concept: Flag variable and optimized loop limit.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    // n will store the number typed by the user
    int n;
    int prime = 1;

    // Read an integer into n (& = address of n)
    scanf("%d", &n);

    if (n < 2)
    {
        prime = 0;
    }

    for (int i = 2; i <= n / i && prime; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
        }
    }

    if (prime)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not prime\n");
    }

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   17
 *   Prime
 */
