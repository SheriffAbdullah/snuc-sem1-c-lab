/*
Program to add 2 distances given in feet and inches.
Feet and inches must be stored in a structure called distance.
*/

#include <stdio.h>

struct distance
{
    int feet;
    int inches;
};

int main() {
    struct distance d1, d2;

    // Input
    printf("***** Sum of Distances (in feet & inches) Calculator ***** \n");
    printf("*** Distance - 1 *** \n");
    printf("Enter feet value: ");
    scanf("%d", &d1.feet);
    printf("Enter inch value: ");
    scanf("%d", &d1.inches);

    printf("*** Distance - 2 *** \n");
    printf("Enter feet value: ");
    scanf("%d", &d2.feet);
    printf("Enter inch value: ");
    scanf("%d", &d2.inches);

    // Sum of distances
    int feet = (d1.feet + d2.feet) + (d1.inches + d2.inches) / 12;
    int inches = (d1.inches + d2.inches) % 12;

    // Output
    printf("Sum is %d feet and %d inches. \n", feet, inches);

    return 0;
}

/*
Note: 1 feet = 12 inches
('feet' is a standard unit)

Imperial system - Used only in America, Liberia & Myanmar - Use feet, inches, pounds, ounces, etc.
*/

