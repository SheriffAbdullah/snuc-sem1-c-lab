/*
Program using structures to add and subtract complex numbers using structures.
*/

#include <stdio.h>
#include <stdbool.h>

struct complex    // 'complex' -> Structure's name tag
{
    // Member variables
    // Syntax: <structure_name>.<member_variable_name> (To access it's value)
    int real;
    int imag;
};

int main() {
    struct complex c1, c2, result;

    int operation;
    printf("***** Operations Menu ***** \n");
    printf("1. Addition. \n");
    printf("2. Subtraction. \n");
    printf("0. Quit. \n");

    while (true) {
        printf("\nEnter operation number: ");
        scanf("%d", &operation);

        if (operation == 0) {
            printf("Program ended. \n");
            break;
        }
        else if (operation == 1) {    // Addition
            printf("\n*** Addition *** \n");
            printf("** Complex Number - 1 ** \n");
            printf("Enter real part: ");
            scanf("%d", &c1.real);
            printf("Enter imaginary part: ");
            scanf("%d", &c1.imag);

            printf("** Complex Number - 2 ** \n");
            printf("Enter real part: ");
            scanf("%d", &c2.real);
            printf("Enter imaginary part: ");
            scanf("%d", &c2.imag);

            result.real = c1.real + c2.real;
            result.imag = c1.imag + c2.imag;

            if (result.imag < 0) {
                printf("Result is %d%di. \n", result.real, result.imag);
            }
            else {
                printf("Result is %d+%di. \n", result.real, result.imag);
            }
        }
        else if (operation == 2) {    // Subtraction
            printf("\n*** Subtraction *** \n");
            printf("** Complex Number - 1 ** \n");
            printf("Enter real part: ");
            scanf("%d", &c1.real);
            printf("Enter imaginary part: ");
            scanf("%d", &c1.imag);

            printf("** Complex Number - 2 ** \n");
            printf("Enter real part: ");
            scanf("%d", &c2.real);
            printf("Enter imaginary part: ");
            scanf("%d", &c2.imag);

            result.real = c1.real - c2.real;
            result.imag = c1.imag - c2.imag;

            if (result.imag < 0) {
                printf("Result is %d%di. \n", result.real, result.imag);
            }
            else {
                printf("Result is %d+%di. \n", result.real, result.imag);
            }
        }
        else {
            printf("Invalid operation number. Please enter a valid input. \n");
            continue;
        }
    }



    return 0;
}


