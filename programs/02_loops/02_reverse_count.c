/*
 * 02. Print Numbers in Reverse
 *
 * What it does: Prints n down to 1.
 *
 * How it works:
 *   1. The counter starts at n.
 *   2. i-- subtracts 1 each round.
 *   3. The loop stops when i becomes less than 1.
 *
 * Concept: Decrementing loop.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    // n will store the number typed by the user
    int n;

    printf("Enter n: ");

    // Read an integer into n (& = address of n)
    scanf("%d", &n);

    // i counts down from n to 1
    for (int i = n; i >= 1; i--)
    {
        printf("%d ", i);
    }

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   Enter n: 5
 *   5 4 3 2 1
 */
