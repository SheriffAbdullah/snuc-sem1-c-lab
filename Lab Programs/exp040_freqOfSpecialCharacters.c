/*
Program to get a paragraph of text from the user and print a horizontal bar
chart denoting frequency of each special character occurring in the text.

Output will be something like this:

. 	************
,	******
;	**
“	**
‘	****
!	**

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char paragraph[1000] = "";
    int i = 0;
    printf("Enter paragraph: ");
    while((paragraph[i++] = getchar()) != '\n')    // gets() - Space included, ends with newline. Error: it is unsafe.
    {
        paragraph[i] = '\0';
    }

    // Collect symbols in input
    char symbol_arr[50] = {' '};
    int ascii_value;
    int j = 0, symbol_arr_length = 0;

    for (i = 0; i < strlen(paragraph); i++)
    {
        ascii_value = paragraph[i];

        // All symbols in ASCII
        if (ascii_value >= 33 && ascii_value <= 47 || ascii_value >= 58 && ascii_value <= 64 || ascii_value >= 91 && ascii_value <= 96 || ascii_value >= 123 && ascii_value <= 126)
        {
            symbol_arr[j] = paragraph[i];
            j += 1;
            symbol_arr_length += 1;
        }
        else
        {
            continue;
        }
    }

    // Group similar symbols
    char tmp;

    for (j = 0; j < symbol_arr_length; j++)
    {
        for (i = 1; i < symbol_arr_length; i++)
        {
            if (symbol_arr[i] < symbol_arr[i-1])
            {
                tmp = symbol_arr[i-1];
                symbol_arr[i-1] = symbol_arr[i];
                symbol_arr[i] = tmp;
            }
        }
    }

    // Output

    if (symbol_arr_length == 0)
    {
        printf("No special character found. \n");
    }
    else
    {
        printf("\n");
        int count = 1;
        for (i=1; i < symbol_arr_length + 1; i++)
        {
            if (symbol_arr[i] == symbol_arr[i-1])    // Compare 'i'th and next element
            {
                count += 1;
                continue;
            }
            printf("%c      ", symbol_arr[i-1]);
            for (j = 0; j < count; j++)
            {
                printf("*");
            }
            printf("\n");
            count = 1;
        }
    }

    return 0;
}
