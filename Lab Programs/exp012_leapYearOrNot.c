/*
Program to find whether year is a leap year or not
 */

#include <stdio.h>

int main() {
    int year;
    int flag;
    printf("Enter the year (YYYY): ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        flag = 1;
        if (year % 100 == 0)
        {
            flag = 0;
            if (year % 400 == 0)
            {
                flag = 1;
            }
        }
    }
    else
    {
        flag = 0;
    }

    if (flag)
    {
        printf("Leap year. \n");
    }
    else
    {
        printf("Not a leap year. \n");
    }
    return 0;
}

/*
Step 1: If year divisible by 4 - Leap Year
Step 2: If divisible by 100 - Not a leap year
 Step 3: If divisible by 400 - Leap year
 */

