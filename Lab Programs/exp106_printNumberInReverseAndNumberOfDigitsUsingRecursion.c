/*
Program with a recursive function 'nr_Digits()' which returns the number of digits of
a given integer number, and also at the same time prints the number in reverse.
The number of digits is printed form the main function, but printing the number in
reverse is handled by the recursive function.

Example:
 Input:
 1234
 Output:
 4321 (printed by recursive function)
 Length: 4 (printed from the 'main()' which the returned value of 'nr_Digit()')
*/

#include <stdio.h>

int nr_Digits(long int num) {
    if (num == 0) {
        return printf(".\n") - 2;    // Same as 'return 0'
    }
    else {
        // 'printf()' returns number of characters printed
        // Here, it is '1' since last digit of 'num' is printed in every function call
        return printf("%ld", num % 10) + nr_Digits(num / 10);
    }
}

int main() {
    // Input
    long int num;
    printf("Enter a number: ");
    scanf("%ld", &num);

    printf("Number in reverse is ");
    int numOfDigits = nr_Digits(num);

    // Output
    printf("Number of digits is %d. \n", numOfDigits);

    return 0;
}
