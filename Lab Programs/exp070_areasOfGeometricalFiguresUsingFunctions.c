/*
Program to calculate the areas of various geometrical figures with a function for each figure.
*/

#include <stdio.h>
#include <math.h>
const float PI = 3.141592;

// 2 - Dimensional geometrical figures

float square() {
    float side;
    printf("Enter length of side: ");
    scanf("%f", &side);
    float area = side * side;
    printf("Area of square is %lf sq. units. \n", area);
    return area;
}

float rectangle() {
    float side1, side2;
    printf("Enter length of side 1: ");
    scanf("%f", &side1);
    printf("Enter length of side 2: ");
    scanf("%f", &side2);
    float area = side1 * side2;
    printf("Area of rectangle is %lf sq. units. \n", area);
    return area;
}

float triangle() {
    float base, height;
    printf("Enter length of base: ");
    scanf("%f", &base);
    printf("Enter length of perpendicular height: ");
    scanf("%f", &height);
    float area = (1/2) * base * height;
    printf("Area of triangle is %lf sq. units. \n", area);
    return area;
}

float circle() {
    float radius;
    printf("Enter length of radius: ");
    scanf("%f", &radius);
    float area = PI * radius * radius;
    printf("Area of circle is %lf sq. units. \n", area);
    return area;
}

float ellipse() {
    float majorAxis, minorAxis;
    printf("Enter length of major axis: ");
    scanf("%f", &majorAxis);
    printf("Enter length of minor axis: ");
    scanf("%f", &minorAxis);
    float area = PI * majorAxis * minorAxis;
    printf("Area of ellipse is %lf sq. units. \n", area);
    return area;
}

float rhombus() {
    float diagonal1, diagonal2;
    printf("Enter length of diagonal 1: ");
    scanf("%f", &diagonal1);
    printf("Enter length of diagonal 2: ");
    scanf("%f", &diagonal2);
    float area = (1/2) * diagonal1 * diagonal2;
    printf("Area of rhombus is %lf sq. units. \n", area);
    return area;
}

float kite() {
    float diagonal1, diagonal2;
    printf("Enter length of diagonal 1: ");
    scanf("%f", &diagonal1);
    printf("Enter length of diagonal 2: ");
    scanf("%f", &diagonal2);
    float area = (1/2) * diagonal1 * diagonal2;
    printf("Area of kite is %lf sq. units. \n", area);
    return area;
}

float trapezium() {
    float side1, side2, height;
    printf("Enter length of side 1: ");
    scanf("%f", &side1);
    printf("Enter length of side 2: ");
    scanf("%f", &side2);
    printf("Enter length of perpendicular height: ");
    scanf("%f", &height);
    float area = (1/2) * height * (side1 + side2);
    printf("Area of trapezium is %lf sq. units. \n", area);
    return area;
}

float parallelogram() {
    float base, height;
    printf("Enter length of base: ");
    scanf("%f", &base);
    printf("Enter length of perpendicular height: ");
    scanf("%f", &height);
    float area = base * height;
    printf("Area of parallelogram is %lf sq. units. \n", area);
    return area;
}

float polygon() {
    float numOfSides, side, apothem;
    printf("Enter number of sides: ");
    scanf("%f", &numOfSides);
    printf("Enter length of side: ");
    scanf("%f", &side);
    printf("Enter length of apothem: ");
    scanf("%f", &apothem);
    float area = (1/2) * side * apothem * numOfSides;
    printf("Area of polygon is %lf sq. units. \n", area);
    return area;
}

// 3 - Dimensional geometrical figures

float cube() {
    float side;
    printf("Enter length of side: ");
    scanf("%f", &side);
    float area = 6 * side * side;
    printf("Area of cube is %lf sq. units. \n", area);
    return area;
}

