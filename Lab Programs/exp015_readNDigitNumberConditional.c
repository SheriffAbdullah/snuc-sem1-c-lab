/* Read 'n' digit positive number. If number is even, add the digits. If odd, multiply the digits. Print the answer */

#include <stdio.h>

int main() {
	long int num;
	printf("Enter number: ");
	scanf("%ld", &num);    // '%ld' - for long integer type
	long int sum = 0;
	long int prod = 1;
	int remainder = 0;
	if (num % 2 == 0)    // If num is even
	{
		while (num > 0)
		{
			remainder = num % 10;
			num = num / 10;
			sum += remainder;
		}
		printf("The number is even. \nSum of digits = %ld \n", sum);
	}
	else    // If num is odd
	{
		while (num > 0)
		{
			remainder = num % 10;
			num = num / 10;
			prod *= remainder;	
		}
		printf("The number is odd. \nProduct of digits = %ld \n", prod);
		
	}
	
	return 0;
}

/* 
If input is too big, the program may return undesired output. To return answer for a big number, use 'long int'.
*/
