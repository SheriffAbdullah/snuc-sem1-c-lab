/*
Program to read an integer array from the user and pass it to a function that takes two arrays -
the first array with the values obtained form the user and the second array as an empty array.
The objective is to append the indices of the even numbers present in the original array to the empty array and
return the number of even numbers present in the original array.
*/

#include <stdio.h>

int evenIndices(const int arr[], int indexArr[], int arrLen) {
    int i = 0, j = 0;
    int evenCount = 0;    // Count of number of even numbers in 'arr'

    while (i < arrLen) {
        // Set all elements of 'indexArr' to '0'
        indexArr[i] = 0;

        if (arr[i] % 2 == 0) {
            indexArr[j] = i;    // Append index position of even number, in 'arr', to 'indexArr'
            evenCount ++;
            j++;
        }
        i++;
    }

    return evenCount;
}

int main() {
    // Input
    int numOfElts;
    printf("Enter number of elements: ");
    scanf("%d", &numOfElts);

    if (numOfElts <= 0) {
        printf("Number of array elements cannot be zero or negative. \nProgram ended.\n");
    }
    else {
        int arr1[numOfElts], arr2[numOfElts];

        // Input array elements
        for (int i = 0; i < numOfElts; i++) {
            printf("Enter element [%d]: ", i + 1);
            scanf("%d", &arr1[i]);
        }

        printf("\n*** Before Calling Function *** \n");

        // Original array - before calling function
        printf("arr1 = {");

        for (int i = 0; i < numOfElts - 1; i++) {
            printf("%d, ", arr1[i]);
        }

        printf("%d} \n", arr1[numOfElts - 1]);

        // Empty array - before calling function
        printf("arr2 = {");

        for (int i = 0; i < numOfElts - 1; i++) {
            printf("%d, ", arr2[i]);
        }

        printf("%d} // Garbage value(s)\n", arr2[numOfElts - 1]);

        // Call 'evenCount()' function
        int evenCount = evenIndices(arr1, arr2, numOfElts);

        printf("\n*** After Calling Function *** \n");

        // Original array - after calling function
        printf("arr1 = {");

        for (int i = 0; i < numOfElts - 1; i++) {
            printf("%d, ", arr1[i]);
        }

        printf("%d} \n", arr1[numOfElts - 1]);

        // Empty array - after calling function
        printf("arr2 = {");

        for (int i = 0; i < numOfElts - 1; i++) {
            printf("%d, ", arr2[i]);
        }

        printf("%d} \n", arr2[numOfElts - 1]);

        // Output
        printf("\n*** Index Position(s) in Original Array With an Even Number *** \n");

        for (int i = 0; i < evenCount - 1; i++) {
            printf("%d, ", arr2[i]);
        }

        if (evenCount == 0) {
            printf("None. \n");
        }
        else {
            printf("%d. \n", arr2[evenCount - 1]);
        }

        printf("\nNumber of even numbers = %d. \n", evenCount);

        return 0;
    }
}
