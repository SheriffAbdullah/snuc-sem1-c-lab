/*
Program using pointers to print the elements of an array in reverse order.
*/

#include <stdio.h>

int main() {

    // Input
    int numOfElements;
    printf("Enter number of elements: ");
    scanf("%d", &numOfElements);

    int arr[numOfElements];
    int i;

    for (i = 0; i < numOfElements; i++) {
        printf("Enter element [%d]: ", i + 1);
        scanf("%d", (arr+i));    // *(arr+i) = arr[i] & (arr+i) = &arr[i]
    }

    // Print elements of array in reverse order
    int *ptr = arr;    // 'arr' is a pointer. It points to '0'th element of the array.
    printf("*** Printing Array Elements in Reverse Order *** \n");

    for (i = 0; i < numOfElements; i++) {
        printf("%d ", *(ptr + (numOfElements-1) - i));
    }

    printf("\n");

    return 0;
}
