/*
Your program to display the following menu of alternatives:
Please type 1 for "first class"
Please type 2 for "economy"
If the person types 1, assign a seat in the first class section (seats 1–5).
If the person types 2, assign a seat in the economy section (seats 6–10).
Print a boarding pass indicating the person's seat number and whether it’s in the first class or economy section of the plane.
1D  array to represent the seating chart of the plane.
Initialize all elements to 0 to indicate that all seats are empty.
As each seat is assigned, set corresponding element of the array to 1 to indicate that the seat is no longer available.
Never assign a seat that has already been assigned. When the first class section is full,
ask the person if it’s acceptable to be placed in the economy section (and vice versa).
If yes, then make the appropriate seat assignment.
If no, then print the message "Next flight leaves in 3 hours."
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    // Display info
    printf("*** Welcome to Shiv Nadar Airlines! *** \n");
    printf("\n_____ Seat Numbers _____ \n");
    printf("First Class: 1 - 5 \n");
    printf("Economy    : 6 - 10 \n");
    printf("------------------------ \n");

    // Input
    int seatArray[11] = {0};
    int numOfPassengers;
    printf("Enter number of passengers: ");
    scanf("%d", &numOfPassengers);
    if (numOfPassengers > 10)
    {
        printf("Invalid input. Only 10 seats are available. \n");
        printf("Program ended. \n");
        exit(1);
    }

    // Seat selection
    int seatClass;
    char passengerName[30] = "";
    int i, j;
    int econToFirst, firstToEcon;

    for (i = 0; i < numOfPassengers; i++)
    {
        printf("\nEnter first name: ");
        scanf("%s", passengerName);

        printf("*** Options Menu *** \n");
        printf("1. First Class \n");
        printf("2. Economy \n");
        retry:
        printf("Enter option: ");
        scanf("%d", &seatClass);

        if (seatClass == 1)
        {
            firstClass:
            for (j = 0; j < 5; j++)
            {
                if (seatArray[j] == 0)
                {
                    seatArray[j] = 1;
                    printf("\n******** Boarding Pass ******** \n");
                    printf("Name       : %s \n", passengerName);
                    printf("Seat number: %d \n", j + 1);
                    printf("Class      : First Class \n");
                    printf("******************************* \n");
                    goto nextProcess_a;
                }
            }
            printf("Sorry, all seats are empty in First Class. \n");

            printf("Do you wish to fly in Economy? (Yes - '1' & No - '2'): ");
            scanf("%d", &firstToEcon);

            if (firstToEcon == 1)
            {
                goto economy;
            }
            else
            {
                printf("The next flight leaves in 2 hours. Please try later. \n");
            }

            nextProcess_a:
            continue;
        }
        else if (seatClass == 2)
        {
            economy:
            for (j = 5; j < 10; j++)
            {
                if (seatArray[j] == 0)
                {
                    seatArray[j] = 1;
                    printf("\n******** Boarding Pass ******** \n");
                    printf("Name       : %s \n", passengerName);
                    printf("Seat number: %d \n", j + 1);
                    printf("Class      : Economy \n");
                    printf("******************************* \n");
                    printf("\n");
                    goto nextProcess_b;
                }
            }
            printf("Sorry, all seats are full in Economy. \n");

            printf("Do you wish to fly in First Class? (Yes - '1' & No - '2'): ");
            scanf("%d", &econToFirst);

            if (econToFirst == 1)
            {
                goto firstClass;
            }
            else
            {
                printf("The next flight leaves in 2 hours. Please try later. \n");
                printf("\n");
            }

            nextProcess_b:
            continue;
        }
        else
        {
            printf("Please enter a valid input. \n");
            printf("\n");
            goto retry;
        }

    }

    printf("Program ended. \n");
    return 0;
}
