/*
Program to reverse a string in place i.e., the original string should be reversed.
The original string should be passed to a void function named strRev( ) with appropriate argument type.
The string length can be a maximum of 32 characters.
Do not use a separate string to store it in reverse. Use the original string itself.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(char *ptr1, char *ptr2) {
    char temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

// Reverse string 'in place'
void strRev(char *string) {
    int i;

    // Swap 'i'th and 'strlen(string) - (i - 1)'th element
    // Eg. If strlen(string) = 8 (even) -> Swap index 0 & 7, 1 & 6, 2 & 5 and 3 & 4
    // If strlen(string) is odd, middle character is retained
    for (i = 0; i < strlen(string) / 2; i++) {
        swap((string + i), (string + (strlen(string) - i - 1)));
    }
}

int main() {

    // Input
    char string[32];
    printf("Enter string (Maximum - 32 characters): ");
    scanf("%s", string);

    // Check string length
    if (strlen(string) > 32) {
        printf("String length must not exceed 32 characters. \nProgram terminated. \n");
        exit(0);    // Requires <stdlib.h>. Syntax: exit(<exit_code_to_be_displayed_after_termination>)
    }

    printf("Original string: %s \n", string);

    // Reverse string
    strRev(string);

    // Output
    printf("Reversed string: %s \n", string);

    return 0;
}

