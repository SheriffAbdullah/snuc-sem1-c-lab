/*
Program to generate the vertical mirror image of a 2-D array.
If A is the original array, generate an array B such that the last column of A is first column of B,
second to last column of A is second column of B and so on.

Example: If Array A is  1  2  3     Then B is  3  2  1
                                    4  5  6                      6  5  4
                                    7  8  9                      9  8  7
*/

#include <stdio.h>

int main()
{
    int rowCount, colCount, row, col;

    // Input
    printf("*** Matrix Dimensions *** \n");
    printf("Enter number of rows: ");
    scanf("%d", &rowCount);
    printf("Enter number of columns: ");
    scanf("%d", &colCount);
    int matrixA[rowCount][colCount];
    int matrixB[rowCount][colCount];

    printf("\n*** Matrix Elements *** \n");

    for (row = 0; row < rowCount; row++)
    {
        for (col = 0; col < colCount; col++)
        {
            printf("Enter element [%d][%d]: ", row + 1, col + 1);
            scanf("%d", &matrixA[row][col]);
        }
    }

    // Matrix - B = Vertical mirror image of matrix - A
    printf("\n*** Matrix - B *** \n");
    for (row = 0; row < rowCount; row++)
    {
        for (col = 0; col < (colCount / 2) + 1; col++)
        {
            matrixB[row][col] = matrixA[row][colCount-col-1];
            matrixB[row][colCount-col-1] = matrixA[row][col];
        }
    }

    // Output
    printf("\n*** Matrix - A *** \n");

    for (row = 0; row < rowCount; row++)
    {
        for (col = 0; col < colCount; col++)
        {
            printf("%d\t", matrixA[row][col]);
        }
        printf("\n");
    }

    printf("\n*** Matrix - B *** \n");

    for (row = 0; row < rowCount; row++)
    {
        for (col = 0; col < colCount; col++)
        {
            printf("%d\t", matrixB[row][col]);
        }
        printf("\n");
    }
    
    return 0;
}
