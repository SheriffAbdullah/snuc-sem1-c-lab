/*
A list of numbers must be organized into a table which reads by columns, left to right.
The number of columns is fixed. The list of numbers fills out the table column by column.
All rows must be filled except for the last row.
The empty spaces in the last row should be at the right end of the row.

(Example)
LIST	  : 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17
COLUMNS   : 5
TABLE     : 1 5  9 12 15
            2 6 10 13 16
            3 7 11 14 17
            4 8

Input/Output:

First read a list of numbers. Then read the number of columns ‘n’ infinitely until zero is entered.
For each value of ‘n’ display the sum of numbers in each row.

Sample I/O:

Enter the list of numbers: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17
Enter the number of columns: 5
Row Sums: 42 47 52 12
************************************************
Enter the number of columns: 1
Row Sums: 153
************************************************
Enter the number of columns: 2
Row Sums: 11 13 15 17 19 21 23 25 9
*************************************************
Enter the number of columns: 0
*/

#include <stdio.h>

int main()
{
    // Input number of elements
    int numOfElements;
    printf("Enter number of elements: ");
    scanf("%d", &numOfElements);

    int inputArray[numOfElements];
    int lastRow, rowSum;
    int i, j;

    // Input elements
    for (i = 0; i < numOfElements; i++)
    {
        printf("Enter element [%d]: ", i + 1);
        scanf("%d", &inputArray[i]);
    }

    int array[numOfElements][50];
    int numOfColumns = 1;
    int numOfRows;

    while (numOfColumns != 0)
    {
        printf("Enter number of columns (Enter '0' to terminate): ");
        scanf("%d", &numOfColumns);

        // Avoid 0's in last row if not necessary
        if (numOfElements % numOfColumns == 0)
        {
            lastRow = 0;
        }
        else
        {
            lastRow = 1;
        }

        numOfRows = numOfElements / numOfColumns + lastRow;

        // Set all values in array to '0'
        for (i = 0; i < numOfElements; i++)
        {
            for (j = 0; j < 50; j++)
            {
                array[i][j] = 0;
            }
        }

        if (numOfColumns == 0)
        {
            continue;
        }
        else if (numOfColumns < 0)
        {
            printf("Please enter a valid input. \n");
            continue;
        }
        else
        {
            // Skeleton of table - Fill '0' in empty spaces & '1' in spaces w/ numbers
            for (i = 0; i < numOfElements / numOfColumns; i++)
            {
                for (j = 0; j < numOfColumns; j++)
                {
                    array[i][j] = 1;
                }
            }

            // Fill the last row
            for (i = 0; i < numOfElements % numOfColumns; i++)
            {
                array[numOfElements/numOfColumns][i] = 1;
            }

            // Fill numbers in skeletal table
            int element = 0;

            for (j = 0; j < numOfColumns; j++)
            {
                for (i = 0; i < numOfElements / numOfColumns + 1; i++)
                {
                    if (array[i][j] == 1)
                    {
                        array[i][j] = inputArray[element];
                        element += 1;
                    }
                    else
                    {
                        continue;
                    }
                }
            }

            // Output - Table w/ elements

            printf("*** Table *** \n");

            for (i = 0; i < numOfRows; i++)
            {
                for (j = 0; j < numOfColumns; j++)
                {
                    printf("%d\t", array[i][j]);
                }
                printf("\n");
            }
        }
	
	// Output - Row sums
        if (numOfColumns >= numOfElements)
        {
            for (i = 0; i < numOfRows; i++)
            {
                rowSum = 0;

                for (j = 0; j < numOfColumns; j++)
                {
                    rowSum += array[i][j];
                }
            }
            
            printf("Row sum is %d. \n", rowSum);
            printf("************************************************\n");
            continue;
        }
        else
        {
        	printf("Row sums are ");
        	
        	for (i = 0; i < numOfRows; i++)
        	{
            		rowSum = 0;

            		for (j = 0; j < numOfColumns; j++)
            		{
                		rowSum += array[i][j];
            		}

            		if (i == numOfRows - 1)
            		{
                		printf("and %d. ", rowSum);
                		continue;
            		}
            		else if (i == numOfRows - 2)
            		{
               	 		printf("%d ", rowSum);
                		continue;
            		}

            	printf("%d, ", rowSum);
        	}
        }
        
        printf("\n************************************************\n");
    }

    printf("Program ended. \n");
    return 0;
}


