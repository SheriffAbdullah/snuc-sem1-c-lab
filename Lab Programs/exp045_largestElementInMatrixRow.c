/*
 Program to perform matrix addition
 */

#include <stdio.h>

int main()
{
    // Input matrix dimensions
    int rowSize, colSize;
    printf("*** Martix Dimensions *** \n");
    printf("Enter number of columns: ");
    scanf("%d", &colSize);
    printf("Enter number of rows: ");
    scanf("%d", &rowSize);
    printf("\n");
    
    int matrix[colSize-1][rowSize-1];
    int col, row;
    
    // Input
    for (col = 0; col < colSize; col++)
    {
        for (row = 0; row < rowSize; row++)
        {
            printf("Enter element [%d][%d]: ", col + 1, row + 1);
            scanf("%d", &matrix[col][row]);
        }
    }
    
    // Largest element in a row
    printf("\n*** Printing Largest Element (Row-wise) *** \n");
    int largest;
    
    for (col = 0; col < colSize; col++)
    {
        largest = matrix[col][0];
        
        for (row = 0; row < rowSize - 1; row++)
        {
            if (matrix[col][row+1] > matrix[col][row])
            {
                largest = matrix[col][row+1];
            }
        }
        
        // Output
        printf("Row %d: %d", col + 1, largest);
        printf("\n");
    }
    
    return 0;
}

