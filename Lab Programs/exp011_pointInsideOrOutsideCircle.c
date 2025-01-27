/*
Given the coordinates of a point (x,y) find if the point lies inside,
 outside or on the circumference of a circle centered in origin and with radius 'r'.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int x, y, r;
    printf("Enter 'x' coordinate: ");
    scanf("%d", &x);
    printf("Enter 'y' coordinate: ");
    scanf("%d", &y);
    printf("Enter radius 'r' of circle: ");
    scanf("%d", &r);

    int dist_from_origin = pow((pow(x, 2) + pow(y, 2)), 0.5);    // Distance from origin = ((x-0)^2 + (y-0)^2)^(1/2)
    if (dist_from_origin != r)
    {
        if (dist_from_origin > r)
        {
            printf("Point lies outside. \n");
        }
        else
        {
            printf("Point lies inside. \n");
        }
    }
    else
    {
        printf("Point lies on the circle. \n");
    }
    return 0;
}

/*
Distance between two points (x1, y1) & (x2, y2)
dist = ((x2 - x1)^2 + (y2 - y1)^2)^(0.5)
 */

/*
pow() is imported from <math> module 
#include <math.h> -> Pre-processor Directive
 */
