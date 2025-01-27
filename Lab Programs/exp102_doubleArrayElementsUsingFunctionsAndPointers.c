/*
Program with a function to double the elements of an array.
The modified array must be returned to main. Use pointers to return the array from the function.
*/

#include <stdio.h>
#include <stdlib.h>

// Function returns pointer
int* doubleElements(int array[], int numOfElts) {
    // Create a new array
    int* outputArr = malloc(numOfElts * sizeof(int));

    for (int i = 0; i < numOfElts; i++) {
        // New array element = 2 * Original array element
        *(outputArr + i) = *(array + i) * 2;
    }
    return outputArr;
}

int main() {
    // Input
    int numOfElts;
    printf("Enter number of elements: ");
    scanf("%d", &numOfElts);
    int array[numOfElts];

    for (int i = 0; i < numOfElts; i++) {
        printf("Enter element [%d]: ", i + 1);
        scanf("%d", (array + i));
    }

    // Call 'doubleElements()' function
    int* outputArr = doubleElements(array, numOfElts);    // int *<ptr_name> & int* <ptr_name> -> both are correct

    // Output
    printf("*** Original Array *** \n");

    for (int i = 0; i < numOfElts - 1; i++) {
        printf("%d, ", *(array + i));
    }

    printf("%d. \n", *(array + numOfElts - 1));

    printf("*** Modified Array *** \n");

    for (int i = 0; i < numOfElts - 1; i++) {
        printf("%d, ", *(outputArr + i));
    }

    printf("%d. \n", *(outputArr + numOfElts - 1));

    return 0;
}

