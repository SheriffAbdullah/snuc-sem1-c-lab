#include <stdio.h>
#include <stdlib.h>

// Function declarations
void add(double, double);
void subtract(double, double);
void multiply(double, double);
void divide(double, double);

int main()
{
    printf("*** Operations Menu *** \n");
    printf("1. Addition \n");
    printf("2. Subtraction \n");
    printf("3. Multiplication \n");
    printf("4. Division \n");
    printf("0. Exit \n");

    int operation = 1;
    double operand1, operand2;
    char symbol;

    while (operation != 0)
    {
        printf("\nEnter operation: ");
        scanf("%d", &operation);

        if (operation == 0)
        {
            printf("Program ended. \n");
            exit(0);    // exit(1) = Exit failure -> Abnormal termination, exit(0) = Exit success -> Successful termination (requires <stdlib.h>)
        }

        printf("Enter operand 1: ");
        scanf("%lf", &operand1);
        printf("Enter operand 2: ");
        scanf("%lf", &operand2);

        if (operation == 1)
        {
            add(operand1, operand2);
        }
        else if (operation == 2)
        {
            subtract(operand1, operand2);
        }
        else if (operation == 3)
        {
            multiply(operand1, operand2);
        }
        else if (operation == 4)
        {
            divide(operand1, operand2);
        }
        else
        {
            printf("Invalid input. Please try again. \n");
        }
    }

    printf("Program ended. \n");

    return 0;
}

// Function definitions
void add(double num1, double num2)
{
    printf("%lf + %lf = %lf \n", num1, num2, num1 + num2);
}

void subtract(double num1, double num2)
{
    printf("%lf - %lf = %lf \n", num1, num2, num1 - num2);
}

void multiply(double num1, double num2)
{
    printf("%lf * %lf = %lf \n", num1, num2, num1 * num2);
}

void divide(double num1, double num2)
{
    printf("%lf / %lf = %lf \n", num1, num2, num1 / num2);
}

// Alternate code
/*
#include <stdio.h>

// Function declarations
void add(double, double);
void subtract(double, double);
void multiply(double, double);
void divide(double, double);

int main()
{
    printf("*** Operations Menu *** \n");
    printf("Addition         - '+' \n");
    printf("Subtraction    - '-' \n");
    printf("Multiplication - '*' \n");
    printf("Division         - '/' \n"); 
    printf("[Format - X <operator> Y (Eg. X + Y)] \n");

    char operation = ' ';
    char endProgram;
    double operand1, operand2;

    while (operation != 'q')
    {
        printf("\nInput: ");
        scanf("%lf %c %lf", &operand1, &operation, &operand2);

        if (operation == '+')
        {
            add(operand1, operand2);
        }
        else if (operation == '-')
        {
            subtract(operand1, operand2);
        }
        else if (operation == '*')
        {
            multiply(operand1, operand2);
        }
        else if (operation == '/')
        {
            divide(operand1, operand2);
        }
        else
        {
            printf("Invalid input. Please try again. \n");
        }

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &endProgram);    // ' %c' -> Error if no space before '%'

        if (endProgram == 'y')
        {
            continue;
        }
        else
        {
            break;
        }
    }

    printf("\nProgram ended. \n");

    return 0;
}

// Function definitions
void add(double num1, double num2)
{
    printf("%lf + %lf = %lf \n", num1, num2, num1 + num2);
}

void subtract(double num1, double num2)
{
    printf("%lf - %lf = %lf \n", num1, num2, num1 - num2);
}

void multiply(double num1, double num2)
{
    printf("%lf * %lf = %lf \n", num1, num2, num1 * num2);
}

void divide(double num1, double num2)
{
    printf("%lf / %lf = %lf \n", num1, num2, num1 / num2);
}
*/
