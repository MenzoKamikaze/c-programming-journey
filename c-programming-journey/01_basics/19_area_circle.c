/*
 * 19. Area of a Circle
 *
 * What it does: Calculates the area of a circle from its radius.
 *
 * How it works:
 *   1. Formula: A = pi x r x r
 *   2. const double PI means the value of PI can never be changed by the
 *      program.
 *   3. radius * radius is the square of the radius.
 *   4. A negative radius is impossible, so we print an error message for
 *      it.
 *
 * Concept: Constants, math expressions and input validation.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    double radius;
    const double PI = 3.141592653589793;

    printf("Enter radius: ");
    scanf("%lf", &radius);

    if (radius < 0)
    {
        printf("Radius cannot be negative.\n");
    }
    else
    {
        printf("Area = %.2f\n", PI * radius * radius);
    }

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   Enter radius: 5
 *   Area = 78.54
 */
