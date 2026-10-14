/*
 * 12. Palindrome Number
 *
 * What it does: Checks if a number reads the same forwards and backwards.
 *
 * How it works:
 *   1. Save the original number.
 *   2. Reverse the number (same idea as the previous program).
 *   3. If the reversed number equals the original, it is a palindrome.
 *      Example: 121.
 *
 * Concept: Reverse and compare.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    int n, original;
    long long reversed = 0;

    // Read an integer into n (& = address of n)
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Not a palindrome\n");

        // Program finished successfully
        return 0;
    }

    original = n;

    do
    {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    } while (n != 0);

    if (original == reversed)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not a palindrome\n");
    }

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   121
 *   Palindrome
 */
