/*
Program to read in 20 numbers, each of which is between 10 and 100, inclusive.
As each number is read, print it only if it’s not a duplicate of a number already read.
Use the smallest possible array to solve this problem.
*/

#include <stdio.h>

int main()
{
    int arr[21] = {0};    // Initialise all elements to 0
    int i, j;
    int flag;
    printf("*** Enter numbers between 10 and 100 (inclusive) *** \n");

    for (i = 0 ; i < 20; i++)
    {
        // Input
        printf("Enter number [%d]: ", i + 1);
        scanf("%d", &arr[i]);
        flag = 0;
        
        // Compare with previous elements
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = 1;
                break;
            }
            else
            {
                continue;
            }
        }
        
        // Output
        if (flag == 0)
        {
            printf("%d \n", arr[i]);
        }
        else
        {
            continue;
        }
    }
    
    printf("Program ended. \n");
    
    return 0;
}
