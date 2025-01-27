/*
Program to count the number of words in a given sentence
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[100] = "";
    printf("Enter sentence: ");
    gets(sentence);

    int i;
    int wordCount = 1;

    for (i = 0; i < strlen(sentence); i++)
    {
        if (sentence[i] == ' ')
        {
            wordCount += 1;
        }
        else
        {
            continue;
        }
    }

    printf("Sentence has %d word(s). \n", wordCount);

    return 0;
}
