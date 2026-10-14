/*
 * 09. Count Digits
 *
 * What it does: Counts how many digits a number has.
 *
 * How it works:
 *   1. n /= 10 removes the last digit (12345 becomes 1234).
 *   2. Each round we add 1 to count.
 *   3. We stop when n becomes 0.
 *   4. do-while runs at least once, so the number 0 is correctly counted
 *      as 1 digit.
 *
 * Concept: do-while loop and integer division.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    // n will store the number typed by the user
    int n;
    int count = 0;

    // Read an integer into n (& = address of n)
    scanf("%d", &n);

    do
    {
        count++;
        n /= 10;
    } while (n != 0);

    printf("Digits = %d\n", count);

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   12345
 *   Digits = 5
 */
