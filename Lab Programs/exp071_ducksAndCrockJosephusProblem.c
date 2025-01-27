/*
There are 'n' ducks floating on a pond in a circle. The pond is also home for an alligator with a fondness for ducks.
Beginning at a particular position (duck number 1) the alligator counts around the circle and
eats every 'm'th duck (the circle closing as ducks are eaten). For example, when n=8, and m=4,
The first duck is fifth on the menu, the second is fourth, etc.
The sequence 5, 4, 6, 1, 3, 8, 7, 2 of order of consumption completely describes the alligator’s menu.

Program to print out the order of consumption of the ducks given 'n' and 'm'. Functions for sub operations are included
to make the program modular.

Sample Input/Output:
n = 8
m = 4
Order of Consumption: 5 4 6 1 3 8 7 2
*/


#include <stdio.h>

// Sum of array elements
int arrSum(int arr[], int numOfElements)
{
    if (numOfElements == 1)
    {
        return arr[0];
    }
    else
    {
        return arr[numOfElements-1] + arrSum(arr, numOfElements-1);
    }
}

// Check if array element is zero. If yes, return 0.
int isEmpty(int duckArr[], int duck)
{
    if (duckArr[duck] == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

// Sum of 'n' numbers (1 to 'n')
int nsum(int num)
{
    if (num == 1)
    {
        return 1;
    }
    else
    {
        return num + nsum(num-1);
    }
}

int main() {

    // Input
    int numOfDucks, m, i;
    printf("Enter total number of ducks ('n'): ");
    scanf("%d", &numOfDucks);
    printf("Enter \'m\'th duck for the alligator to eat: ");
    scanf("%d", &m);

    int duckArray[100] = {0};
    int eatOrder = 0, count = 0, duck = -1;

    while (arrSum(duckArray, numOfDucks) != nsum(numOfDucks))
    {
        duck++;
        duck %= numOfDucks;

        // Duck not eaten
        if (isEmpty(duckArray, duck) == 0)
        {
            count += 1;

            // Count reached. Duck to be eaten.
            if (count == m)
            {
                count = 0;
                eatOrder += 1;
                duckArray[duck] = eatOrder;
            }
        }

        /*
        // Print variable values
        int sum = arrSum(duckArray, numOfDucks);
        printf("Duck Index Number: %d, duckArray Sum: %d, eatOrder: %d, Duck Count: %d \n", duck, sum, eatOrder, count);

        for (i = 0; i < numOfDucks; i++) {
            printf("%d ", duckArray[i]);
        }

        printf("\n");
        */
    }

    // Output
    for (i = 0; i < numOfDucks; i++) {
        printf("%d ", duckArray[i]);
    }
    printf("\n");
}

/*
Alternate Methods:

i) Instead of nsum() and arrSum(), use a 'ducksEaten' variable
w/ 'while' loop - if 'ducksEaten' == 'numOfDucks', then quit the loop.

ii) Once a duck is eaten, shift all elements on the right of the eaten duck (uneaten ducks)
to the left (i.e.) move eaten duck to the extreme right.
Eg. [0, 0, 0, 0, 0, 0, 0, 0] -> [0, 0, 0, 0, 1, 0, 0, 0] (Duck eaten) -> [0, 0, 0, 0, 0, 0, 0, 1] (Shift right)
& use a function to shift all elements to the right.
New array is from index 0 to 6.

Note: This type of problem is a.k.a. Josephus Problem.
 */
