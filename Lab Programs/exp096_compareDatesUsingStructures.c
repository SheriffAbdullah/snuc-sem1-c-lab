/*
Program to create a structure to store date (date, month and year) and
compare 2 dates to find if they are the same day or different.
*/

#include <stdio.h>

struct date
{
    int date;
    int month;
    int year;
};

int main() {
    struct date date1;
    printf("*** Date - 1 *** \n");
    printf("Enter day: ");
    scanf("%d", &date1.date);
    printf("Enter month: ");
    scanf("%d", &date1.month);
    printf("Enter year: ");
    scanf("%d", &date1.year);

    struct date date2;
    printf("*** Date - 2 *** \n");
    printf("Enter day: ");
    scanf("%d", &date2.date);
    printf("Enter month: ");
    scanf("%d", &date2.month);
    printf("Enter year: ");
    scanf("%d", &date2.year);

    // Compare day, month & year
    if (date1.date == date2.date && date1.month == date2.month && date1.year == date2.year) {
        // Output
        printf("They are the same date. \n");
    } else {
        printf("They are different dates. \n");
    }

    return 0;
}

/*
Note:
scanf("%s", <string_name>);
For 'scanf()' with string format specifier, '&' -> Not required. String name is a Pointer variable (stores address).
*/
