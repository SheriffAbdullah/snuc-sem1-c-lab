/*
Return values of printf() and scanf()
Print and scan various data types. Observations are noted.
*/

#include <stdio.h>

int main() {

    int integer = 5;    // Integer
    float floatingPoint = 4.567;    // Floating-point number
    double doubleNumber = 3.5;    // Double
    char character = 'Z';    // Character
    char string[10] = "String";    // String

    // printf()
    printf("******* printf() ******* \n");
    printf("\n");
    printf("\nReturns: %d \n", printf("%d", integer));
    printf("\nReturns: %d \n", printf("%f", floatingPoint));
    printf("\nReturns: %d \n", printf("%lf", doubleNumber));    // Precision - double (64-bit)  > float (32-bit)
    printf("\nReturns: %d \n", printf("%c", character));
    printf("\nReturns: %d \n", printf("%s", string));    // Print total number of characters in printf("***") [Excluding string format specifier (i.e.) 1 character] + number of characters in string
    int returnValue = printf("123456 abcdef @#$*^&\n");    // Numbers, alphabets and symbols in printf()
    printf("Returns: %d (Note: \\n -> Counted as 1) \n", returnValue);    // %d, %lf, %c, etc. -> Format specifier

    printf("\nReturns: %d \n", printf("%c, %f, %lf", character, floatingPoint, doubleNumber));    // Format specifier & variable + spaces
    printf("\nReturns: %d \n", printf("%d%c%s", 1, 'a', "bcd"));    // Format specifier + no spaces

    printf("\n*** Observation *** \n");
    printf("printf() - returns total number of characters printed. \n");
    printf("Note: Escape sequences (Eg. Newline character) are a single character. \n");
    printf("Total number of characters printed by 'printf(<input>)' is (number of characters in <input> string) + (number of characters in variables) - (format specifiers). \n");

    // scanf()
    printf("\n*** scanf() *** \n");
    printf("\nEnter a number: ");
    printf("Returns: %d \n", scanf("%d", &integer));

    printf("Enter a character: ");
    printf("Returns: %d \n", scanf(" %c", &character));

    printf("Enter a string: ");
    printf("Returns: %d \n", scanf(" %s", string));

    printf("Enter a floating-point number: ");
    printf("Returns: %d \n", scanf(" %f", &floatingPoint));

    printf("Enter values in the format \'<integer> x <double> x <character> x <string>\': ");
    returnValue = scanf(" %d x %f x %c x %s", &integer, &floatingPoint, &character, string);    // Spaces do not matter in scanf()
    printf("Returns: %d \n", returnValue);

    printf("Enter values in the format \'<integer> x <double> x <character> x <string>\': ");
    returnValue = scanf(" %*d x %f x %c x %*s", &floatingPoint, &character);
    printf("Returns: %d \n", returnValue);
    printf("(Suppression character '*' - used in <integer> and <string> format specifier.) \n");
    // Suppression character '*' receives input but does not assign the value

    printf("\n*** Observation ***\n");
    printf("scanf() - returns total number of values which are received and assigned. \n");
    printf("Note: If a value is received and not assigned to a variable (using suppression character '*'), it is not counted. \n");
    printf("If input type does not match format specifier, the input is not received and 0 is returned. \n");

    return 0;
}
