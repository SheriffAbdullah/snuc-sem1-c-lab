/*
Program to find the result of the following sequences:
a.	1 + ½ + 1/3 + …
b.	x - x^2/2 + x^3/3 - x^4/4+ …
*/

#include <stdio.h>
#include <math.h>

int main() {
    int option;
    int num_of_terms;
    double sum = 0;
    double i;
    int x;

    printf("Enter '1' for (1 + 1/2 + 1/3...) sequence.\n");
    printf("Enter '2' for (x - x^2/2 + x^3/3 - x^4/4...) sequence.\n ");
    printf("Enter option (1 or 2): ");
    scanf("%d", &option);

    if (option == 1)
    {
        printf("Enter number of terms: ");
        scanf("%d", &num_of_terms);
        
        for (i=1; i <= num_of_terms; i++)
        {
            sum += (1/i);
        }
        printf("Sum = %lf \n", sum);
    }

    else if (option == 2)
    {
        printf("Enter value of 'x': ");
        scanf("%d", &x);
        printf("Enter number of terms: ");
        scanf("%d", &num_of_terms);

        for (i=1; i <= num_of_terms; i++)
        {
            sum += pow(-1, i+1) * (pow(x, i) / i);
        }
        printf("Sum = %lf \n", sum);
    }

    else
    {
        printf("Incorrect option. Try again. \n");
    }

    return 0;
}

