/*
Program with a function to count the number of special characters present in a string. 
The string must be passed as a parameter.
*/

#include <stdio.h>
#include <string.h>

int specialChar(char *str) {
    if (*(str) == '\0') {    // str -> Address of '0'th index of string
        return 0;
    }
    else {
        // Operator precedence -> Logical NOT (!) > Logical AND (&&) > Logical OR (||)
        if (!(*str >= 48 && *str <= 57 || *str >= 65 && *str <= 90 || *str >= 97 && *str <= 122)) {
            return 1 + specialChar(str + 1);     // (str + 1) -> Address of first index of string
        }
        else {
            return 0 + specialChar(str + 1);
        }
    }
}

int main () {
    // Input
    char string[100];
    printf("Enter string: ");
    scanf("%s", string);

    // Replace '\n' (added by 'scanf()') with '\0'
    string[strlen(string)] = '\0';

    // Output
    printf("Number of special characters is %d. \n", specialChar(string));    

    return 0;
}

/*
Non-alphabetic and nun-numeric characters are known as special characters.
*/
