/*
 * 02. Variables and Data Types
 *
 * What it does: Stores an int, a float and a char in variables and prints
 *   them.
 *
 * How it works:
 *   1. A variable is a named box in memory that stores a value.
 *   2. int age = 18; stores a whole number.
 *   3. float marks = 85.5f; stores a decimal number (the f marks it as a
 *      float).
 *   4. char grade = 'A'; stores ONE character, written in single quotes.
 *   5. %d prints an int, %.2f prints a decimal with 2 digits after the
 *      point, %c prints a character.
 *
 * Concept: Variables, data types and format specifiers.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    int age = 18;
    float marks = 85.5f;
    char grade = 'A';

    printf("Age = %d\n", age);
    printf("Marks = %.2f\n", marks);
    printf("Grade = %c\n", grade);

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   Age = 18
 *   Marks = 85.50
 *   Grade = A
 */
