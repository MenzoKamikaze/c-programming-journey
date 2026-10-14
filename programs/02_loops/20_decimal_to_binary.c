/*
 * 20. Decimal to Binary
 *
 * What it does: Converts a decimal number to binary.
 *
 * How it works:
 *   1. Divide the number by 2 and store the remainder.
 *   2. Repeat with the quotient until it becomes 0.
 *   3. Print the remainders in REVERSE order.
 *   4. Example: 10 -> remainders 0, 1, 0, 1 -> reversed gives 1010.
 *
 * Concept: Number systems, arrays and loops.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    unsigned int n;
    int binary[32];
    int index = 0;

    scanf("%u", &n);

    do
    {
        binary[index] = n % 2;
        n /= 2;
        index++;
    } while (n != 0);

    for (int i = index - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }

    // Move to the next line
    printf("\n");

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   10
 *   1010
 */
