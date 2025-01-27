/* Program using switch case statement to print the number of days in a given month */

#include <stdio.h>
#include <stdlib.h>

int main() {
	char month[8] = "November";
	printf("Enter the month (lowercase): ");
	scanf("%c", &month);
	printf("%c", month[9]);
	return 0;
}
