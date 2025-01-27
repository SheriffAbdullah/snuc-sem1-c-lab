/* Calculate the profit made by a newspaper agency, who sell newspapers every sunday */

#include <stdio.h>

int main() {
    int x = 0;    // Number of copies sold
    int a = 0;    // Price per copy sold by newspaper agency
    int b = 0;    // Cost per copy spent by newspaper agency
    printf("Enter the number of copies sold: ");
    scanf("%d", &x);
    printf("Enter the price per copy: ");
    scanf("%d", &a);
    printf("Enter the cost per copy: ");
    scanf("%d", &b);

    int fixed_cost = 100;    // Cost for storage, delivery, etc. every sunday
    int profit = ((a - b) * x) - fixed_cost;    // (a - b) * x = profit per piece * no. of pieces
    printf("Profit = %d rupee(s)", profit);

}

/*
Price vs Cost

Cost is the amount spent on making a product
Price is the amount for which the product is sold

So, profit = price - cost
*/
