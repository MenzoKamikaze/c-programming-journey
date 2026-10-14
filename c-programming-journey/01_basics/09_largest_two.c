/*
 * 09. Largest of Two Numbers
 *
 * What it does: Prints the bigger of two numbers.
 *
 * How it works:
 *   1. a > b checks whether the first number is greater.
 *   2. If true we print a, otherwise we print b.
 *   3. If both are equal it prints b, which has the same value, so the
 *      answer is still correct.
 *
 * Concept: Comparison and conditional selection.
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

    if (a > b)
    {
        printf("Largest = %d\n", a);
    }
    else
    {
        printf("Largest = %d\n", b);
    }

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   Enter two numbers: 15 9
 *   Largest = 15
 */
