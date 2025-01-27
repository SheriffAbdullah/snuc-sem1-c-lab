/*
Program to generate the 'n'th Fibonacci number using recursive functions.
*/

#include <stdio.h>

int nfibo(int n) {
	if (n == 1) {
		// First Fibonacci number
		return 0;
	}
	else if (n == 2) {
		// Second Fibonacci number
		return 1;
	}
	else {
		// 'n'th Fibonacci number
		return nfibo(n-1) + nfibo(n-2);
	}
}

int main() {

	// Input
	int n;
	printf("*** 'n'th Fibonacci Number *** \n");
	printf("Enter value of 'n': ");
	scanf("%d", &n);
	
	// Output	
	printf("Fibonacci number is %d. \n", nfibo(n));
	return 0;
}

/* 
Fibonacci series -> Any number is the sum of two previous consequent numbers. 
Fibonacci series starts from 0.
Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, 13, 21... 
*/
