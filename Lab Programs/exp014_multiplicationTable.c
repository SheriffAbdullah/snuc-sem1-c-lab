/* Print multiplication table of a number */

#include <stdio.h>

int main() {
	int num;
	printf("Enter number: ");
	scanf("%d", &num);
	printf("*** Multiplication Table *** \n");
	int i;
	int prod;
	for (i=1; i<=12; i++)
	{
		prod = num * i;
		printf("%d x %d = %d \n", num, i, prod);
	}
	return 0;
} 
	
