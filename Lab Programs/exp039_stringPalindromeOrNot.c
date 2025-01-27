/* Program to reverse a given string and check whether it is palindrome or not. */

#include <stdio.h>
#include <string.h>

int main()
{
    // Read input
    char string[30] = "";
    char rev_string[30] = "";
    printf("Enter string: ");
    scanf("%s", string);

    // Reverse string + lowercase all characters
    int i, ascii_value;
    for (i = 0; i < strlen(string); i++)
    {
        ascii_value = string[i];
        if (ascii_value >= 65 && ascii_value <= 90)
        {
            string[i] = string[i] + 32;
        }
        rev_string[strlen(string) - 1 - i] = string[i];
    }

    // Output
    printf("Original : %s \nReverse  : %s \n", string, rev_string);
    if (strcmp(string, rev_string) == 0)    // strcmp() --> 0 - true, 1 - false
    {
        printf("It is palindrome. \n");
    }
    else
    {
        printf("It is not palindrome. \n");
    }

    return 0;
}

/*
Palindrome - Number / word must be same when read forwards or backwards.
Eg. Level, refer, 1234321, etc.
 */

