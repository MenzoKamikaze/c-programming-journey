/*
 * 13. Check Vowel or Consonant
 *
 * What it does: Tells whether a letter is a vowel or a consonant.
 *
 * How it works:
 *   1. tolower() (from ctype.h) converts the letter to lowercase, so A
 *      and a are treated the same.
 *   2. First we check the character is a letter between 'a' and 'z'.
 *   3. Then a nested if checks if it is a, e, i, o or u. If not, it is a
 *      consonant.
 *   4. The space in scanf(" %c", &ch) skips leading spaces/newlines
 *      before reading the character.
 *
 * Concept: Characters, nested conditions and the ctype.h library.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Gives us character functions like tolower() and isalpha()
#include <ctype.h>

// Program execution starts here
int main(void)
{
    char ch;

    printf("Enter an alphabet: ");
    scanf(" %c", &ch);

    ch = (char)tolower((unsigned char)ch);

    if (ch >= 'a' && ch <= 'z')
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            printf("Vowel\n");
        }
        else
        {
            printf("Consonant\n");
        }
    }
    else
    {
        printf("Not an alphabet\n");
    }

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   Enter an alphabet: E
 *   Vowel
 */
