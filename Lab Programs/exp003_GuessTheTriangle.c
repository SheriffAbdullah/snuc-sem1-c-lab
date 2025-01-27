/* Check whether triangle is scalene, isosceles or equilateral using side lengths */

#include <stdio.h>

int main() {
    int s1 , s2, s3;
    printf("Enter length of side 1: ");
    scanf("%d", &s1);   // Do not forget &<varname> in scanf function
    printf("Enter length of side 2: ");
    scanf("%d", &s2);
    printf("Enter length of side 3: ");
    scanf("%d", &s3);

    if (s1 == s2 && s2 == s3)
    {
        printf("Equilateral triangle.");
    }
    else
    {
        if ((s1 == s2 && s2 != s3) || (s2 == s3 && s3 != s1) || (s3 == s1 && s1 != s2))
        {
            printf("Isosceles triangle.");
        }
        else
        {
            printf("Scalene triangle.");
        }
    }
}

// && - Logical AND
// || - Logical OR

/*
Scalene - No sides of triangle are equal
Isosceles - Two sides of triangle are equal
Equilateral - All sides of triangle are equal
 */
