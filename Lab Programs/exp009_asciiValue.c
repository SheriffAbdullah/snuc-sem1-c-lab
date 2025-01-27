/* Print ASCII values of a given character */

#include <stdio.h>

int main() {
    char input_char;
    printf("Enter a character: ");
    scanf("%c", &input_char);    // 'char' datatype input -> '%c'
    int ascii_val = input_char;    // Integer value of input char
    printf("The ASCII value is %d. \n", ascii_val);
    return 0;
}
