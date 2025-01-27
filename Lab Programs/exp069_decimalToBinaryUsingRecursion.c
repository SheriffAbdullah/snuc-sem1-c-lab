/*
Program to convert a decimal number to a binary number using recursive functions.
*/

#include <stdio.h>

// Decimal to binary
int toBinary(int num) {
    if (num == 0) {
        printf("0");
    }
    else if (num == 1) {
        printf("1");
    }
    else {
        return toBinary(num / 2) + printf("%d", num % 2);    // Use '+' to print value and call function in the same return statement
    }
}

int main() {

    // Input
    int num;
    printf("*** Decimal to Binary *** \n");
    printf("Enter decimal number: ");
    scanf("%d", &num);

    // Output
    toBinary(num);
    printf("\n");
    return 0;
}

