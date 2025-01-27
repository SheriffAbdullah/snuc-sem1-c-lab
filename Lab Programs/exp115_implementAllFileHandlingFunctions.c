/*
Program to implement all the file handling functions.
*/

#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("/Users/sheriffabdullah/College @ Shiv Nadar/OneDrive - SSN Trust/CLAB/attendance.txt", "w+");

    // Class name
    fprintf(fptr, "AI & DS - A");
    fputc('\n', fptr);

    // Student names
    int numOfNames;
    printf("Enter number of names: ");
    scanf("%d%*c", &numOfNames);
    char name[30];

    for (int i = 0; i < numOfNames; i++) {
        printf("Enter name [%d]: ", i + 1);
        gets(name);
        fprintf(fptr, "%d. %s \n", i + 1, name);
    }

    char string[100];

    // Print first student's name
    fseek(fptr, 12, SEEK_SET);    // Move cursor 'in front' by '20' characters from 'beginning' (SEEK_SET)
    fscanf(fptr, "%*d. %s", string);
    printf("\nFirst student's name is %s. \n", string);

    // Print class name
    printf("Class name: ");
    rewind(fptr);    // Bring cursor to beginning of file

    while (fgetc(fptr) != '\n') {
        fseek(fptr, -1, SEEK_CUR);
        printf("%c", fgetc(fptr));
    }
    printf("\n");

    // Print position of cursor
    fseek(fptr, 0, SEEK_END);    // Bring cursor to end of file
    long int curPos = ftell(fptr);
    printf("Cursor position: %ld \n", curPos);

    fclose(fptr);
    printf("\nProgram ended. \n");

    return 0;
}

/*
File handling functions:

1. fopen("<file_name>.<extension", "<file_mode>")                        - opens new or existing file.
2. fprintf(<file_ptr>, "<text/format_specifier>"[, <arg1>, <arg2>, ...]) - write data into the file.
3. fscanf(<file_ptr>, "<text/format_specifier>"[, <arg1>, <arg2>, ...])  - reads data from the file.
4. fputc(<char>, <file_ptr>)                                             - writes a character into the file.
5. fgetc(<file_ptr>)                                                     - reads & returns a character from file
6. fclose(<file_ptr>)                                                    - closes the file.
7. fseek(<file_ptr>, <num_of_bytes>, SEEK_SET/SEEK_CUR/SEEK_END)         - sets the file pointer to given position.
8. fputw()                                                               - writes an integer to file [Legacy].
9. fgetw()                                                               - reads an integer from file [Legacy].
10. ftell(<file_ptr>)                                                    - returns current position.
11. rewind(<file_ptr>)                                                   - sets the file pointer to the beginning of the file.

Legacy - used in older C compilers. Not in use anymore.
*/
