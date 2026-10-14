/*
 * 16. Swap Two Numbers Using a Temporary Variable
 *
 * What it does: Swaps the values of a and b using a third variable.
 *
 * How it works:
 *   1. Suppose a = 10 and b = 20.
 *   2. temp = a;   -> temp = 10 (we save a's value)
 *   3. a = b;      -> a = 20
 *   4. b = temp;   -> b = 10 (we put the saved value into b)
 *   5. The temporary variable keeps a's original value safe while a is
 *      overwritten.
 *
 * Concept: Assignment and variable manipulation.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    int a, b, temp;

    printf("Enter two numbers: ");

    // Read two integers into a and b
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("a = %d, b = %d\n", a, b);

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   Enter two numbers: 10 20
 *   a = 20, b = 10
 */
