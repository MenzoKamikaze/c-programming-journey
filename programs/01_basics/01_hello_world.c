/*
 * 01. Hello World
 *
 * What it does: Prints the message Hello, World! on the screen.
 *
 * How it works:
 *   1. #include <stdio.h> brings in the standard input/output library. It
 *      gives us printf().
 *   2. int main(void) is the main function. Every C program starts
 *      running from here.
 *   3. { } mark the start and end of the function body.
 *   4. printf() prints text on the screen.
 *   5. \n moves the cursor to the next line.
 *   6. return 0; tells the system the program finished successfully.
 *
 * Concept: Basic program structure and output.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    printf("Hello, World!\n");

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   Hello, World!
 */
