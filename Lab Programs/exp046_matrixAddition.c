/*
 Program to perform matrix addition
 */

#include <stdio.h>

int main()
{
    // Input matrix dimensions
    int rowSize, colSize;
    printf("*** Matrix Dimensions *** \n");
    printf("Enter number of rows: ");
    scanf("%d", &rowSize);
    printf("Enter number of columns: ");
    scanf("%d", &colSize);

    int matrix_a[rowSize][colSize];
    int matrix_b[rowSize][colSize];
    int matrix_c[rowSize][colSize];
    int row, col;

    // Input matrix - A
    printf("\n*** Matrix - A *** \n");

    for (row = 0; row < rowSize; row++)
    {
        for (col = 0; col < colSize; col++)
        {
            printf("Enter element [%d][%d]: ", row + 1, col + 1);
            scanf("%d", &matrix_a[row][col]);
        }
    }

    // Input matrix - B
    printf("\n*** Matrix - B *** \n");

    for (row = 0; row < rowSize; row++)
    {
        for (col = 0; col < colSize; col++)
        {
            printf("Enter element [%d][%d]: ", row + 1, col + 1);
            scanf("%d", &matrix_b[row][col]);

            // Elements of matrix - C
            matrix_c[row][col] = matrix_a[row][col] + matrix_b[row][col];
        }
    }

    // Matrix - C = Matrix - A + Matrix - B
    printf("\n*** Matrix - C = Matrix - A + Matrix - B *** \n");

    for (row = 0; row < rowSize; row++)
    {
        for (col = 0; col < colSize; col++)
        {
            printf("%d\t", matrix_c[row][col]);
        }
        printf("\n");
    }

    return 0;
}

/*
Alternative: (Line 56)
printf("%-5d", matrix_c[row][col]);    // If digits > 4, output may be wrong
"%-5d" -> Eg. Out: 123__ - '5' trailing whitespaces & '-' for left-align
 */

