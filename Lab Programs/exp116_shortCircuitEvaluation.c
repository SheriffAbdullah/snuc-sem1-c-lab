#include <stdio.h>
 
int foo(int n) {
    if (n < 0) {
        printf("Control inside the function. \n");
        printf("Value of 'b' is %d. \n", n);
        return 0;
    }
    else return 1;
 }
   
int main() {
    int a = 5, b = -4, c = 1;
    
    if (c || foo(b))    // Short-circuit evaluation
        printf("%d \n", a);
        
    // Note: '0' -> false & '1' -> true
    
    return 0;
}

/*
Short-circuit evaluation:

In 'OR' Logic ('||'),
If first condition -> true (i.e.) value = 1, then expression -> true 
Second condition -> Not evaluated.
(Any one value needs to be true in 'OR' logic)

In 'AND' Logic ('&&'), 
If first condition -> false (i.e.) value = 0, then expression -> talse 
Second condition -> Not evaluated.
(Both values need to be true in 'AND' logic)
*/
