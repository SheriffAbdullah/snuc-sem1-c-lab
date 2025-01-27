/* Print  the sum of 100 natural numbers starting form 45  */

#include <stdio.h>

int main() {
    int start = 45;
    int sum = 0;
    int i = 0;
    while (i<100)
    {
        sum = sum + start;
        start++;
        i++;
    }
    printf("Sum = %d", sum);
    return 0;
}

