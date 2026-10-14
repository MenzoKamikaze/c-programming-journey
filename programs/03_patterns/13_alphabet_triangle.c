/*
 * 13. Alphabet Triangle
 *
 * What it does: Prints A, A B, A B C ...
 *
 * How it works:
 *   Note: In pattern programs the OUTER loop controls the rows and the
 *   INNER loop controls what is printed in each row.
 *   1. Characters are stored as numbers, so 'A' + j gives the next
 *      letter: 'A', 'B', 'C' ...
 *   2. %c prints a number as a character.
 *
 * Concept: Characters and ASCII in loops.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    // n will store the number typed by the user
    int n;

    // Read an integer into n (& = address of n)
    scanf("%d", &n);

    if (n < 1 || n > 26)
    {
        // Stop with an error (invalid input)
        return 1;
    }

    // i goes 1, 2, 3 ... n
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c ", 'A' + j);
        }

        // Move to the next line
        printf("\n");
    }

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   4
 *   A
 *   A B
 *   A B C
 *   A B C D
 */
