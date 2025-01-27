/*
Program with a recursive function to find LCM of 2 numbers.
*/

#include <stdio.h>

int lcm(int num1, int num2) {
    // Make num1 > num2
    if (num1 < num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    int multiple;

    if (num1 == 1 && num2 == 1)
    {
        return 1;
    }
    else
    {   // Increment 'multiple' & check divisibility of 'num1' & 'num2'
        for (multiple = 2; multiple <= num1; multiple++) {
            // 'num1' & 'num2' divisible by 'multiple'
            if (num1 % multiple == 0 && num2 % multiple == 0) {
                return multiple * lcm(num1/multiple, num2/multiple);
            }
            // 'num1' divisible
            else if (num1 % multiple == 0 && num2 % multiple != 0) {
                return multiple * lcm(num1/multiple, num2);
            }
            // 'num2' divisible
            else if (num1 % multiple != 0 && num2 % multiple == 0) {
                return multiple * lcm(num1, num2/multiple);
            }
        }
    }
}

int main()
{
    printf("*** Least Common Multiple (LCM) Calculator *** \n");

    // Input
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    // Output
    printf("LCM is %d. \n", lcm(num1, num2));
    return 0;
}

/*
Least Common Multiple:
LCM is the smallest possible number 'c' divisible by both 'a' and 'b'.
E.g. LCM of 12 and 16 is 36. (a = 12, b = 16 then c = 36)

Easy Method:
a = 16, b = 40
i) HCF of 16 and 40 is 4.
ii) 16 / 4 = 4.
iii) 40 * 4 = 160.
LCM is 160.
(i.e.)
i) Find HCF of 'a' & 'b'.
ii) Divide either 'a' or 'b' by HCF.
iii) Multiply the other number with the result of (ii) -> LCM
*/



