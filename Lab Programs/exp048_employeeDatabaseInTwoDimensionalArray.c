/*
A company maintains a 2D array containing the identification numbers (column 1) and hourly wage rate of its employees(column 2). This information is maintained in increasing order of the employee number.
 Program for deletion, insertion and modification of employee information.
 */

#include <stdio.h>

int main()
{
    // Initialising array with sample employee information
    int emp_array[50][2] = {{21110220, 100000}, {21110221, 50000}, {21110222, 70000}};
    int empNum, wagePerHour;

    printf("*** Welcome to Employee Management System *** \n");
    printf("\n*** Options Menu *** \n");
    printf("1 - Delete employee information. \n");
    printf("2 - Insert employee information. \n");
    printf("3 - Modify employee information. \n");
    printf("4 - Print existing employees' information. \n");
    printf("0 - Exit. \n");

    int input = 1;
    int found;    // Flag for employee information in database or not
    int i;
    int temp;

    while (input != 0)
    {
        // Sort array in ascending order of employee number
        for (i = 1; i < 50; i++)
        {
            while (emp_array[i-1][0] > emp_array[i][0])
            {
                // Swap employee number
                temp = emp_array[i-1][0];
                emp_array[i-1][0] = emp_array[i][0];
                emp_array[i][0] = temp;

                // Swap rate per hour
                temp = emp_array[i-1][1];
                emp_array[i-1][1] = emp_array[i][1];
                emp_array[i][1] = temp;
            }
        }

        printf("\nEnter option: ");
        scanf("%d", &input);

        // Delete employee information
        if (input == 1)
        {
            printf("Enter employee number: ");
            scanf("%d", &empNum);

            for (i = 0; i < 50; i++)
            {
                if (emp_array[i][0] == empNum)
                {
                    found = 0;
                    emp_array[i][0] = 0;
                    emp_array[i][1] = 0;
                    printf("Employee information deleted. \n");
                    break;
                }
                else
                {
                    found = 1;
                }
            }
            if (found == 1)
            {
                printf("Employee not found. \n");
            }
        }

            // Insert employee information
        else if (input == 2)
        {
            printf("Enter employee number: ");
            scanf("%d", &empNum);

            for (i = 0; i < 50; i++)
            {
                if (emp_array[i][0] == 0)
                {
                    printf("Enter wage per hour: ");
                    scanf("%d", &wagePerHour);
                    emp_array[i][0] = empNum;
                    emp_array[i][1] = wagePerHour;
                    printf("Employee information inserted. \n");
                    break;
                }
                else if (emp_array[i][0] == empNum)
                {
                    printf("Employee already exists. \n");
                }
                else
                {
                    continue;
                }
            }
        }

            // Modify employee information
        else if (input == 3)
        {
            printf("Enter employee number: ");
            scanf("%d", &empNum);

            for (i = 0; i < 50; i++)
            {
                if (emp_array[i][0] == empNum)
                {
                    found = 0;
                    printf("Enter new wage per hour: ");
                    scanf("%d", &wagePerHour);
                    emp_array[i][1] = wagePerHour;
                    printf("Employee wage modified. \n");
                    break;
                }
                else
                {
                    found = 1;
                }
            }

            if (found == 1)
            {
                printf("Employee not found. \n");
            }
        }

            // Print employee database
        else if (input == 4)
        {
            int count = 1;
            printf("*** Employee Database *** \n");
            printf("(Employee Number, Wage Per Hour) \n");

            for (i = 0; i < 50; i++)
            {
                if (emp_array[i][0] != 0)
                {
                    printf("%d. %d, Rs. %d /- \n", count, emp_array[i][0], emp_array[i][1]);
                    count++;
                }
                else
                {
                    continue;
                }
            }
        }

            // Exit program
        else
        {
            if (input != 0)
            {
                printf("Invalid input. Please try again. \n");
            }
        }
    }

    printf("Program ended. \n");

    return 0;
}

/*
If print, modify, delete and insert are functions,
instead of returning 'emp_array[50][2]',
declare 'emp_array[50][2]' as a global variable.

Use insertion sort to insert new element in alphabetical order (and delete element and re-order trailing elements).
*/
