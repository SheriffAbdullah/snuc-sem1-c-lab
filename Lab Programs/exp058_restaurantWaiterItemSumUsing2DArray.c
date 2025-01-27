/*
A restaurant has 5 waiters (Waiter IDs: 1 to 5) and has 5 items (Item IDs: 1 to 5) in the menu. Each waiter writes a slip for each customer (Assume 1 customer orders only 1 item). The slip contains the following information:
a) Waiter ID
b) Item ID
c) Cost of the item (in Rupees)
At the end of the day, all the slips are consolidated. Write a program to read the information from each slip and summarize the data into a table (2D array). Print the results in tabular format with each column representing a waiter and each row representing an item. Total each row to find the total sales (in Rupees) of an item on that day. Total each column to find the total sales (in Rupees) by each waiter. Column totals should be printed below each column and row totals should be printed to the right of each row.
*/
// Cost must vary for each order

#include <stdio.h>

int main()
{
    // Input
    int i, j;
   
    int numOfSlips;
    printf("Enter number of slips: ");
    scanf("%d", &numOfSlips);

    int waiterID;
    int itemID;
    int costOfItem;
    int tableArray[10][10] = {0};
    
    for (i = 0; i < numOfSlips; i++)
    {
        printf("*** SLIP %d *** \n", i + 1);
        printf("Enter waiter ID: ");
        scanf("%d", &waiterID);
        printf("Enter item ID: ");
        scanf("%d", &itemID);
        printf("Enter cost of item: ");
        scanf("%d", &costOfItem);
        tableArray[waiterID][itemID] += costOfItem;
    }
    
    int sum;
    
    // Row sums
    for (i = 1; i < 6; i++)
    {
        sum = 0;
        for (j = 1; j < 6; j++)
        {
            sum += tableArray[i][j];
        }
        tableArray[i][6] = sum;
    }
    
    // Column sums
    for (i = 1; i < 6; i++)
    {
        sum = 0;
        for (j = 1; j < 6; j++)
        {
            sum += tableArray[j][i];
        }
        tableArray[6][i] = sum;
    }
    
    // Output
    // Table header
    printf("\n");
    printf("_____________________________________________________________________\n");
    printf("|             |                  Item ID                  | Row     |\n");
    printf("|             |    1\t    2\t    3\t    4\t    5\t  | Sum     |\n");
    printf("|-------------|-------------------------------------------|---------|\n");

    // Print table contents w/ row sums
    for (i = 1; i < 6; i++)
    {
        printf("| Waiter ID %d |", i);
        
        for (j = 1; j < 7; j ++)
        {
            
            if (j == 5)
            {
                printf("%5d\t  |", tableArray[i][j]);
            }
            else
            {
                printf("%5d\t", tableArray[i][j]);
            }
        }
        
        printf("|\n");
    }
    
    printf("|--------------------------------------------------------------------\n");
    
    // Print column sums
    for (i = 6; i < 7; i++)
    {
        printf("| Column Sum  |");
        for (j = 1; j < 6; j ++)    // If j < 7 -> tableArray[6][6] (useless value) will be printed.
        {
            printf("%5d\t", tableArray[i][j]);
        }
        printf("  |         |\n");
    }
    
    printf("---------------------------------------------------------------------\n");
    
    return 0;
}

