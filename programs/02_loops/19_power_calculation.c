/*
 * 19. Calculate Power
 *
 * What it does: Calculates base raised to an exponent without using
 *   pow().
 *
 * How it works:
 *   1. Start with result = 1.
 *   2. Multiply result by base, exponent times.
 *   3. For 2^3: 1, then 2, then 4, then 8.
 *   4. If the exponent is 0 the loop does not run, so the answer stays 1.
 *
 * Concept: Repeated multiplication.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    double base, result = 1;
    int exponent;

    scanf("%lf %d", &base, &exponent);

    if (exponent < 0)
    {
        printf("Use a non-negative exponent.\n");

        // Stop with an error (invalid input)
        return 1;
    }

    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }

    printf("Result = %.2f\n", result);

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   2 3
 *   Result = 8.00
 */
