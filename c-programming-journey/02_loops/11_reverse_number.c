/*
 * 11. Reverse a Number
 *
 * What it does: Reverses the digits of a number.
 *
 * How it works:
 *   1. Take the last digit with n % 10.
 *   2. reversed = reversed * 10 + lastDigit appends it to the new number.
 *   3. Remove the last digit with n /= 10.
 *   4. Trace for 123: reversed goes 0, then 3, then 32, then 321.
 *
 * Concept: Building a number digit by digit.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    // n will store the number typed by the user
    int n;
    long long reversed = 0;

    // Read an integer into n (& = address of n)
    scanf("%d", &n);

    while (n != 0)
    {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    printf("Reversed = %lld\n", reversed);

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   1234
 *   Reversed = 4321
 */
