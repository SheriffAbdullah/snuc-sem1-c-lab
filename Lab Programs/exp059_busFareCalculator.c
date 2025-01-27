/*
Bus fare calculator:
You are provided with an array with the following details:
stops =['T','K','N','S','A','G','L']
where : 'T' - 'Tiruporur', 'K'-'Kelambakkam', 'N' - 'Navalur', 'S' - 'Shollinganallur', 'A' - 'Adyar',
'G' - 'Guindy', 'L'- 'Little mount'.

Assume the distance between two consecutive stops as 5kms.
(For example, distance between Tiruporur and Navalur is 10 kms).
 
You are also provided with a string as below:
coupons="10OFF"

Get source and destination from the user and calculate the distance to be travelled.
Source and destination can take any of the values from the array ‘stops’ mentioned above.
Get the number of tickets also as input. Now according to the distance and no of tickets,
the fare has to be calculated as follows:

Distance ( in kms) | Rate per ticket(in Rs)
0 to 5             |         10
6 to 10            |         20
11 to 15           |         30
16 to 20           |         40


If the distance to be travelled is more than 10 kms, ask the user to enter coupon code if he has any.

Create a function to validate the coupon using the coupon string as mentioned above.
If the coupon is valid, provide 10 percent discount on total fare and display the final amount
to be paid by the user.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int validateCoupon(char inputCoupon[])
{
    char coupon[10] = "10OFF";
    return strcmp(inputCoupon, coupon);
}

int main()
{
    // Print bus stops
    char stops[10] = {'T','K','N','S','A','G','L'};

    printf("*** BUS FARE CALCULATOR *** \n");
    printf("\n*** BUS STOPS *** \n");
    printf("Tiruporur (T) \n");
    printf("Kalavakkam (K) \n");
    printf("Navalur (N) \n");
    printf("Sholinganallur (S) \n");
    printf("Adyar (A) \n");
    printf("Guindy (G) \n");
    printf("Little Mount (L) \n");

    // Input
    char charStartPoint[50], charEndPoint[50];
    int startPoint, endPoint;
    int numOfTickets, reInput = 0;
    int stop, invalid;

    while (reInput == 0)
    {
        printf("\nEnter start point (T, K, N, S, A, G, L): ");
        scanf("%s", charStartPoint);
        
        printf("Enter destination (T, K, N, S, A, G, L): ");
        scanf("%s", charEndPoint);
        
        // Capitalise start and end point
        charStartPoint[0] = toupper(charStartPoint[0]);
        charEndPoint[0] = toupper(charEndPoint[0]);
        
        // Index number of bus stops
        for (stop = 0; stop < 7; stop++)
        {
            if (charStartPoint[0] == stops[stop])
            {
                
                startPoint = stop + 1;
                reInput = 1;
                invalid = 0;
                break;
            }
            else
            {
                invalid = 1;
                continue;
            }
        }
        
        for (stop = 0; stop < 7; stop++)
        {
    
            if (charEndPoint[0] == stops[stop])
            {
                endPoint = stop + 1;
                reInput = 1;
                invalid = 0;
                break;
            }
            else
            {
                invalid = 1;
                continue;
            }
        }

        if (invalid == 1)
        {
            printf("Invalid input. Please try again with a valid bus stop. \n");
            reInput = 0;
        }
        else if (strlen(charStartPoint) > 1 || strlen(charEndPoint) > 1 || strlen(charStartPoint) < 1 || strlen(charEndPoint) < 1)
        {
            printf("Invalid input. Please enter a single character (Eg. T). \n");
            reInput = 0;
        }
        else if (startPoint == endPoint)
        {
            printf("Start and end point need to be different. Please try again. \n");
            reInput = 0;
        }
        else if (startPoint > 7 || endPoint > 7 || startPoint < 1 || endPoint < 1)
        {
            printf("Invalid bus stop(s). Please try again. \n");
            reInput = 0;
        }
        else
        {
            reInput = 1;
        }
    }

    // Calculate fare
    // Total Fare = Fare (acc. to distance) * Number of Tickets
    int distance = 5 * abs(startPoint - endPoint);


    ticket:
    printf("\nEnter number of tickets required: ");
    scanf("%d", &numOfTickets);

    if (numOfTickets > 40)
    {
        printf("Total number of seats in a bus is 40. Please try again. \n");
        goto ticket;
    }

    float fare = 0;
    if (distance > 0 && distance <= 5)
    {
        fare = 10;
    }
    else if (distance > 5 && distance <= 10)
    {
        fare = 20;
    }
    else if (distance > 10 && distance <= 15)
    {
        fare = 30;
    }
    else if (distance > 15 && distance <= 20)
    {
        fare = 40;
    }
    else if (distance > 20 && distance <= 25)
    {
        fare = 50;
    }
    else if (distance > 25 && distance <= 30)
    {
        fare = 60;
    }

    fare *= numOfTickets;

    // Discount coupon
    char couponChoice[10] = "";
    char couponInput[10] = "";

    if (distance > 10)
    {

        coupon:
        printf("Do you wish to use a coupon to avail 10 %% discount? (1 - Yes / 0 - No): ");    // Use '%%' in printf() to display '%'
        scanf("%s", couponChoice);

        if (strcmp(couponChoice, "1")  == 0)
        {
            printf("Enter coupon code: ");
            scanf(" %s", couponInput);

            if (validateCoupon(couponInput) == 0)
            {
                // Amount payable = Total Fare - Discount
                fare = fare - (fare * 0.1);
                printf("Coupon applied. \n");
            }
            else
            {
                printf("Coupon is invalid. \n");
                goto coupon;
            }
        }
        else if (strcmp(couponChoice, "0") == 0)
        {
            printf("Coupon skipped. \n");
        }
        else
        {
            printf("Please enter '1' for Yes (or) '0' for No. \n");
            goto coupon;
        }
    }

    // Output
    printf("Total amount payable is Rs. %.2lf /- \n", fare);

    return 0;
}

/*
atoi() - returns integer value of string.

"Hello" - returns 0.
If no integers in string, returns 0.

"0990Hello67" - returns 990.
If integers & char in string, returns only first integer value.
*/

