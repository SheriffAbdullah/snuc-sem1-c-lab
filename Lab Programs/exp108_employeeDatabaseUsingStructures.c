/*
Program to store and retrieve employee information using array of structures.
For each employee, the following information is stored:
Employee ID
Name
Date of Birth
Date of Joining
Current Address
Designation
Salary

Date of birth and Date of joining is of type struct Date.
Current Address is of type struct Address.
Appropriate data types for other member variables are used.
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Address {
    char houseNumber[10];
    char street[30];
    char locality[30];
    char city[30];
    int pincode;
};

struct Employee {
    int empID;
    char name[20];
    struct Date dateOfBirth;
    struct Date joinDate;
    struct Address address;
    char desig[30];
    int salary;
};

void printEmp(struct Employee emp) {
    printf("\nEmployee ID: %d \n", emp.empID);
    printf("Name: %s \n", emp.name);
    printf("Date of Birth: %d/%d/%d \n", emp.dateOfBirth.day, emp.dateOfBirth.month, emp.dateOfBirth.year);
    printf("Date of Joining: %d/%d/%d \n", emp.joinDate.day, emp.joinDate.month, emp.joinDate.year);
    printf("Address: %s, %s, %s, %s - %d. \n", emp.address.houseNumber, emp.address.street, emp.address.locality, emp.address.city, emp.address.pincode);
    printf("Designation: %s \n", emp.desig);
    printf("Salary: Rs. %d \n", emp.salary);
}

void displayEnd(int flag, int recCount) {
    if (flag == 1) {
        printf("\nNo records found. \n");
    }
    else {
        printf("\n%d record(s) found. \n", recCount);
    }
}

int main() {
    // Input
    int numOfEmps;
    printf("Enter number of employees: ");
    scanf("%d", &numOfEmps);

    struct Employee emp[numOfEmps];
    int i;

    for (i = 0; i < numOfEmps; i++) {

        // Store employee details
        printf("\n*** Employee - %d *** \n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &emp[i].empID);
        scanf("%*c");

        printf("Enter name: ");
        gets(emp[i].name);

        printf("** Date of Birth ** \n");
        printf("Enter day: ");
        scanf("%d", &emp[i].dateOfBirth.day);
        printf("Enter month: ");
        scanf("%d", &emp[i].dateOfBirth.month);
        printf("Enter year: ");
        scanf("%d", &emp[i].dateOfBirth.year);

        printf("** Date of Joining ** \n");
        printf("Enter day: ");
        scanf("%d", &emp[i].joinDate.day);
        printf("Enter month: ");
        scanf("%d", &emp[i].joinDate.month);
        printf("Enter year: ");
        scanf("%d", &emp[i].joinDate.year);
        scanf("%*c");

        printf("** Current Address ** \n");

        printf("Enter house number: ");
        gets(emp[i].address.houseNumber);

        printf("Enter street name: ");
        gets(emp[i].address.street);

        printf("Enter locality: ");
        gets(emp[i].address.locality);

        printf("Enter city: ");
        gets(emp[i].address.city);

        printf("Enter pincode: ");
        scanf("%d", &emp[i].address.pincode);
        scanf("%*c");

        printf("Enter designation: ");
        gets(emp[i].desig);

        printf("Enter salary: ");
        scanf("%d", &emp[i].salary);
    }

    // Retrieve employee information
    printf("\n*** Information Retrieval System (IRS) *** \n");
    printf("1. Search by employee ID. \n");
    printf("2. Search by name. \n");
    printf("3. Search by date of birth. \n");
    printf("4. Search by date of joining. \n");
    printf("5. Search by locality. \n");
    printf("6. Search by designation. \n");
    printf("7. Search by salary. \n");
    printf("0. Quit \n");

    int option = 1;
    printf("\nEnter option: ");

    int empID;
    char empName[30];
    int day, month, year;
    char locality[30];
    char desig[30];
    int salary;
    int recCount, flag;

    while (true) {
        printf("\nEnter option: ");
        scanf("%d%*c", &option);

        flag = 1;
        recCount = 0;

        if (option == 1) {
            printf("Enter employee ID: ");
            scanf("%d", &empID);

            for (i = 0; i < numOfEmps; i++) {
                if (emp[i].empID == empID) {
                    recCount ++;
                    printEmp(emp[i]);
                    flag = 0;
                }
            }

            displayEnd(flag, recCount);
        }
        else if (option == 2) {
            printf("Enter name: ");
            gets(empName);

            for (i = 0; i < numOfEmps; i++) {
                if (strcmp(emp[i].name, empName) == 0) {
                    recCount ++;
                    flag = 0;
                    printEmp(emp[i]);
                }
            }

            displayEnd(flag, recCount);
        }
        else if (option == 3) {
            printf("Enter day: ");
            scanf("%d", &day);
            printf("Enter month: ");
            scanf("%d", &month);
            printf("Enter year: ");
            scanf("%d", &year);

            for (i = 0; i < numOfEmps; i++) {
                if (emp[i].dateOfBirth.day == day && emp[i].dateOfBirth.month == month && emp[i].dateOfBirth.year == year) {
                    recCount ++;
                    flag = 0;
                    printEmp(emp[i]);
                }
            }

            displayEnd(flag, recCount);
        }
        else if (option == 4) {
            printf("Enter day: ");
            scanf("%d", &day);
            printf("Enter month: ");
            scanf("%d", &month);
            printf("Enter year: ");
            scanf("%d", &year);

            for (i = 0; i < numOfEmps; i++) {
                if (emp[i].dateOfBirth.day == day && emp[i].dateOfBirth.month == month && emp[i].dateOfBirth.year == year) {
                    recCount ++;
                    flag = 0;
                    printEmp(emp[i]);
                }
            }

            displayEnd(flag, recCount);
        }
        else if (option == 5) {
            printf("Enter locality: ");
            gets(locality);

            for (i = 0; i < numOfEmps; i++) {
                if (strcmp(emp[i].address.locality, locality) == 0) {
                    recCount ++;
                    flag = 0;
                    printEmp(emp[i]);
                }
            }

            displayEnd(flag, recCount);
        }
        else if (option == 6) {
            printf("Enter designation: ");
            gets(desig);

            for (i = 0; i < numOfEmps; i++) {
                if (strcmp(emp[i].desig, desig) == 0) {
                    recCount ++;
                    flag = 0;
                    printEmp(emp[i]);
                }
            }

            displayEnd(flag, recCount);
        }
        else if (option == 7) {
            int recCount = 0;
            printf("Enter salary: ");
            scanf("%d", &salary);

            for (i = 0; i < numOfEmps; i++) {
                if (emp[i].salary == salary) {
                    recCount ++;
                    flag = 0;
                    printEmp(emp[i]);
                }
            }

            displayEnd(flag, recCount);
        }
        else if (option == 0) {
            break;
        }
        else {
            printf("Invalid option. Please enter an option between 1 - 7. \n");
        }
    }

    printf("\nProgram ended. \n");

    return 0;
}

