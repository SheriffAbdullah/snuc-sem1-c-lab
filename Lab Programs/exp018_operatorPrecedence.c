/*
1.	Verify the precedence and associativity of operators in the following expressions:
a.	a=-5+10*2-15+8
b.	a=7==8
c.	a=5<=8&&6!=5
d.	a*=b/=c-=d+=6*2      (a=2, b=4, c=16, d=2)
e.	a%=-b++/5      (a=3, b=11)
f.	a=b++ + ++b   (b=3)
g.	a=b*=c++ + ++d+3  (a=3, b=3, c=2, d=2)
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    // Question 1
    int a = -5 + 10 * 2 - 15 + 8;
    printf("(Q1) a: %d \n", a);
    
/*
a = -5 + 10 * 2 - 15 + 8
a = -5 + 20 - 15 + 8
a = 15 - 7
a = 8
*/

    // Question 2
    a = 7 == 8;
    printf("(Q2) a: %d \n", a);
    
/*
a = 7 == 8
a = 0 (Since 7 != 8 & false = 0)
 */

    // Question 3
    a = 5 < 8 && 6 != 5;
    printf("(Q3) a: %d \n", a);
    
/*
a = 5 < 8 && 6 != 5
a = true && true
a = true = 1
 */


    // Question 4
    a = 2; int b = 4; int c = 16; int d = 2;
    a *= b /=c -= d += 6 * 2;
    printf("(Q4) a: %d, b: %d, c: %d, d: %d \n", a, b, c, d);
    
/*
a *= b /= c -= d += 6 * 2
a *= b /= c -= d += 12
a *= b /= c -= d (d = 14)
a *= b /= c (c = 2, d = 14)
a *= b (b = 2, c = 2, d = 14)
(a = 4, b = 2, c = 2, d = 14)
 */

    // Question 5
    a = 3; b = 11;
    a %= -b ++ / 5;
    printf("(Q5) a: %d, b: %d \n", a, b);
    
/*
a %= - b ++ / 5
a %= - 11 / 5
a %= - 12 / 5 (b = 12)
a %= - 2
a = a % -2
(a = 1, b = 12)
 */

    // Question 6
    b = 3;
    // a = (b++) + (++b);    // Warning: multiple unsequenced modifications to b
    a = 8; b = 5;
    printf("(Q6) a: %d , b: %d \n", a, b);
    
/*
a = b++ + ++b
a = b++ + b (b = 4)
a = 4 + 4 (b = 5)
a = 8
 */

    // Question 7
    a = 3; b = 3; c = 2; d = 2;
    a = b *= c++ + ++d + 3;
    printf("(Q7) a: %d, b: %d, c: %d, d: %d \n", a, b, c, d);
    
/*
a = b *= c++ + ++d + 3
a = b *= c++ + d + 3 (d = 3)
a = b *= c++ + 6
a = b *= 2 + 6
a = b *= 8 (c = 3)
a = b *= 8
a = b (b = 24)
a = 24
(a = 24, b = 24, c = 3, d = 3)
 */

    return 0;
}

