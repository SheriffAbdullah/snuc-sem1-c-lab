#include <stdio.h>

int main() 
{
	double count;
	printf("Enter number of elements: ");
	scanf("%lf", &count);
	
	int arr[50] = {0};
	int i;
	double sum = 0.0;
	
	for (i=0; i<count; i++)
	{
	printf("Enter element [%d]: ", i + 1);
	scanf("%d", &arr[i]);    // arr[i] --> Error. Use &arr[i]. arr[i] is a pointer
	sum += arr[i];
	}	
	
	double average = sum / count;
	printf("Average is %lf. \n", average);
	
	return 0; 
}

