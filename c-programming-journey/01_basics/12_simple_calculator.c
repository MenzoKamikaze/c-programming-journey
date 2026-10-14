/*
 * 12. Simple Calculator
 *
 * What it does: Reads a number, an operator (+ - * /) and another number,
 *   then calculates.
 *
 * How it works:
 *   1. Input like 10 + 5 is stored as a = 10, op = '+', b = 5.
 *   2. switch (op) compares op against each case.
 *   3. case '+' adds, case '-' subtracts, case '*' multiplies, case '/'
 *      divides (after checking b is not 0).
 *   4. break leaves the switch so the program does not fall into the next
 *      case.
 *   5. default runs when the operator is not one of the supported ones.
 *
 * Concept: switch, case, break and arithmetic operations.
 */

// Gives us printf() and scanf()
#include <stdio.h>

// Program execution starts here
int main(void)
{
    double a, b;
    char op;

    printf("Enter an expression (e.g. 10 + 5): ");
    scanf("%lf %c %lf", &a, &op, &b);

    switch (op)
    {
        case '+':
            printf("Result = %.2f\n", a + b);
            break;

        case '-':
            printf("Result = %.2f\n", a - b);
            break;

        case '*':
            printf("Result = %.2f\n", a * b);
            break;

        case '/':
            if (b != 0)
            {
                printf("Result = %.2f\n", a / b);
            }
            else
            {
                printf("Cannot divide by zero.\n");
            }
            break;

        default:
            printf("Invalid operator.\n");
    }

    // Program finished successfully
    return 0;
}

/*
 * Output:
 *   Enter an expression (e.g. 10 + 5): 10 + 5
 *   Result = 15.00
 */
