/* Convert Fahrenheit to Celsius  */

#include <stdio.h>

int main() {
    int fahrenheit;
    printf("Enter temperature (fahrenheit): ");
    scanf("%d", &fahrenheit);
    double celsius = (5.0/9.0)*(fahrenheit - 32);
    printf("Temperature in Celsius = %f degree(s)\n", celsius);
    return 0;
}

/*
Formula: 
 C/100 = (F-32)/180 
 (or) 
 C = (5/9)*(F-32)
 */
