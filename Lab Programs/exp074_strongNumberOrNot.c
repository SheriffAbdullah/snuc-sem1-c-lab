/*
Program to check if a given number is strong number or not.
A strong number is a number that equals the sum of factorials of its digits.
Function to calculate factorial is included.
*/

#include <stdio.h>

int fact(int num) {
    if (num == 0) {
        return 1;
    }
    else {
        return num * fact(num-1);
    }
}
int main() {
    int inputNum, num;
    int sum = 0;

    // Input
    printf("*** Strong Number Or Not *** \n");
    printf("Enter a number: ");
    scanf("%d", &inputNum);

    // Strong number or not
    num = inputNum;
    while (inputNum > 0) {
        sum += fact(inputNum%10);
        inputNum /= 10;
    }

    // Output
    if (num == sum) {
        printf("%d is a strong number. \n", num);
    }
    else {
        printf("%d is not a strong number. \n", num);
    }

    return 0;
}
