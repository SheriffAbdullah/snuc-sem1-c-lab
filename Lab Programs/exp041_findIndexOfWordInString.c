/* 
Program to find starting index of the first occurence of a word in a string. 
Example:
	String: Hello World
	Word: World
	Index: 6
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char string[100] = "";
    char word[25] = "";
    int i = 0;
    int j;
    int flag = 0;

    // Input
    printf("Enter string: ");

    while ((string[i++] = getchar()) != '\n')
    {
        string[i] = '\0';
    }

    printf("Enter word: ");
    scanf("%s", word);

    // Search for word in string
    for (i = 0; i < strlen(string); i++)
    {
        for (j = 0; j <= strlen(word); j++)
        {
            if (string[i + j] == word[j])
            {
                continue;
            }
            else if (string[i + j] == ' ' && word[j] == '\0')
            {
                flag = 1;
                goto output;

            }
            else
            {
                break;
            }
        }
    }

    // Output
    output:
    if (flag == 1)
    {
        printf("Index: %d \n", i);
    }
    else
    {
        printf("Word not found in string. \n");
    }

    return 0;
}

