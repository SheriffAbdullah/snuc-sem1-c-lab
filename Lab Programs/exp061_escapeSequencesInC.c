/*
Program to print all escape sequences in C
*/

#include <stdio.h>

int main() {
    // Print escape sequences against their names
    printf("Single Quotes - \'\' and Double Quotes - \"\" \n");
    printf("Question Mark - \? \n");
    printf("Backslash - \\ \n");
    printf("ASCII Bell - \a It makes a bell sound in most terminals. \n");
    printf("Backspace - deletes preceeding character.-\b \n");
    printf("Form Feed - Indents text.\n\f(Is a bit obsolete nowadays) \n");
    printf("Newline - \nIt moves the cursor to a new line. \n");
    printf("carriage Return - \rCarriage Return - ");
    printf("Moves cursor to beginning of sentence and overwrites with characters after it. \n");
    printf("Vertical Tab -\vMoves cursor to the next sentence with spaces equivalent to characters before it. \n");
    printf("Horizontal Tab - Moves cursor 4 spaces like\tthis. \n");
    printf("Octal Value (133) - \133 \n");
    printf("Hexadecimal Value (24) - \x24 \n");
    printf("Unicode Character (4431) - \u4431 \n");

    return 0;
}
