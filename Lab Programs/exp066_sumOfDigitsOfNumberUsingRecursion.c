/*
Program to calculate the sum of digits of a number using recursive functions.
*/

#include <stdio.h>

int digitsum(int num) {
	if (num == 0) {
		return num;
	}
	else {
		return (num % 10) + digitsum(num/10);
	}
}

int main() {

	// Input
	int num;
	printf("*** Sum of Digits of a Number Calculator *** \n");
	printf("Enter number: ");
	scanf("%d", &num);
	
	// Output	
	printf("Sum of digits is %d. \n", digitsum(num));
	return 0;
}


