/*
Program that prints itself
*/

#include <stdio.h>

int main() {
    // File handle
    FILE *filePtr;
    filePtr = fopen("/Users/sheriffabdullah/College @ Shiv Nadar/OneDrive - SSN Trust/CLAB/exp113_programThatPrintsItselfUsingFileHandlingFunctions.c", "r");

    char character;
    int charCount = 0;

    // Number of characters in file
    while (getc(filePtr) != EOF) {
        charCount ++;
    }

    rewind(filePtr);    // Move cursor to beginning

    // Print file
    for (int i = 0; i < charCount; i++) {
        character = fgetc(filePtr);
        printf("%c", character);
    }

    return 0;
}

/*
File modes:
r  - Read                 [Cursor: Beginning]
r+ - Read & write         [Cursor: Beginning]
w  - Write                [Cursor: Beginning]
w+ - Write & read         [Cursor: Beginning]
a  - Append = Write       [Cursor: End]
a+ - Append & read        [Cursor: End]

Note:
w, w+, a & a+ - If file does not exist -> Creates a new file
w, w+ - Truncates (erases) all existing data in file
*/
