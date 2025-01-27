/*
Program to find sum of squares of numbers in an array. Write a function to square each number and
use the sum() function to find the total.
*/

#include <stdio.h>

double squareNum(double num)
{
    return num * num;
}

double arrSum(double array[20])
{
    int i;
    double sum = 0;

    for (i = 0; i < 10; i++)
    {
        sum += array[i];
    }

    return sum;
}

int main()
{
    double array[20] = {0};
    int i;

    // Input
    for (i = 0; i < 10; i++)
    {
        printf("Enter value [%d]: ", i+1);
        scanf("%lf", &array[i]);
        array[i] = squareNum(array[i]);
    }

    // Output
    printf("The sum of squares of elements in array is %.2lf. \n", arrSum(array));    // '.2' between '%' and 'lf' prints only upto 2 decimal places
    
    return 0;
}
