/* Program to generate twin prime numbers between 1 and 100 */

#include <stdio.h>

int main() {
    int i, j, k;
    int prev_prime = 2;
    printf("*** Printing Twin Prime Numbers *** \n");

    for (i=2; i<101; i++)
    {
        for (j=2; j<i; j++)
        {
            if (i%j!=0)
            {
                continue;
            }
            else if (i%j==0)
            {
                goto next;
            }
        }

        if (i - prev_prime == 2)
        {
            printf("%d & %d\n", i, prev_prime);
        }
        prev_prime = i;

        next:
        continue;
    }

    return 0;
}

/*
If difference between two successive prime numbers is two (i.e.)
a - b = 2, (a & b are prime numbers), they are known as twin prime numbers.
Eg. 3 and 5
*/



