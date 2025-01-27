/*
Function to find if a triangle is isosceles, scalene or equilateral given it's three sides.
*/

#include <stdio.h>

int triangleType(int side1, int side2, int side3)
{
    if (side1 == side2 || side2 == side3 || side3 == side1)
    {
        if (side1 == side2 && side1 == side3 && side2 == side3)
        {
            return 3;    // Equilateral triangle
        }
        else
        {
            return 2;    // Isosceles triangle
        }
    }
    else
    {
        return 1;    // Scalene triangle
    }
}

int main()
{
    int side_array[3] = {0};
    int side;

    // Input
    for (side = 0; side < 3; side++)
    {
        printf("Enter length of side - %d: ", side + 1);
        scanf("%d", &side_array[side]);
    }

    int triangle = triangleType(side_array[0], side_array[1], side_array[2]);

    if (triangle == 1)
    {
        printf("Triangle is scalene. \n");
    }
    else if (triangle == 2)
    {
        printf("Triangle is isosceles. \n");
    }
    else {
        printf("Triangle is equilateral. \n");
    }

    return 0;
}
