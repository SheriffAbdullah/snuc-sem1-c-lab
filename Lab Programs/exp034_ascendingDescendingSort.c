/* Program to arrange a given set of numbers in ascending and descending order */

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
    
    // Bubble sort
    int tmp = 0;
    for (j=0; j<10; j++)
    {
        for (i=1; i<10; i++)
        {
            if (arr[i-1] > arr[i])
            {
                tmp = arr[i-1];
                arr[i-1] = arr[i];
                arr[i] = tmp;
            }
        }
    }

    // Print ascending order
    printf("Ascending Order \n");
    
    for (i=0; i<9; i++)
    {
        printf("%d, ", arr[i]);
    }
    
    printf("%d \n", arr[9]);

    // Print descending order
    printf("Descending Order \n");
    
    for (i=9; i>0; i--)
    {
        printf("%d, ", arr[i]);
    }
    
    printf("%d \n", arr[0]);
    
    return 0;
}
