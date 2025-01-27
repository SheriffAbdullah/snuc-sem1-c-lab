/*
Program to print an array of numbers.
The numbers may be of any format (number name, whole number, floating point number, etc.).
For this, a union named 'Number' is created with fields char number[], int num, float fnum, double dnum.
Each number may be stored and retrieved in any one of the above formats depending on the choice of the user.
*/

#include <stdio.h>

union Number{
    char number[50];
    int num;
    float fnum;
    double dnum;
} num1[100];    // Array of numbers

int main() {
    // Input
    int numOfElts;
    printf("Enter number of elements: ");
    scanf("%d", &numOfElts);

    // Store numbers in any format
    int option;
    printf("\n** Input Datatype Menu ** \n");
    printf("1. Whole number (E.g. 3). \n");
    printf("2. Number name (E.g. Three). \n");
    printf("3. Floating-point (E.g. 3.14). \n");
    printf("4. Double (E.g. 3.14159265358). \n");

    char typeArr[numOfElts];    // Store datatype of number (int, string, float or double)

    for (int i = 0; i < numOfElts; i++) {
        printf("\nEnter option: ");
        scanf("%d%*c", &option);

        switch(option) {
            case 1:
                printf("Enter whole number: ");
                scanf("%d%*c", &num1[i].num);
                typeArr[i] = 'i';    // 'i' -> Integer
                break;

            case 2:
                printf("Enter number name: ");
                gets(num1[i].number);
                typeArr[i] = 's';    // 's' -> String
                break;

            case 3:
                printf("Enter floating-point number: ");
                scanf("%f%*c", &num1[i].fnum);
                typeArr[i] = 'f';    // 'f' -> Floating-point
                break;

            case 4:
                printf("Enter double-type number: ");
                scanf("%lf%*c", &num1[i].dnum);
                typeArr[i] = 'd';    // 'd' -> Double
                break;

            default:
                printf("Invalid option. Please enter a number between 0 - 4. \n");
                break;
        }
    }

    // Output - Retrieve numbers
    printf("\n*** Printing Array of Numbers *** \n");

    printf("{");
    for (int i = 0; i < numOfElts - 1; i++) {
        if (typeArr[i] == 'i') {
            printf("%d, ", num1[i].num);
        }
        else if (typeArr[i] == 's') {
            printf("\"%s\", ", num1[i].number);
        }
        else if (typeArr[i] == 'f') {
            printf("%f, ", num1[i].fnum);
        }
        else if (typeArr[i] == 'd') {
            printf("%lf, ", num1[i].dnum);
        }
    }

    if (typeArr[numOfElts - 1] == 'i') {
        printf("%d} \n", num1[numOfElts - 1].num);
    }
    else if (typeArr[numOfElts - 1] == 's') {
        printf("\"%s\"}\n", num1[numOfElts - 1].number);
    }
    else if (typeArr[numOfElts - 1] == 'f') {
        printf("%f} \n", num1[numOfElts - 1].fnum);
    }
    else if (typeArr[numOfElts - 1] == 'd') {
        printf("%lf} \n", num1[numOfElts - 1].dnum);
    }

    printf("\nProgram ended. \n");

    return 0;
}


