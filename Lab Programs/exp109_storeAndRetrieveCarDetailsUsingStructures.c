/*
Create an array of structures to store information related to cars. The member variables are:

Model No
Model name
Colour
Fuel Type (Petrol/Diesel/Electric)
Transmission type (Automatic/manual)
Average Mileage
Price

a) On input of model no., program must print the details of the car.
b) Print the cars which cost more than Rs. 1000000.
*/

#include <stdio.h>

struct Car {
    int modelNum;    // 8-digit number
    char modelName[50];
    char colour[20];
    char fuelType[10];
    char transmission[10];
    int avgMileage;
    float price;    // In INR (Indian rupee)
};

int main() {
    // Input
    int numOfCars;
    printf("Enter number of cars: ");
    scanf("%d", &numOfCars);

    struct Car car[numOfCars];    // Array of structures

    for (int i = 0; i < numOfCars; i++) {
        printf("\n** Car - %d ** \n", i + 1);
        printf("Enter model number: ");
        scanf("%d%*c", &car[i].modelNum);

        printf("Enter model name: ");
        gets(car[i].modelName);

        printf("Enter colour: ");
        gets(car[i].colour);

        printf("Enter fuel type (Petrol / Diesel / Electric): ");
        gets(car[i].fuelType);

        printf("Enter transmission type (Manual / Automatic): ");
        gets(car[i].transmission);

        printf("Enter average mileage (km/l): ");
        scanf("%d", &car[i].avgMileage);

        printf("Enter price: ");
        scanf("%f%*c", &car[i].price);
    }

    // Print car details on input of model number
    int modelNum;
    printf("\nEnter model number to search: ");
    scanf("%d%*c", &modelNum);

    int flag = 1;

    for (int i = 0; i < numOfCars; i++) {
        if (modelNum == car[i].modelNum) {
            flag = 0;
            printf("\n*** Car Details *** \n");
            printf("Model number = %d \n", car[i].modelNum);
            printf("Model name = %s \n", car[i].modelName);
            printf("Colour = %s \n", car[i].colour);
            printf("Fuel type = %s \n", car[i].fuelType);
            printf("Transmission type = %s \n", car[i].transmission);
            printf("Average mileage: %d [km/l] \n", car[i].avgMileage);
            printf("Price: Rs. %.2f \n", car[i].price);
            break;
        }
        else {
            continue;
        }
    }

    if (flag == 1) {
        printf("Car with model number '%d' not found. \n", modelNum);
    }

    // Print cars that cost more than Rs. 10,00,000 (ten lakhs)
    printf("\nCars that cost more than Rs. 10,00,000/- (Ten Lakhs) are: \n");
    printf("Model Number | Model Name \n");
    flag = 1;

    for (int i = 0; i < numOfCars; i++) {
        if (car[i].price > 1000000) {
            flag = 0;
            printf("%d     | %s \n", car[i].modelNum, car[i].modelName);
        }
        else {
            continue;
        }
    }

    if (flag == 1) {
        printf("      -      |     -     \n");
    }

    printf("\nProgram ended. \n");

    return 0;
}
