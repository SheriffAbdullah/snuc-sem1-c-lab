/*
Program with a recursive function to print the elements of an array.
*/

#include <stdio.h>

void printArr(int array[], int arrLen)
{
	// Base case
	if (arrLen == 1) {
		printf("%d \n", array[arrLen-1]);
	}
	else {
		printf("%d ", array[0]);
		return printArr(array + 1, arrLen-1);    // array + 1 -> Returns array from 1st index position. Eg. [2, 3, 4, 5] -> [3, 4, 5]
	}
}

int main() {
	// Input
	int numOfElements, element;
	printf("Enter number of elements: ");
	scanf("%d", &numOfElements);
	
	int array[numOfElements];
	
	for (element = 0; element < numOfElements; element++) {
		printf("Enter element [%d]: ", element + 1);
		scanf("%d", &array[element]);
	}
	
	// Output
	printf("*** Printing Elements *** \n");
	printArr(array, numOfElements);
	
	return 0;
}

/*
array + n = (Address of array's first element) + (n * (Number of bytes in array's datatype)) -> Points to array's 'n+1'th element
Eg.
int array = [1, 2, 3, 4, 5, 6]
(Eg. Array's address is 1000)
array + 4 -> array's address + 4 * 4 ('int' datatype size is 4 bytes) -> array's address + 16 -> 1000 + 16 -> 1016
1020 is the address of 5th element (or) 4th index position of array.

Simply, it points to 'n+1'th element of the array. 
*/
