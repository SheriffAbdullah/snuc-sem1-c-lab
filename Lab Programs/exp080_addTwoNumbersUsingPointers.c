/*
Program with a function to add 2 numbers. Pass the addresses of the numbers from the main function.
*/

#include <stdio.h>

int add(int *ptr1, int *ptr2) {
    return *ptr1 + *ptr2;
}

int main()
{
    // Input
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Pointer variable declaration
    int *ptr1 = &num1;    // Same as int *ptr1; ptr1 = &num1; (Pointer variable 'ptr1' declared with a '*'. '*' - not a de-referencing operator here.)
    int *ptr2 = &num2;

    // Output
    printf("Sum is %d. \n", add(ptr1, ptr2));

    return 0;
}


