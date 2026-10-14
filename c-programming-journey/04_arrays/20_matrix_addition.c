/*
 * 20. Matrix Addition
 *
 * What it does: Adds two matrices (2D arrays).
 *
 * How it works:
 *   1. A 2D array has rows and columns: a[row][col].
 *   2. Two matrices can be added only if they have the same size.
 *   3. Nested loops read both matrices and set c[i][j] = a[i][j] +
 *      b[i][j].
 *
 * Concept: 2D arrays.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    int a[10][10], b[10][10], c[10][10];
    int rows, cols;

    scanf("%d %d", &rows, &cols);

    if (rows < 1 || rows > 10 || cols < 1 || cols > 10)
    {
        // Stop with an error (invalid input)
        return 1;
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", c[i][j]);
        }

        // Move to the next line
        printf("\n");
    }

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   2 2
 *   1 2
 *   3 4
 *   5 6
 *   7 8
 *   6 8
 *   10 12
 */
