/*
Program to do the following:
a. Declare and initialize an integer array of size 5. Print the addresses of all the 5 elements and observe how the addresses vary.
b. Repeat step (a) for char, float and double arrays.

*/

#include <stdio.h>

int main()
{
    int i;

    // Integer
    int intArr[5];
    printf("*** Addresses of 5 Contiguous Memory Locations ('int' Datatype) *** \n");

    for (i = 0; i < 5; i++) {
        printf("%p \n", &intArr[i]);    // '%lx' - Address in hexadecimal. '%d' - Address in decimal. '%p' - Address of a variable.
    }

    printf("The addresses vary by 4 bytes. \n");

    // Character
    char charArray[5];
    printf("\n*** Addresses of 5 Contiguous Memory Locations ('char' Datatype) *** \n");

    for (i = 0; i < 5; i++) {
        printf("%p \n", &charArray[i]);
    }

    printf("The addresses vary by 1 byte. \n");

    // Floating point
    float floatArr[5];
    printf("\n*** Addresses of 5 Contiguous Memory Locations ('float' Datatype) *** \n");

    for (i = 0; i < 5; i++) {
        printf("%p \n", &floatArr[i]);
    }

    printf("The addresses vary by 4 bytes. \n");

    // Double array
    int doubleArr[5][5];    // Double array (a.k.a.) 2-D array.
    printf("\n*** Addresses of 5 Contiguous Memory Locations (Double Arrays) *** \n");
    printf("(Note: Size of 2-D Array is 5 x 5) \n");

    for (i = 0; i < 5; i++) {
        printf("%p \n", &doubleArr[i]);
    }

    printf("The addresses vary by 20 bytes. (Since 'int' datatype size is 4 bytes and every memory location holds 5 integers.) \n");
    
    return 0;
}




