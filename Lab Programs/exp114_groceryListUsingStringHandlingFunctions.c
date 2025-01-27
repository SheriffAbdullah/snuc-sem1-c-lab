/*
Program to maintain a grocery list. The program should enable the user to print the list,
add an item to the list and to delete the whole list.
The list should be saved in a file (.txt).
The name of the file must be given as a command line argument when the program is run.
*/

#include <stdio.h>
#include <string.h>

void displayList(FILE *filePtr) {
    rewind(filePtr);

    while (fgetc(filePtr) != EOF) {
        fseek(filePtr, -1, SEEK_CUR);
        printf("%c", fgetc(filePtr));
    }
}

void addItem(FILE *filePtr) {
    char itemName[100];
    printf("Enter item name: ");
    gets(itemName);

    fseek(filePtr, 0, SEEK_END);
    fputs("- ", filePtr);
    fputs(itemName, filePtr);
    fputc('\n', filePtr);
}

void deleteList(FILE *filePtr, char fileName[]) {
    fclose(filePtr);
    filePtr = fopen(fileName, "w+");
}

int main(int argc, char *argv[]) {
    // File handle
    FILE *filePtr = fopen(argv[1], "w+");

    // Options menu
    printf("*** Grocery List Options *** \n");
    printf("1. Add an item. \n");
    printf("2. Delete grocery list. \n");
    printf("3. Display grocery list. \n");
    printf("0. Quit. \n");

    int option;

    while (1) {
        printf("\nEnter option: ");
        scanf("%d%*c", &option);

        switch(option) {
            case 1:
                addItem(filePtr);
                break;

            case 2:
                deleteList(filePtr, argv[1]);
                break;

            case 3:
                displayList(filePtr);
                break;

            case 0:
                goto end;

            default:
                printf("Please enter a valid input between 0 - 3. \n");
        }
    }

    end:
    printf("\nProgram ended. \n");

    return 0;
}

/*
argc -> ARGument Count (int) stores number of command line arguments
argv -> ARGument Vector (array of character pointers) listing all the arguments

Note:
Eg. ./<exp_name>.out <arg1> <arg2> ...
-> argv[0] = <exp_name>.
*/
