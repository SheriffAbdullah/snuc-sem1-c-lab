/*
Program with function to reverse each word in a sentence
*/

#include <stdio.h>
#include <string.h>

void revSentence(char sentence[])
{
    char revSentence[200] = "";

    int i, j;
    int k = 0;
    int marker = strlen(sentence) - 1;

    // Reverse sentence
    for (i = strlen(sentence) - 2; i >= 0; i--)
    {
        if (sentence[i] == ' ')
        {
            for (j = i + 1; j < marker; j++)
            {
                if (sentence[j] == '.')
                {
                    continue;
                }
                revSentence[k] = sentence[j];
                k += 1;
            }

            revSentence[k] = ' ';
            k += 1;
            marker = i;
        }
    }

    // Append the first word to the end of the sentence
    for (i = 0; i < marker; i++)
    {
        revSentence[k] = sentence[i];
        k += 1;
    }

    revSentence[k] = '.';

    // Output
    printf("\n%s", revSentence);
}

int main()
{
    char sentence[200] = "";
    printf("Enter a sentence: ");
    fgets(sentence, 200, stdin);    // fgets(<string>, <max_limit>, <stdin>) - Adds '\n' before '\0'

    revSentence(sentence);

    return 0;
}
