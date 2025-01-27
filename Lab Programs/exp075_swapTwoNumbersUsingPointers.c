/*
Program with a function to swap two numbers using ‘pass by reference’ (i.e.) parameters of the function are pointer variables.
*/

#include <stdio.h>

// int swap(<parameter(s)>)
void swap(int *ptr1, int *ptr2) {
    int temp;
    temp = *ptr1;    // *ptr1 = value at the address stored in ptr1
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main()
{
    // Input
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    int *ptr1, *ptr2;    // Declare as pointer variables

    // Store address of 'a' and 'b' in pointer variables 'ptr1' amd 'ptr2' respectively
    ptr1 = &a;
    ptr2 = &b;

    // Output
    printf("Before swapping: a = %d, b = %d \n", a, b);
    swap(ptr1, ptr2);    // swap(<argument(s)>)
    printf("Before swapping: a = %d, b = %d \n", a, b);
    return 0;
}

/*
Every memory location has an address.
'a = 5;' - When a variable is declared, a name is added to memory location.
'int *ptr; ptr = &a;' - Pointer variables store a memory location's address. (using '&' - address of operator)
*ptr = 10; - '*' - De-referencing operator is used to access the value at the address stored in the pointer variable.
So, value of a is now 10.
*/
