/*
 * 10. Largest of Three Numbers
 *
 * What it does: Prints the biggest of three numbers.
 *
 * How it works:
 *   1. && is the logical AND operator: BOTH sides must be true.
 *   2. a >= b && a >= c means a is at least as big as b AND c, so a is
 *      the largest.
 *   3. If that fails, we check the same for b.
 *   4. If neither works, c must be the largest.
 *
 * Concept: Logical operators and multiple conditions.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    int a, b, c;

    printf("Enter three numbers: ");

    // Read three integers
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
    {
        printf("Largest = %d\n", a);
    }
    else if (b >= a && b >= c)
    {
        printf("Largest = %d\n", b);
    }
    else
    {
        printf("Largest = %d\n", c);
    }

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   Enter three numbers: 12 25 18
 *   Largest = 25
 */
