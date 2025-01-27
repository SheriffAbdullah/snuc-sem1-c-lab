/* Simple calculator using switch...case statement & go-to statement.
Infinitely ask for next operation until user wishes to exit */

#include <stdio.h>

int main() {
    double a, b;
    char symbol;

    while (1) {
        input:
        printf("Enter the operation (+, -, *, /) or 'q' to quit: ");
        scanf("%s", &symbol);
        if (symbol == 'q')
        {
            goto quit;
        }
        printf("Enter operand (a): ");
        scanf("%lf", &a);
        printf("Enter operand (b): ");
        scanf("%lf", &b);
        {
            switch (symbol)
            {
                case '+':
                    printf("%lf + %lf = %lf \n", a, b, a + b);    // Error with 'a' & 'b' - integer type
                    break;
                case '-':
                    printf("%lf - %lf = %lf \n", a, b, a - b);
                    break;
                case '*':
                    printf("%lf * %lf = %lf \n", a, b, a * b);
                    break;
                case '/':
                    printf("%lf / %lf = %f \n", a, b, a / b);
                    break;
                default:
                    printf("Invalid symbol. \n");
                    break;
            }
        goto input;
        }
    }

    quit:
        printf("Terminated. \n");
    return 0;
}



