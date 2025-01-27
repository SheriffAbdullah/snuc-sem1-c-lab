/*
Program to find the determinant value of a square matrix. (3 x 3 Matrix)
*/

#include <stdio.h>

int main()
{
    printf("*** Matrix (3 x 3) *** \n");
    double matrix[3][3];
    int i, j;

    // Input
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j ++)
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%lf", &matrix[i][j]);
        }
    }

    // Determinant of 3 x 3 matrix
    double determinant = (matrix[0][0] * ((matrix[1][1] * matrix[2][2]) - (matrix[2][1] * matrix[1][2]))) -
                         (matrix[0][1] * ((matrix[1][0] * matrix[2][2]) - (matrix[2][0] * matrix[1][2]))) +
                         (matrix[0][2] * ((matrix[1][0] * matrix[2][1]) - (matrix[2][0] * matrix[1][1])));

    // Output
    printf("Determinant is %lf. \n", determinant);
    return 0;
}
