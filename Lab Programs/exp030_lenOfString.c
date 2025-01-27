#include <stdio.h>
#include <string.h>

int main() 
{
	char string[25] = "";
	printf("Enter string: ");
	scanf("%s", string);
	
	int i;
	int str_len = 0;
	for (i=0; i<25; i++)
	{
		if (string[i] == '\0')
		{
			break;
		}
		else
		{
			str_len += 1;
		}
	}
	printf("String length is %d. \n", str_len);
	return 0;
}
