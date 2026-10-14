/*
 * 06. Divide Two Numbers
 *
 * What it does: Divides two numbers and refuses to divide by zero.
 *
 * How it works:
 *   1. double stores decimal numbers (more precise than float).
 *   2. %lf is used with scanf() to read a double.
 *   3. if (b != 0) checks the divisor is not zero BEFORE dividing.
 *   4. If b is zero we print an error message instead of dividing.
 *   5. Why not int? With ints, 10 / 4 gives 2 because the decimal part is
 *      thrown away. With double, 10 / 4 gives 2.50.
 *
 * Concept: Floating-point arithmetic and conditional statements.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    double a, b;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    if (b != 0)
    {
        printf("Quotient = %.2f\n", a / b);
    }
    else
    {
        printf("Division by zero is not allowed.\n");
    }

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   Enter two numbers: 10 4
 *   Quotient = 2.50
 */
