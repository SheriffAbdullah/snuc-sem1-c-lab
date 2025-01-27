/*
Program with a recursive function named 'palindrome' to check if a string is palindrome or not.
The 'palindrome' function itself checks for palindrome and returns '0' or '1'.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Return '0' if string is palindrome or '1' if not
int palindrome(char string[], int strLen) {
	if (strLen == 1) {
		return 0;
	}
	else if (strLen == 2) {
		if (string[0] == string[1]) {
			return 0;
		}
		else {
		 	return 1;
		 }
	}
	else {
                // Compare first and last element
		if (string[0] == string[strLen-1]) {
			return palindrome(string+1, strLen-2);    // (strLen - 1) -> returns last element of string always. Does not return previous element.
		}
		else {
			return 1;
		}
	}
}

int main() {
	// Input
	char string[100];
	printf("Enter string: ");
	scanf("%s", string);

	// Lowercase
	int i;

	for (i = 0; i < strlen(string); i++) {
		// Lowercase
		string[i] = tolower(string[i]);
	}

	// Output
	if (palindrome(string, strlen(string)) == 0) {
		printf("It is palindrome. \n");
	} else {
		printf("It is not palindrome. \n");
	}

	return 0;
}

/*
Note: A recursive function must include a base case. The problem must be reduced step-by-step towards the base case.
*/

