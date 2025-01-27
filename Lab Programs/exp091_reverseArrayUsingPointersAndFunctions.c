/*
Pass a float array comprising of five elements to a void function named reverseArray(  ). 
Modify the contents of the array in such a way that the original array is reversed by making use of a swap(  ) function called within reverseArray(  ). 
The swap(  ) function takes the pointer to two elements which should be swapped so as to reverse the original array.
*/

#include <stdio.h>

void swap(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void reverseArray(int *array) {
    int i;

    for (i = 0; i < 5 / 2; i++) {
        swap((array + i), (array + (4-i)));
    }
}

int main() {

    // Input
    int i;
    int arr[5];

    for (i = 0; i < 5; i++) {
        printf("Enter element [%d]: ", i + 1);
        scanf("%d", (arr+i));
    }

    printf("*** Original Array *** \n");
    printf("arr[5] = {");
    for (i = 0; i < 4; i++) {
        printf("%d, ", *(arr + i));
    }
    printf("%d} \n", *(arr+4));    // *(arr + 4) -> Jump 4 times to the right (+) = 5th element

    // Reverse array
    reverseArray(arr);    // Function call

    printf("*** Reversed Array *** \n");
    printf("arr[5] = {");
    for (i = 0; i < 4; i++) {
        printf("%d, ", *(arr + i));
    }
    printf("%d} \n", *(arr+4));

    return 0;
}


