/* Program to print all integers between 10000 and 100000 which
have odd number of odd digits and even number of even digits. */

#include <stdio.h>

int main()
{
    int line_count = 0;
    int i, j;
    int odd_count, even_count;
    int num;
    
    for (i=10000; i<=100000; i++)
    {
        odd_count = 0;
        even_count = 0;
        num = i;
        
        // Check every number for even and odd digit count
        while (num > 0)
        {
            j = num % 10;
            if (j % 2 == 0)
            {
                even_count += 1;
            }
            else
            {
                odd_count += 1;
            }
            num /= 10;
        }
        
        if (even_count % 2 == 0 && odd_count % 2 != 0)
        {
            // Print 15 numbers in a line
            if (line_count % 15 == 0)
            {
                printf(" \n");
            }
            line_count += 1;
            printf("%d, ", i);
        }
        else
        {
            continue;
        }
    }
    return 0;
}


