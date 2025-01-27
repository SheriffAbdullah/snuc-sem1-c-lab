/*
Program to implement all the file handling functions.
*/

#include <stdio.h>
#include <stdlib.h>

// Returns number of character in file. Retains cursor position.
int fcount(FILE *fptr) {
    int curPos = ftell(fptr);    // Store initial cursor position
    int charCount = 0;
    rewind(fptr);
    
    while (fgetc(fptr) != EOF) {
        charCount ++;
    }
    
    fseek(fptr, curPos, SEEK_SET);    // Restore initial cursor position
    
    return charCount;
}

int main() {
    // Declare & initialise variables
    FILE *fptr;
    
    int numOfStudents, studNum, num;
    int charCount;
    int i;
    
    char string[30], name[30];
    
    // Open file
    fptr = fopen("/Users/sheriffabdullah/College @ Shiv Nadar/OneDrive - SSN Trust/CLAB/implementAllFileHandlingFunctions.txt", "w+");
    fputs("*** AI & DS - A *** \n", fptr);
    
    // Input - Student details
    printf("Enter number of students: ");
    scanf("%d", &numOfStudents);
    
    printf("\n*** Student Details *** \n");
    
    for (i = 0; i < numOfStudents; i++) {
        printf("Enter firstname [%d]: ", i + 1);
        scanf("%s", name);
        
        fprintf(fptr, "%d. %s", i + 1, name);
        fputc('\n', fptr);
    }
    
    // Print class name
    rewind(fptr);
    fgets(string, 21, fptr);
    printf("\nClass name: %s \n", string);
    
    // Search for student using student number
    printf("\nEnter student number to search: ");
    scanf("%d", &studNum);
    
    for (i = 0; i < numOfStudents; i++) {
        fscanf(fptr, "%d. %s \n", &num, name);
        
        if (num == studNum) {
            printf("Student name is %s. \n", name);
        }
        
    }
    
    // Print number of characters
    charCount = fcount(fptr);
    printf("\nThere are %d characters in the text file. \n", charCount);
    
    // Close file
    fclose(fptr);
    
    return 0;
}

/*
File Handling Functions:
fopen().
fclose().
fprintf().
fscanf().
ftell().
fseek().
rewind().
fgetc().
fputc().
fputs().
fgets().
*/


