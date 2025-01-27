/* Print the commission amount payable for Demand Draft (D.D.) amount */

#include <stdio.h>

int main() {
    int dd_amount, dd_commission;

    printf("Enter DD amount: ");
    scanf("%d", &dd_amount);

    if (dd_amount <= 5000)
    {
        printf("DD Commission - Rs. 25");
    }
    else if (5000 < dd_amount && dd_amount <= 10000)
    {
        printf("DD Commission - Rs. 50");
    }
    else if (10000 < dd_amount && dd_amount <= 100000)
    {
        dd_commission = (dd_amount / 1000) * 5;
        if (dd_commission < 60)
        {
            dd_commission = 60;
        }
        printf("DD Commission - Rs.%d", dd_commission);
    }
    else if (100000 < dd_amount)
    {
        dd_commission = (dd_amount / 1000) * 4;
        if (dd_commission < 600)
        {
            dd_commission = 600;
        }
        else if (dd_commission > 2000)
        {
            dd_commission = 2000;
        }

        printf("DD Commission - Rs.%d", dd_commission);
    }
}


/* Never use exp1 < exp2 < exp2. (exp1 < exp2) = true - 1/ false - 0 is compared with exp3 */
/*
DD Commission for Rs. 5000 to Rs. 10000 means from Rs. 5001 to Rs. 10000
 */
