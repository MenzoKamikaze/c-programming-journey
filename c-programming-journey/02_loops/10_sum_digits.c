/*
 * 10. Sum of Digits
 *
 * What it does: Adds all digits of a number.
 *
 * How it works:
 *   1. n % 10 gives the LAST digit (1234 % 10 = 4).
 *   2. sum += n % 10 adds that digit to the total.
 *   3. n /= 10 removes the last digit.
 *   4. Example: 1234 gives 4 + 3 + 2 + 1 = 10.
 *
 * Concept: Extracting digits with % and /.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    // n will store the number typed by the user
    int n;
    int sum = 0;

    // Read an integer into n (& = address of n)
    scanf("%d", &n);

    if (n < 0)
    {
        n = -n;
    }

    do
    {
        sum += n % 10;
        n /= 10;
    } while (n != 0);

    printf("Sum = %d\n", sum);

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   1234
 *   Sum = 10
 */
