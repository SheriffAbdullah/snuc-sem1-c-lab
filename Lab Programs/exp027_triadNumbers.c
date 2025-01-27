/* Program to generate triad numbers */

#include <stdio.h>

int main() {
    int first_num, second_num, third_num;
    printf("*** Printing triads ***\n");

    for (first_num = 100; first_num < 1000; first_num++)
    {
        second_num = 2 * first_num;
        third_num = 3 * first_num;

        // Check for 3-digit or not
        if (second_num > 999 || third_num > 999)
        {
            continue;
        }

        int a1, a2, a3;
        int b1, b2, b3;
        int c1, c2, c3;

        // Digits of first_num
        int first_num_copy = first_num;
        a3 = first_num_copy % 10;
        first_num_copy /= 10;
        a2 = first_num_copy % 10;
        first_num_copy /= 10;
        a1 = first_num_copy;

        // Digits of second_num
        b3 = second_num % 10;
        second_num /= 10;
        b2 = second_num % 10;
        second_num /= 10;
        b1 = second_num;

        // Digits of first_num
        c3 = third_num % 10;
        third_num /= 10;
        c2 = third_num % 10;
        third_num /= 10;
        c1 = third_num;

        // Check for repeated digits
        if (a1 == a2 || a2 == a3 || a1 == a3)
        {
            continue;
        }
        else if (b1 == b2 || b2 == b3 || b1 == b3)
        {
            continue;
        }
        else if (c1 == c2 || c2 == c3 || c1 == c3)
        {
            continue;
        }
        else
        {
            printf("(%d, %d, %d) \n", first_num, first_num * 2, first_num * 3);
        }
    }

    return 0;
}

/*
Triad numbers are 3 numbers (Eg. 139, 278, 417).
- Three digit numbers
- Each digit occurs only once
- 2nd number is 2*(first num), 3rd num is 3*(first num)
 */

