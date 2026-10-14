/*
 * 07. Factorial
 *
 * What it does: Calculates n! = 1 x 2 x 3 x ... x n.
 *
 * How it works:
 *   1. Example: 5! = 1 x 2 x 3 x 4 x 5 = 120.
 *   2. fact starts at 1 because multiplying by 1 changes nothing.
 *   3. fact *= i means fact = fact * i.
 *   4. We allow only 0 to 20 because 21! is too big for unsigned long
 *      long.
 *
 * Concept: Product accumulator and overflow limits.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    // n will store the number typed by the user
    int n;
    unsigned long long fact = 1;

    // Read an integer into n (& = address of n)
    scanf("%d", &n);

    if (n < 0 || n > 20)
    {
        printf("Enter a number from 0 to 20.\n");

        // Stop with an error (invalid input)
        return 1;
    }

    // i goes 1, 2, 3 ... n
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    printf("Factorial = %llu\n", fact);

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   5
 *   Factorial = 120
 */
