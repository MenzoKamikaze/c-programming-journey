/*
 * 03. Add Two Numbers
 *
 * What it does: Reads two integers from the user and prints their sum.
 *
 * How it works:
 *   1. int a, b; creates two integer variables.
 *   2. scanf("%d %d", &a, &b); reads two integers typed by the user.
 *   3. The & gives scanf the ADDRESS of the variable so it can store the
 *      input there.
 *   4. a + b adds the two values.
 *   5. printf() shows the result.
 *
 * Concept: Input, variables and arithmetic operators.
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

    printf("Sum = %d\n", a + b);

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   Enter two numbers: 10 20
 *   Sum = 30
 */
