/*
Program to find the difference between pointer to an array declared as int (*arrp)[5]
and an array declared as int arrp[5].
*/

#include <stdio.h>

int main() {
    int array[5];    // Array initialisation + 'array' -> Pointer to base element of array
    int *ptr = array;    // Pointer to an integer
    int (* arr)[5];    // Pointer to an array of 5 integers



    printf("*** Printing Addresses of 5 Successive Memory Locations *** \n");
    printf("\nint array[5];\t\t\t| int (* arr)[5]; \n");
    printf("-------------------------------------------------\n");

    for (int i = 0; i < 5; i++) {
        printf("(ptr + %d) = %p\t| (arr + %d) = %p \n", i, (ptr + i), i, (arr + i));
    }

    printf("\nObservation:\n\n- 'ptr + 1' moves 4 bytes (or) size of 'int'. \n- 'arr + 1' moves 20 bytes (or) size of 5 integer elements. \n");
    printf("(Note: Addresses are in hexadecimal number system) \n");

    printf("\nInference:\n\n-> 'int array[5]' declares an array of 5 elements. \n- Array name 'array' is a pointer to the integer base element of the array. \n- 'array + 1' moves to the next element in the array.\n");
    printf("\n-> 'int (* arr)[5]' declares a pointer variable 'arr' to an array of 5 elements. \n- Indirection operator is inside parenthesis with variable name 'arr' (Precedence: Subscript > Indirection). \n- 'arr + 1' moves 5 elements (i.e.) to the next array. \n");
    printf("- This is used to access rows of multi-dimensional arrays. \n");
    return 0;
}
