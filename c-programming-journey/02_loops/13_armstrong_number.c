/*
 * 13. Armstrong Number
 *
 * What it does: Checks if a number equals the sum of its digits each
 *   raised to the number of digits.
 *
 * How it works:
 *   1. Example: 153 has 3 digits, so 1^3 + 5^3 + 3^3 = 1 + 125 + 27 =
 *      153.
 *   2. First loop counts the digits.
 *   3. Second loop takes each digit and raises it to that power using an
 *      inner loop.
 *   4. If the total equals the original number, it is an Armstrong
 *      number.
 *
 * Concept: Nested loops and digit processing.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    int n, original, temp;
    int digits = 0;
    long long sum = 0;

    // Read an integer into n (& = address of n)
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Not an Armstrong number\n");

        // Program finished successfully
        return 0;
    }

    original = n;
    temp = n;

    do
    {
        digits++;
        temp /= 10;
    } while (temp != 0);

    temp = n;

    do
    {
        int digit = temp % 10;
        long long power = 1;

        for (int i = 0; i < digits; i++)
        {
            power *= digit;
        }

        sum += power;
        temp /= 10;
    } while (temp != 0);

    if (sum == original)
    {
        printf("Armstrong number\n");
    }
    else
    {
        printf("Not an Armstrong number\n");
    }

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   153
 *   Armstrong number
 */
