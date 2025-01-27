#include <stdio.h>
#include <string.h>

int main() 
{
	char string[30] = "";
	printf("Enter string: ");
	scanf("%s", string);
	
	char vow_arr[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
	int vow_count = 0;	
	int i, j;
	for (i = 0; i < strlen(string); i++)
	{	
		for (j = 0; j < 10; j++)
		{
			if (string[i] == vow_arr[j])
			{
				vow_count += 1;
			}
			else
			{
				continue;
			}
		}
	}
	printf("Vowel count is %d. \n", vow_count);
	return 0;
}
