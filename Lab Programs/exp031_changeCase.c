#include <stdio.h>
#include <string.h>

int main() 
{
	char string[30] = "";
	printf("Enter string: ");
	scanf("%s", string);
	
	int i;
	for (i=0; i<30; i++)
	{	
		if (string[i] > 96 && string[i] < 123)
		{
			string[i] = string[i] - 32;
		}
		else if (string[i] > 64 && string[i] < 91)
		{
			string[i] = string[i] + 32;
		}
		else
		{ 
			continue; 
		}
	}		
	printf("New string: %s \n", string);
	return 0;
}
