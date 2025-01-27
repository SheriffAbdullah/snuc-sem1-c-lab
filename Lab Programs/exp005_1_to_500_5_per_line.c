/* Print integers from 1 to 100, 5 per line  */

#include <stdio.h>

int main() {
    int i, j;
    for (i=1; i<=100; ++i)
    {
        if (i%5==0)    // New line is created after 5, 10, 15...
        {
            printf("%d\n", i);
        }
        else
        {
            printf("%d ", i);
        }
    }
}

