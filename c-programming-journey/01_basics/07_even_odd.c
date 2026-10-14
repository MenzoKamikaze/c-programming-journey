/*
 * 07. Check Even or Odd
 *
 * What it does: Tells whether a number is even or odd.
 *
 * How it works:
 *   1. The % operator gives the REMAINDER after division: 8 % 2 = 0, 7 %
 *      2 = 1, 10 % 2 = 0.
 *   2. A number is even when dividing it by 2 leaves remainder 0.
 *   3. if (n % 2 == 0) checks exactly that. If true the if block runs,
 *      otherwise the else block runs.
 *
 * Concept: Modulus operator and if-else.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    // n will store the number typed by the user
    int n;

    printf("Enter an integer: ");

    // Read an integer into n (& = address of n)
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   Enter an integer: 7
 *   Odd
 */
