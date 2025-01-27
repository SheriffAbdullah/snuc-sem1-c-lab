/* Check whether number is palindrome or not */

#include <stdio.h>
#include <math.h>

int main()
{
	// Read input
    int input_num;
    int num_arr[20] = {0};
    printf("Enter number: ");
    scanf("%d", &input_num);

    int orig_num = input_num;
    int rev_num = 0;

    int num_length;

    // Enter numbers into array
    int i = 0;
    while (input_num > 0)
    {
        num_arr[i] = input_num % 10;
        input_num /= 10;
        i++;
        num_length ++;
    }

    // Enter reversed numbers into variable
    int j;
    for (i=0, j=num_length; j>0; i++, j--)
    {
        rev_num += num_arr[i] * pow(10, j-1);
    }

    printf("Original : %d \nReverse  : %d \n", orig_num, rev_num);
    if (orig_num == rev_num)
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

