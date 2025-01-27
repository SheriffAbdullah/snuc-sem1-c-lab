/*
Program with a recursive function to print the elements of an array in reverse order.
*/

#include <stdio.h>

void printRevArr(int array[], int arrLen)
{
	// Base case
	if (arrLen == 1) {
		printf("%d \n", array[0]);
	}
	else {
		printf("%d ", array[arrLen-1]);
		return printRevArr(array, arrLen-1);
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
	printf("*** Printing Elements in Reverse Order *** \n");
	printRevArr(array, numOfElements);
	
	return 0;
}

