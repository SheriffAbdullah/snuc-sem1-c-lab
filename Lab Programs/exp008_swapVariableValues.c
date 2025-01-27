/* Swap the value of 2 variables  */

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter value for variable 'a': ");
    scanf("%d", &a);
    printf("Enter value for variable 'b': ");
    scanf("%d", &b);
    int c;    // Dummy variable
    c = b;
    b = a;
    a = c;
    printf("*** Swap Values *** \n");
    printf("Value of variable 'a': %d \n", a);
    printf("Value of variable 'b': %d \n", b);
    return 0;
}
