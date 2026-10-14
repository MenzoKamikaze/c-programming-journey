/*
 * 15. Prime Numbers in a Range
 *
 * What it does: Prints all primes between two numbers.
 *
 * How it works:
 *   1. The outer loop visits every number from start to end.
 *   2. The inner loop checks whether that number has a divisor other than
 *      1 and itself.
 *   3. If not, we print it.
 *
 * Concept: Nested loops.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    int start, end;

    scanf("%d %d", &start, &end);

    for (int n = start; n <= end; n++)
    {
        int prime = (n >= 2);

        for (int i = 2; i <= n / i && prime; i++)
        {
            if (n % i == 0)
            {
                prime = 0;
            }
        }

        if (prime)
        {
            printf("%d ", n);
        }
    }

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   10 20
 *   11 13 17 19
 */
