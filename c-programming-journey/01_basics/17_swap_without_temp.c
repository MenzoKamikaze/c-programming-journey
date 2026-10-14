/*
 * 17. Swap Two Numbers Without a Temporary Variable
 *
 * What it does: Swaps a and b using only addition and subtraction.
 *
 * How it works:
 *   1. Suppose a = 10 and b = 20.
 *   2. a = a + b;  -> a = 30
 *   3. b = a - b;  -> b = 10
 *   4. a = a - b;  -> a = 20
 *   5. Limitation: if a + b is too big for an int, it overflows
 *      (undefined behavior). The temp-variable method is safer.
 *
 * Concept: Arithmetic assignment and tracing a program step by step.
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

    a = a + b;
    b = a - b;
    a = a - b;

    printf("a = %d, b = %d\n", a, b);

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   Enter two numbers: 10 20
 *   a = 20, b = 10
 */
