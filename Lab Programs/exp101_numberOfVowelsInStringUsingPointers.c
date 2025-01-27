/*
Program to count the number of vowels in a string using pointers.
String must be declared using pointer notation and not the array notation.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int vowCount = 0;
    char vowArray[5] = {'a', 'e', 'i', 'o', 'u'};
    char *string = malloc(50 * sizeof(char));    // 50 memory blocks of 'char' size ('char' size = 1 byte)
    printf("Enter string (Max. 50 characters): ");
    gets(string);

    // Count number of vowels
    for (int i = 0; i < strlen(string); i++) {
        for (int j = 0; j < 5; j++) {
            if (tolower(*(string + i)) == *(vowArray + j)) {
                vowCount ++;
            }
        }
    }

    // Output
    printf("There are %d vowels. \n", vowCount);


    return 0;
}

/*
Note:
'malloc()' from 'stdlib.h' (For dynamic memory allocation &
'strlen()' from 'string.h' (For string functions)
'tolower()' from 'ctype.h' (For character type functions)
*/

