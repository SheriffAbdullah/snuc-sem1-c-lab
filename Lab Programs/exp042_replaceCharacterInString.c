/*
Program to replace the last occurrence of a character in a string with another character.

Example:

    String: Hello World
    Character to be replaced: l
    Character to replace: m
    Result:  Hello Wormd
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char string[100] = "";
    char old_char;
    char new_char;
    int i = 0;
    
    printf("Enter string: ");
    gets(string);
    
    printf("Enter character to be replaced: ");
    scanf("%c", &old_char);
    
    printf("Enter character to replace: ");
    scanf(" %c", &new_char);    // Space before %c - Scan any number of whitespace characters (including none) and when character is non-whitespace character, stop scanning.
    
    for (i = strlen(string); i >= 0; i--)
    {
        if (string[i] == old_char)
        {
            string[i] = new_char;
            break;
        }
    }
    
    printf("Result: %s \n", string);
    
    return 0;
}

