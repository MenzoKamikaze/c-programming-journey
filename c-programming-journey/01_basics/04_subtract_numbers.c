/*
 * 04. Subtract Two Numbers
 *
 * What it does: Reads two integers and prints the first minus the second.
 *
 * How it works:
 *   1. Reads a and b the same way as the add program.
 *   2. a - b subtracts the second number from the first.
 *   3. Example: a = 20, b = 8, so 20 - 8 = 12.
 *   4. Order matters: 20 - 8 is NOT the same as 8 - 20.
 *
 * Concept: Subtraction and expression evaluation.
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

    printf("Difference = %d\n", a - b);

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   Enter two numbers: 20 8
 *   Difference = 12
 */
