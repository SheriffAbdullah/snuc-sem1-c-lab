/*
Bicycle cost - Rs. a, selling loss - b%. Calculate selling price of bicycle
*/

#include <stdio.h>

int main() {
    int buy_price, loss_percentage;
    printf("Enter price of bicycle: ");
    scanf("%d", &buy_price);
    printf("Enter the loss percentage: ");
    scanf("%d", &loss_percentage);

    double sell_price = buy_price - ((buy_price * loss_percentage) / 100);
    printf("Selling price is Rs. %f \n", sell_price);
    return 0;
}



