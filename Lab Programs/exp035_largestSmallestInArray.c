/*
Program to find the largest number, nearest to the largest number,
smallest number and nearest to the smallest number from a given set of numbers.
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

    // Bubble sort [Ascending]
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

    // Output
    printf("Largest number is %d. \n", arr[9]);
    printf("Nearest to largest number is %d. \n", arr[8]);
    printf("Smallest number is %d. \n", arr[0]);
    printf("Nearest to smallest number is %d. \n", arr[1]);
    return 0;
}
