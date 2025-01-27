/*
Create an array of pointers 'ptrArr'. It must store pointers to new memory locations.
Every time the user wishes to enter an input (employee's salary), create a new memory location using 'malloc()' and save the address
to the array of pointers.
Use an infinite loop to take input.
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {

    int *ptrArr[100];    // Array of pointers
    int *ptr;

    int i = 1;
    char flag;
    bool quit = false;
    
    printf("*** Employee Salary Database *** \n");
    
    while(quit == false) {
        // Create new memory location
        ptr = malloc(sizeof(int));

        // Input
        printf("Enter salary [%d]: ", i);
        scanf("%d", ptr);
        printf("Do you want to continue? (Y/N): ");
        scanf(" %c", &flag);    // Use ' %c' (space before %) to avoid '\n' (newline character) as input

        // Assign new memory location's address to pointer array
        *(ptrArr+i-1) = ptr;

        if (flag == 'n' || flag == 'N') {
            quit = true;
        }

        i++;
    }

    int j;

    // Print values in pointers in pointer array
    printf("\n*** Printing Employees' Salaries *** \n");
    for (j = 0; j < i - 1; j++)
    {
        printf("%d. %d\n", j + 1, **(ptrArr+j));
    }

    printf("Program ended. \n");

    return 0;
}

