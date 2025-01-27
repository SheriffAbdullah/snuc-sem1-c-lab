/*
Program to add two matrices using pointers
*/

#include <stdio.h>

int main() {
    // Input
    int rowSize, colSize;
    printf("*** Matrix Dimensions *** \n");
    printf("Enter number of rows: ");
    scanf("%d", &rowSize);
    printf("Enter number of columns: ");
    scanf("%d", &colSize);

    int matrixA[rowSize][colSize],
            matrixB[rowSize][colSize],
            matrixC[rowSize][colSize];

    // Matrix - A
    printf("\n*** Input Matrix - A *** \n");

    for (int row = 0; row < rowSize; row++) {
        for (int col = 0; col < colSize; col++) {
            printf("Enter element [%d][%d]: ", row + 1, col + 1);
            scanf("%d", &matrixA[row][col]);
        }
    }
    // Scope of 'row' & 'col' only within 'for' loop

    // Matrix - B
    printf("\n*** Input Matrix - B *** \n");

    for (int row = 0; row < rowSize; row++) {
        for (int col = 0; col < colSize; col++) {
            printf("Enter element [%d][%d]: ", row + 1, col + 1);
            scanf("%d", &matrixB[row][col]);
        }
    }

    int row, col;
    int *ptrA = (int *) matrixA;
    // Store address of base element (= index '0' element) of matrix
    int *ptrB = (int *) matrixB;
    // 2-D array pointers are double pointers -> Type cast to single pointer

    // Matrix C = Matrix A + Matrix B
    for (row = 0; row < rowSize; row++) {
        for (col = 0; col < colSize; col++) {
            *(*(matrixC) + (row*colSize + col)) = *(ptrA + (row*colSize + col)) + *(ptrB + (row*colSize + col));
        }
    }

    // Output
    printf("\n*** Matrix C = Matrix A + Matrix B *** \n");
    for (row = 0; row < rowSize; row++) {
        for (col = 0; col < colSize; col++) {
            printf("%d\t", *(*(matrixC) + (row * colSize + col)));
            // matrix[row][col] = *(*(matrixA) + (row * colSize + col))
            // Note: 2-D Matrix pointer is a double pointer
        }
        printf("\n");
    }

    return 0;
}

/*
Note:
a[0] = *(a + 0)
a[0][1] = *(*(a + 0) + 1)
*/

