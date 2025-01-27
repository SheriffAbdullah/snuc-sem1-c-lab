/*
Program with a recursive function to print the elements of an array in reversed order.
Use pointers to pass only the rest of the array after printing to the next recursive call after printing an element.
*/

#include <stdio.h>

int printRevArray(int *element) {
    if (*(element) == '\0') {
        return 0;
    }
    else {
        return printRevArray(element + 1) + printf("%d ", *(element));    // Use printf() statement after recursive function call.
        // Use '+' to use both 'printf()' and function call statement in 'return' statement
    }
}

int main() {

    // Input
    int numOfElements;
    printf("Enter number of elements: ");
    scanf("%d", &numOfElements);

    int arr[numOfElements];
    int i;

    for (i = 0; i < numOfElements; i++) {
        printf("Enter element [%d]: ", i + 1);
        scanf("%d", (arr+i));
    }

    // Print elements of array in reverse order
    printf("*** Printing Array Elements in Reverse Order *** \n");
    printRevArray(arr);
    printf("\n");

    return 0;
}
