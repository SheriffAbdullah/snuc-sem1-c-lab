/*
Program to reverse the elements of an array using the 'swap' function. The swap function and array loops must use pointers.
*/

#include <stdio.h>

void swap(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main()
{
    // Input
    int numOfElements;
    printf("Enter number of elements: ");
    scanf("%d", &numOfElements);

    int arr[numOfElements];
    int *startPtr = &arr[0];
    int *endPtr = &arr[numOfElements-1];
    int i;

    for (i = 0; i < numOfElements; i++) {
        printf("Enter element [%d]: ", i + 1);
        scanf("%d", (arr+i));    // *(arr+i) = arr[i] & (arr+i) = &arr[i]
    }

    // Print elements of array before reversing
    printf("*** Before Reversing *** \n");
    printf("arr[%d] -> {", numOfElements);

    for (i = 0; i < numOfElements-1; i++)
    {
        printf("%d, ", arr[i]);
    }

    printf("%d} \n", arr[numOfElements-1]);

    // Reverse array elements
    for (i = 0; i < numOfElements / 2; i++) {
        swap(startPtr, endPtr);
        startPtr++;
        endPtr--;
    }

    // Print elements of array after reversing
    printf("*** After Reversing *** \n");
    printf("arr[%d] -> {", numOfElements);

    for (i = 0; i < numOfElements-1; i++)
    {
        printf("%d, ", arr[i]);
    }

    printf("%d} \n", arr[numOfElements-1]);

    return 0;
}
