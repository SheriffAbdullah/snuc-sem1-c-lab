/*
Program with a function to generate an identity matrix. The function takes dimension as a parameter and it returns the matrix to main function.
*/

#include <stdio.h>
#include <stdlib.h>

int *genIdentity(int size) {

	int i, j;
	int *matrix = (int *) calloc(size * size, sizeof(int));
	// calloc(<number_of_memory_blocks>, <size_of_one_block>) returns contiguous memory locations
	// '(int *)' -> return integer pointer from 'calloc()'. Default return type is '(void *)'
	
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			// i = j -> Diagonal elememts
			if (i == j) {
				*(matrix + (size * i) + j) = 1;
			}
			// Non-diagonal elements
			else {
				*(matrix + (size * i) + j) = 0;
			}
		}
	}
	
	return matrix;
}

int main() {
	
	// Input
	int size;
	printf("Enter size of identity matrix: ");
	scanf("%d", &size);
	
	int *ptr = genIdentity(size);
	
	// Output
	int i, j;
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			printf("%d\t", *(ptr + (size * i) + j)); 
		}
		printf("\n");
	}
					
	return 0;
}

/*
#1 Identity matrix of size 'n' is the square matrix of dimension 'n x n' with '1's in the main diagonal (main diagonal = top left -> bottom right elelemts) and '0' elsewhere.
#2 It is always a square matrix.
#3 A x I = A (Multiply any matrix 'A' with identity matrix 'I' & get orignal matrix).
*/

/*
ptr + (size * i) + j -> To access contiguous memory locations of array
*/
