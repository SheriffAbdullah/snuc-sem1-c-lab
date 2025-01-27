/*
Program with a function to generate an identity matrix. 
The function should take dimension as a parameter, and 
it must write the matrix to a file in the proper matrix format.
*/

#include <stdio.h>
#include <stdlib.h>

void genIdentity(FILE *fptr, int dim) {
    int i, j;
    
    for (i = 0; i < dim; i++) {
        for (j = 0; j < dim; j++) {
            if (i == j) {
                fprintf(fptr, "1\t");
            }
            else {
                fprintf(fptr, "0\t");
            }
            
        }
        
        fputc('\n', fptr);
    }
    
    printf("\nIdentity matrix written to file successfully. \n");
}

int main() {
    // Declare variable
    int matrixDim;
    
    // Open file
    FILE *fptr = fopen("/Users/sheriffabdullah/College @ Shiv Nadar/OneDrive - SSN Trust/CLAB/identityMatrix.txt", "w");
    
    // Input - Dimension of identity matrix
    printf("*** Identity Matrix Generator *** \n");
    printf("\nEnter dimension: ");
    scanf("%d", &matrixDim);
    
    // Call function
    genIdentity(fptr, matrixDim);
    
    // Close File
    fclose(fptr);
    
    return 0;
}

/*
Note: Identity matrices are square matrices.
*/



