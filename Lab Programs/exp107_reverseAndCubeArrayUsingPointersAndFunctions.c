/*
Program to pass an integer array consisting of five elements to a void function named 'reverseCubeArray()'.
Modify the contents of the array in such a way that the original array is reversed and
the contents cubed by making use of 'swapCube()' function called within 'reverseCubeArray()'.
The 'swapCube()' function takes the pointer to two elements
which should be swapped so as to reverse the original array with its cube.
The 'pow()' function defined in 'math.h' may be used.
 */

#include <stdio.h>
#include <math.h>

#define MAX_LEN 5

void swapCube(int *ptr1, int *ptr2) {
    // Middle element of array
    if (ptr1 == ptr2) {
        *ptr1 = pow(*ptr1, 3);
    }
    else {
        // Swap cubed numbers
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;

        // Cube both numbers
        *ptr1 = pow(*ptr1, 3);
        *ptr2 = pow(*ptr2, 3);
    }
}

void reverseCubeArray(int arr[]) {
    int i;

    // Reverse array
    for (i = 0; i < MAX_LEN / 2 + 1; i++) {
        swapCube(arr + i, arr + MAX_LEN - (i + 1));
    }
}

int main() {
    // Input
    int arr[MAX_LEN] = {0};
    printf("*** Array Elements *** \n");

    for (int i = 0; i < MAX_LEN; i++) {
        printf("Enter element [%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Input
    printf("\nInput = [");
    for (int i = 0; i < MAX_LEN - 1; i++) {
        printf("%d, ", arr[i]);
    }

    printf("%d] \n", arr[MAX_LEN - 1]);

    // Function call
    reverseCubeArray(arr);

    // Output
    printf("Output = [");
    for (int i = 0; i < MAX_LEN - 1; i++) {
        printf("%d, ", arr[i]);
    }

    printf("%d] \n", arr[MAX_LEN - 1]);

    return 0;
}

/*
Define universally constant values globally.
Syntax: #define <constant_name> <value>
E.g. #define PI 3.1415926535
*/
