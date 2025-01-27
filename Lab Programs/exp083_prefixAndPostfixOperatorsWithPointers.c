/*
Program to declare and initialize an integer pointer variable 'p' and
find the values of the following expressions: ++*p, *p++, *++p and ++*p*2
*/

#include <stdio.h>

int main()
{
    int num = 10;
    int *p;    // Pointer declaration
    p = &num;    // Initialisation

    // Output
    printf("++ *p: %d \n", ++*p);
    printf("*p ++: %d \n", *p++);
    printf("* ++p: %d (Garbage value) \n", *++p);
    printf("++ *p * 2: %d (Garbage value) \n", ++*p*2);

    return 0;
}

/*
Unary Operators -> Same Precedence (Evaluated from left to right).
Postfix operator (<var>++ / <var>--) has lower precedence than unary operators.
*/




