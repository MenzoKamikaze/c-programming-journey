/*
 * 05. Multiply Two Numbers
 *
 * What it does: Reads two integers and prints their product.
 *
 * How it works:
 *   1. The * operator multiplies two numbers.
 *   2. Example: 6 x 7 = 42.
 *   3. The program calculates a * b and prints the answer.
 *
 * Concept: Multiplication and arithmetic operators.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    int a, b;

    printf("Enter two numbers: ");

    // Read two integers into a and b
    scanf("%d %d", &a, &b);

    printf("Product = %d\n", a * b);

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   Enter two numbers: 6 7
 *   Product = 42
 */
