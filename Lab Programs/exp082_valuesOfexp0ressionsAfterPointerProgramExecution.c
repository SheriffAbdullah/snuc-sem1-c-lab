/*
Program to print the initial addresses of 'a' and 'b' for the program given below and
find the values of the following expressions at the end of execution of the given program:
a. &a
b. pb+5
c. b-5
d. pb
e. *pb
f. a
g. *(pb+1)
h. (pa+4)
i. (*pa+5)
j. *(pa+6)

Program:
    int a = 10, b = 20;
    int *pa, *pb = &b;
    *pb = b+10;
    pa = pb;
    *pa = a + b;
    *(pb-1) = b++;
*/

#include <stdio.h>

int main()
{
    // Given program
    int a = 10, b = 20;

    // Initial addresses of 'a' & 'b'
    printf("Initial address of 'a' is %p. \n", &a);
    printf("Initial address of 'b' is %p. \n", &b);

    // Given program (continuation)
    int *pa, *pb = &b;
    *pb = b+10;
    pa = pb;
    *pa = a + b;
    *(pb-1) = b++;

    // Output
    printf("\n**** Printing Values Of Expressions ***");
    printf("\n&a: %p \n", &a);
    printf("pb + 5: %p \n", pb + 5);
    printf("b - 5: %d \n", b - 5);
    printf("pb: %p \n", pb);
    printf("*pb: %d \n", *pb);
    printf("a: %d \n", a);
    printf("*(pb + 1): %d (Garbage value) \n", *(pb + 1));
    printf("(pa + 4): %p \n", (pa + 4));
    printf("(*pa + 5): %d \n", (*pa + 5));
    printf("*(pa + 6): %d (Garbage value) \n", *(pa + 6));

    return 0;
}




