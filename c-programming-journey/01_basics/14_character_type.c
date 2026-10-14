/*
 * 14. Identify Character Type
 *
 * What it does: Tells whether a character is a letter, a digit or
 *   something else.
 *
 * How it works:
 *   1. ctype.h has ready-made functions to classify characters.
 *   2. isalpha() is true for letters. isdigit() is true for 0 to 9.
 *   3. Anything else (like @ or a space) goes to the final else.
 *   4. Examples: A is an Alphabet, 7 is a Digit, @ is a Special
 *      character.
 *
 * Concept: Standard character-classification functions.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Gives us character functions like tolower() and isalpha()
#include <ctype.h>

// Program execution starts here
int main(void)
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isalpha((unsigned char)ch))
    {
        printf("Alphabet\n");
    }
    else if (isdigit((unsigned char)ch))
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special character or whitespace\n");
    }

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   Enter a character: A
 *   Alphabet
 */
