/*
Program to multiply 2 matrices. Check if dimensions of the input matrices are compatible before proceeding to multiply.
*/

#include <stdio.h>

int main()
{
    int matrixA_rowCount;
    int matrixA_colCount;
    int matrixB_rowCount;
    int matrixB_colCount;

    // Input dimensions of matrices
    printf("*** Matrix - A Dimensions *** \n");
    printf("Enter number of rows: ");
    scanf("%d", &matrixA_rowCount);
    printf("Enter numer of columns: ");
    scanf("%d", &matrixA_colCount);

    printf("\n*** Matrix - B Dimensions *** \n");
    printf("Enter number of rows: ");
    scanf("%d", &matrixB_rowCount);
    printf("Enter numer of columns: ");
    scanf("%d", &matrixB_colCount);

    int matrixA[matrixA_rowCount][matrixA_colCount];    // Error if matrix dimensions are less than requirement. Create matrix with dimensions > required dimensions.
    int matrixB[matrixB_rowCount][matrixB_colCount];
    int matrixC[matrixA_rowCount][matrixB_colCount];

    // Check if dimensions are compatible
    if (matrixA_colCount == matrixB_rowCount)
    {
        int matrixC_rowCount = matrixA_rowCount;
        int matrixC_colCount = matrixB_colCount;
        int row, col;

        // Input matrix - A
        printf("\n*** Matrix - A *** \n");

        for (row = 0; row < matrixA_rowCount; row++)
        {
            for (col = 0; col < matrixA_colCount; col++)
            {
                printf("Enter element [%d][%d]: ", row + 1, col + 1);
                scanf("%d", &matrixA[row][col]);
            }
        }

        // Input matrix - B
        printf("\n*** Matrix - B *** \n");

        for (row = 0; row < matrixB_rowCount; row++)
        {
            for (col = 0; col < matrixB_colCount; col++)
            {
                printf("Enter element [%d][%d]: ", row + 1, col + 1);
                scanf("%d", &matrixB[row][col]);
            }
        }


        // Matrix - C
        printf("\n*** Matrix - C = Matrix - A x Matrix - B *** \n");
        int sum, k;

        for (row = 0; row < matrixC_rowCount; row++)
        {
            for (col = 0; col < matrixC_colCount; col++)
            {
                sum = 0;

                for (k = 0; k < matrixA_colCount; k++)
                {
                    sum += matrixA[row][k] * matrixB[k][col];    // c11 = (a11)*(b11) + (a12)*(b21) + (a13)*(b31) .... (a1k)*(bk1)
                }

                matrixC[row][col] = sum;
                printf("%d\t", matrixC[row][col]);
            }
            printf("\n");
        }
    }

    else
    {
        printf("\nMatrix dimensions are incompatible for multiplication. \n");
    }

    return 0;
}
