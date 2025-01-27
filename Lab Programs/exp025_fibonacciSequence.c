/* Program to print Fibonacci sequence */

#include <stdio.h>

int main() {
    int num_of_terms;
    printf("Enter number of terms: ");
    scanf("%d", &num_of_terms);

    int a = -1;
    int b = 1;
    int c = a + b;
    int i;

    for (i=0; i<num_of_terms; i++)
    {
        printf("%d, ", c);
        a = b;
        b = c;
        c = a + b;
    }
    printf("... \n");
    return 0;
}



