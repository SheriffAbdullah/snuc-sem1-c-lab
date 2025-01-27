/*
Program to find the roots of a quadratic equation. Function for finding square root is included.
The algorithm for finding square root of a number ‘n’ is as follows:

Step 1: Make a guess (g) (using rand() function)
Step 2: Divide the original number 'n' by 'g'
Step 3: Find the average of 'g' and the quotient obtained in step 2
Step 4: Use the average as the next guess and repeat steps 2 to 4 until the algorithm converges
(when there is not much difference between the previous guess and the current guess).
*/

#include <stdio.h>
#include <stdlib.h>

float squareRoot(float num) {
    int i;
    float average;
    float guessNum = rand();

    for (i = 0; i < 10000; i++) {
        average = ((num / guessNum) + guessNum) / 2;
        guessNum = average;
    }

    return guessNum;
}

// 'num' power 'a' ('a' - whole number)
float power(float num, int a) {
    if (a == 1) {
        return num;
    }
    else {
        return num * power(num, a - 1);
    }
}

int main() {
    // Quadratic Equation (highest power of x is 2) -> ax^2 + bx + c = 0
    float a, b, c;    // a -> Co-efficient of x^2, b -> Co-efficient of x, c -> Co-efficient of 1 (Constant)

    // Input
    printf("*** Root(s) of a Quadratic Equation *** \n");
    printf("Enter co-efficient of x^2: ");
    scanf("%f", &a);
    printf("Enter co-efficient of x: ");
    scanf("%f", &b);
    printf("Enter co-efficient of 1: ");
    scanf("%f", &c);

    int discriminant = power(b, 2) - (4*a*c);    // (b^2 - 4*a*c)

    // Quadratic formula (gives roots of quadratic equation) is -> [-b +/- sqrt(b^2 - 4*a*c)] / 2*a

    if (discriminant == 0) {
        // One real root
        printf("Two real and identical roots exist. \n");
        float root = - b / (2*a);
        printf("The real root is %lf. \n", root);
    } else if (discriminant > 0) {
        // Two distinct real roots
        printf("Two real and distinct roots exist. \n");
        float root1 = (-b - squareRoot(discriminant)) / (2 * a);
        float root2 = (-b + squareRoot(discriminant)) / (2 * a);
        printf("The real roots are %lf and %lf. \n", root1, root2);
    } else {
        // Two complex roots
        printf("No real roots exist. \n");
        discriminant = - discriminant;    // i = sqrt(-1)
        float real = - b / (2 * a);
        float imag = squareRoot(discriminant) / (2 * a);
        printf("The imaginary roots are %lf+(%lf)i and %lf-(%lf)i. \n", real, imag, real, imag);
    }
    
    return 0;
}
