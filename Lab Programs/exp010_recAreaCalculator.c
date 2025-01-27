/*
Given the length and breadth, write a program to calculate:
a. Area of the rectangle
b. Calculate the length of side of square having same area as that of the rectangle
c. Calculate the radius of the circle having the same area as that of the rectangle.
 */

#include <stdio.h>
#include <math.h>

int main() {
    int rec_length, rec_breadth, rec_area;
    printf("*** Rectangle Dimensions *** \n");
    printf("Enter the length: ");
    scanf("%d", &rec_length);
    printf("Enter the breadth: ");
    scanf("%d", &rec_breadth);
    rec_area = rec_length * rec_breadth;
    double pi = 3.14159265;
    double sq_side = pow(rec_area, 0.5);    // Area of Square = side * side = (side)^2
    double cir_radius = pow((rec_area / pi), 0.5);    // Area of circle = pi * radius * radius = pi * (radius)^2
    printf("Area of rectangle = %d \n", rec_area);
    printf("Length of side of square with similar area = %f \n", sq_side);
    printf("Length of radius of circle with similar area = %f \n", cir_radius);
    return 0;
}
