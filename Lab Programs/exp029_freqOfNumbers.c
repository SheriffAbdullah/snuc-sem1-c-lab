#include <stdio.h>

int main() 
{		
	int count;
	printf("Enter number of elements: ");
	scanf("%d", &count);
	printf("*** Enter elements from 0 - 5 *** \n");
	
	int arr[50] = {0};
	int freq_arr[6] = {0};
	int i;
	
	for (i=0; i<count; i++)
	{
	printf("Enter element [%d]: ", i + 1);
	scanf("%d", &arr[i]);    
	freq_arr[arr[i]] += 1;
	}
	
	printf("*** Frequency of Occurence ***\n");
	
	for (i=0; i<6; i++)
	{    
		printf("'%d': %d \n", i, freq_arr[i]);
	}
	
	return 0; 
}

/*
	// Alternative
	int freq_arr[6] = {0};
	int num;
	printf("*** Enter numbers 0-5. Enter any other number to quit *** \n");
	while (1)
	{
		scanf("%d", &num);
		if (num > 5 || num < 0)
			break;
		freq_arr[num]++;
	}
	
	int i;
	for (i=0; i<6; i++)
		printf("'%d': %d \n", i, freq_arr[i]);
*/
