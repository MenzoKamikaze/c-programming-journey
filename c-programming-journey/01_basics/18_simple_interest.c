/*
 * 18. Calculate Simple Interest
 *
 * What it does: Calculates simple interest from principal, rate and time.
 *
 * How it works:
 *   1. Formula: SI = (P x R x T) / 100
 *   2. P = principal amount, R = yearly rate in percent, T = time in
 *      years.
 *   3. Example: P = 1000, R = 5, T = 2, so SI = (1000 x 5 x 2) / 100 =
 *      100.
 *
 * Concept: Using a formula with input and calculation.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    double principal, rate, time, interest;

    printf("Enter principal, annual rate and time: ");
    scanf("%lf %lf %lf", &principal, &rate, &time);

    interest = (principal * rate * time) / 100.0;

    printf("Simple Interest = %.2f\n", interest);

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   Enter principal, annual rate and time: 1000 5 2
 *   Simple Interest = 100.00
 */
