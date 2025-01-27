/*
Program to calculate the sum of 'n' numbers (1 to n) using recursive functions.
*/

#include <stdio.h>

int nsum(int num) {
	// Base case
	if (num == 1) {
		return 1;
	} 
	else {
		return num + nsum(num-1); 
	}
}

int main() {
	int num;
	printf("*** Sum of 'n' Numbers (From 1 to 'n') Calculator *** \n");
	printf("Enter number: ");
	scanf("%d", &num);
	
	int sum = nsum(num);
	printf("Sum is %d. \n", sum);
	
	return 0;
}
