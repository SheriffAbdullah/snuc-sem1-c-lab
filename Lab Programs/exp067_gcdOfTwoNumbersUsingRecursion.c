/*
Program to find the Greatest Common Divisor (GCD) of two numbers using recursive functions.
*/

#include <stdio.h>

// num1 > num2
int gcd(int num1, int num2) {
	if (num1 % num2 == 0) {
		return num2;
	}
	else {
		return gcd(num2, num1 % num2);
	}
}

int main() {

	// Input
	int num1, num2;
	printf("*** Greatest Common Divisor of Two Numbers *** \n");
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	
	// num1 > num2
	if (num2 > num1) {
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}
	
	// Output	
	printf("Greatest common divisor is %d. \n", gcd(num1, num2));
	return 0;
}

/*
Note: GCD a.k.a. HCF (or) Highest Common Factor.
*/


