/* 
Program to print the following pattern:
      0
     010
    01210
   0123210
  012343210
 01234543210
*/

#include <stdio.h>


int main() {
    int i, j, k, space;
    space = 6;
    k = 0;
    int num_of_rows = 6;
    
    // Print 6 rows
    for (i=1; i<num_of_rows+1; i++)
    {
        // Print spaces before number
        while (k < space)
        {
            printf(" ");
            k++;
        }
        k = 0;
        space--;

        // Print numbers in ascending order
        for (j=0; j<(i*2)-1; j++)
        {
            if (j>=i)
            {
                continue;
            }
            else
            {
                printf("%d", j);
            }
        }

        // Print numbers in descending order (backwards)
        for (j=i-2; j>=0; j--)
        {
            printf("%d", j);
        }


        printf("\n");
    }

    return 0;
}

