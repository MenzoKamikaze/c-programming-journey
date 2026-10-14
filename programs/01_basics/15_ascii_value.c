/*
 * 15. Find ASCII Value of a Character
 *
 * What it does: Prints the ASCII code of a character.
 *
 * How it works:
 *   1. ASCII gives every letter, digit and symbol a number. For example
 *      'A' is 65.
 *   2. %c prints the character itself.
 *   3. %d prints the number behind the character.
 *
 * Concept: Character representation and type conversion.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("Character = %c\n", ch);
    printf("Character code = %d\n", (unsigned char)ch);

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   Enter a character: A
 *   Character = A
 *   Character code = 65
 */