float cuboid() {
    float length, width, height;
    printf("Enter length: ");
    scanf("%f", &length);
    printf("Enter width: ");
    scanf("%f", &width);
    printf("Enter height: ");
    scanf("%f", &height);
    float area = 2 * ((length * width) + (width * height) + (length * height));
    printf("Area of cuboid is %lf sq. units. \n", area);
    return area;
}

float sphere() {
    float radius;
    printf("Enter length of radius: ");
    scanf("%f", &radius);
    float area = 4 * PI * radius * radius;
    printf("Area of sphere is %lf sq. units. \n", area);
    return area;
}

float hemisphere() {
    float radius;
    printf("Enter length of radius: ");
    scanf("%f", &radius);
    float area = 3 * PI * radius * radius;
    printf("Area of hemisphere is %lf sq. units. \n", area);
    return area;
}

float cylinder() {
    float radius, height;
    printf("Enter length of radius: ");
    scanf("%f", &radius);
    printf("Enter height: ");
    scanf("%f", &height);
    float area =  (2 * PI * radius) * (height + radius);
    printf("Area of cylinder is %lf sq. units. \n", area);
    return area;
}

float cone() {
    float radius, height;
    printf("Enter length of radius: ");
    scanf("%f", &radius);
    printf("Enter perpendicular height: ");
    scanf("%f", &height);
    float area =  (PI * radius * radius) + (PI * radius * sqrt((radius * radius) + (height * height)));
    printf("Area of cone is %lf sq. units. \n", area);
    return area;
}

int main() {
    printf("*** Area of Geometrical Figures *** \n");
    printf("* 2D Shapes * \n");
    printf("Enter '1' for area of a square. \n");
    printf("Enter '2' for area of a rectangle. \n");
    printf("Enter '3' for area of a triangle. \n");
    printf("Enter '4' for area of a circle. \n");
    printf("Enter '5' for area of a ellipse. \n");
    printf("Enter '6' for area of a rhombus. \n");
    printf("Enter '7' for area of a kite. \n");
    printf("Enter '8' for area of a trapezium. \n");
    printf("Enter '9' for area of a parallelogram. \n");
    printf("Enter '10' for area of a polygon. \n");
    printf("* 3D Shapes * \n");
    printf("Enter '11' for area of a cube. \n");
    printf("Enter '12' for area of a cuboid. \n");
    printf("Enter '13' for area of a sphere. \n");
    printf("Enter '14' for area of a hemisphere. \n");
    printf("Enter '15' for area of a cylinder. \n");
    printf("Enter '16' for area of a cone. \n");

    int option;
    printf("Enter an option: ");
    scanf("%d", &option);

    if (option == 1) {
        square();
    } else if (option == 2) {
        rectangle();
    } else if (option == 3) {
        triangle();
    } else if (option == 4) {
        circle();
    } else if (option == 5) {
        ellipse();
    } else if (option == 6) {
        rhombus();
    } else if (option == 7) {
        kite();
    } else if (option == 8) {
        trapezium();
    } else if (option == 9) {
        parallelogram();
    } else if (option == 10) {
        polygon();
    } else if (option == 11) {
        cube();
    } else if (option == 12) {
        cuboid();
    } else if (option == 13) {
        sphere();
    } else if (option == 14) {
        hemisphere();
    } else if (option == 15) {
        cylinder();
    } else if (option == 16) {
        cone();
    }
    else {
        printf("Invalid input. Program ended. \n");
    }
}

/*
Other shapes:
int triangularPrism(int side1, int side2, int side3, int height)
int squarePyramid()
int pentagonalPyramid()
int hexagonalPyramid()
int tetrahedron()
int octahedron()
int icosahedron()
int dodecahedron()
int parallelepiped()
int ellipsoid()
int torus()
int triangularPyramid(int side, )    // Only for regular pyramids
int pentagonalPrism(int side1, int side2, int side3, int side4, int side5, int height)
int hexagonalPrism(int side1, int side2, int side3, int side4, int side5, int side6, int height)
*/

