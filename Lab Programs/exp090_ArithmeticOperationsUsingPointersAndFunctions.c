/*
Define two integer vatiables 'x' & 'y' in the main function and assign the values to it from the user. Write a single void function named 'computeArithmetics( )' which computes the addition, subtraction, multiplication and division of 'x' & 'y' in the main function and updates the results as pointer arguments.

'computeArithmetics( )' will take six arguments, all of them are pointers. The first two args take pointers to 'x' & 'y', and the remaining four args will be pointers to results for each arithmetic operations.
*/

#include <stdio.h>

void computeArithmetics(float *ptrNumber1, float *ptrNumber2, float *ptrAddition, float *ptrSubtraction, float *ptrMultiplication, float *ptrDivision) {
	*ptrAddition = *ptrNumber1 + *ptrNumber2;
	*ptrSubtraction = *ptrNumber1 - *ptrNumber2;
	*ptrMultiplication = *ptrNumber1 * *ptrNumber2;
	*ptrDivision = *ptrNumber1 / *ptrNumber2;
}

int main() {

	// Input
	float x, y;
	float addResult, subResult, mulResult, divResult;
	printf("Enter first number: ");
	scanf("%f", &x);
	printf("Enter second number: ");
	scanf("%f", &y);
	
	// Declare pointer variables
	float *ptrNum1 = &x, *ptrNum2 = &y;
	float *ptrAdd = &addResult, *ptrSub = &subResult, *ptrMul = &mulResult, *ptrDiv = &divResult;

	// Function call
	computeArithmetics(ptrNum1, ptrNum2, ptrAdd, ptrSub, ptrMul, ptrDiv);
	
	// Output
	printf("%.2f + %.2f = %.2f \n", x, y, *ptrAdd);    // '.2' -> print upto two decimal places 
	printf("%.2f - %.2f = %.2f \n", x, y, *ptrSub);
	printf("%.2f * %.2f = %.2f \n", x, y, *ptrMul);
	printf("%.2f / %.2f = %.2f \n", x, y, *ptrDiv);
	
	return 0;	
}


/*
Variables declared in different functions (Eg. 'main()' and 'computeArithmetic()') are independent of each other. Functions create temporary variables when called (function call). 
It is accepted for variables in two different functions to have the same name.  
*/
