/*
Program to count the number of digits in a number using recursive functions.
*/

#include <stdio.h>

int digit(int num) {
	if (num == 0) {
		return 0;
	}
	else {
		return 1 + digit(num/10);
	}
}

int main() {

	// Input
	int num;
	printf("*** Number of Digits in a Number *** \n");
	printf("Enter number: ");
	scanf("%d", &num);
	
	// Output	
	printf("%d digits. \n", digit(num));
	return 0;
}


