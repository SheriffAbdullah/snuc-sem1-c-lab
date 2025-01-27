/*
Program with pointers to check if a given string is a palindrome or not.
*/

#include <stdio.h>
#include <string.h>

// Return '0' if same & '1' if not same
char compare(char *ptr1, char *ptr2) {
    if (*ptr1 == *ptr2) {
        return 0;
    }
    else {
        return 1;
    }
}

void lower(char *ptr) {
    if (*ptr >= 65 && *ptr < 90) {
        // 65 - 90 (inclusive range) -> Capital / uppercase letters
        // 97 - 122 (inclusive range) -> lowercase letters
        *ptr += 32;
    }
}

int main () {
    // Input
    char string[100];
    printf("Enter string: ");
    scanf("%s", string);
    
    // Lowercase
    int i;
    for (i = 0; i < strlen(string); i++) {
        lower((string+i));
    }

    // Initialise & declare pointers
    char *startPtr = &string[0];
    char *endPtr = &string[strlen(string)-1];

    int palindrome = 0;

    // Compare elements of string
    for (i = 0; i < strlen(string) / 2; i++) {
        if (compare(startPtr, endPtr) == 0) {
            palindrome = 1;
        }
        else {
            printf("Not a palindrome. \n");
            palindrome = 0;
            break;
        }
        startPtr ++; endPtr --;
    }

    // Output
    if (palindrome == 1) {
        printf("A palindrome. \n");
    }

    return 0;
}
