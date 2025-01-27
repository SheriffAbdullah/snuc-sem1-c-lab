/*
Program to search for a given number in a list of numbers (Searching).
*/

#include <stdio.h>

int main()
{
    int arr[30] = {0};
    int i, j;
    printf("*** Enter any 10 numbers *** \n");

    // Input array
    for (i=0; i<10; i++)
    {
        printf("Enter element [%d]: ", i+1);
        scanf("%d", &arr[i]);
    }

    int search_num;
    printf("Enter number to search for: ");
    scanf("%d", &search_num);

    int is_num = 0;
    for (i=0; i<10; i++)
    {
        if (search_num == arr[i])
        {
            is_num = 1;
            break;
        }
        else
        {
            continue;
        }
    }

    // Output
    if (is_num == 1)
    {
        printf("%d - found in list. \n", search_num);
    }
    else
    {
        printf("%d - not found in list. \n", search_num);
    }
    
    return 0;
}
