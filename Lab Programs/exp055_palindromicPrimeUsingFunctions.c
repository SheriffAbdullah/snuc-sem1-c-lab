/*
Program to find all palindromic prime numbers between 1 and 100.
Separate functions to check for primality and palindrome.
*/

#include <stdio.h>
#include <string.h>

int isPrime(int num);
int isPalindrome(int num);

int main()
{
    int i;
    int num;

    printf("*** Palindromic Prime Numbers Between 1 to 100 *** \n");

    for (num = 1; num <= 100; num++)
    {
        if (isPrime(num) == 0 && isPalindrome(num) == 0)
        {
            printf("%d \n", num);
        }
        else
        {
            continue;
        }
    }

    return 0;
}

int isPrime(int num)
{
    int divisor;
    if (num == 2)
    {
        return 0;
    }
    else
    {
        for (divisor = 2; divisor < num; divisor++)
        {
            if (num % divisor != 0 )
            {
                continue;
            }
            else
            {
                return 1;
            }
        }
        return 0;
    }
}

int isPalindrome(int num)
{
    // Number of digits in 'num'
    int count = 0;
    int temp = num;

    while (temp > 0)
    {
        temp /= 10;
        count++;
    }

    int rev_arr[20] = {0};
    int arr[20] = {0};
    int num2 = num;
    int i;
    
    for (i = 0; i < count; i++)
    {
        rev_arr[i] = num % 10;
        num /= 10;
    }
    
    for (i = count - 1; i >= 0; i--)
    {
        arr[i] = num2 % 10;
        num2 /= 10;
    }

    // Compare digits of original and reverse number
    for (i = 0; i < count; i++)
    {
        if (arr[i] == rev_arr[i])
        {
            continue;
        }
        else
        {
            return 1;
        }
    }

    return 0;
}

/*
sizeof() - Returns space allocated (int -> 4 memory locations).
*/

