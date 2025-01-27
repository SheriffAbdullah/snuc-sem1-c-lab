/*
Program to sort a list of names in alphabetical order.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    // char nameArray[25][25] = {{"Anjana"}, {"Adithi"}, {"Maanya"}, {"Cynddia"}, {"Dharani"}, {"Vaishnavi"},
    // "{Arvind"}, {"Akshat"}, {"Agilan"}, {"Akshay"}, {"Kamalnath"}, {"Abhay"}, {"Aakash"}, {"Abdullah"}};

    int nameCount;

    printf("*** Alphabetical Order Sorting *** \n");
    printf("Enter number of people: ");
    scanf("%d", &nameCount);

    char nameArray[nameCount][20];
    int letter, ascii;
    int name;

    // Input
    for (name = 0; name < nameCount; name++)
    {
        printf("Enter name [%d]: ", name + 1);
        scanf("%s", nameArray[name]);

        for (letter = 0; letter < 25; letter++)
        {
            // De-capitalise
            ascii = nameArray[name][letter];
            if (ascii >= 65 && ascii <= 90)
            {
                nameArray[name][letter] = ascii + 32;
            }
        }
    }

    // Sort names alphabetically
    int i;
    char temp[20] = "";

    // Insertion sort
    for (i = 0; i < nameCount; i++)
    {
        for (name = 0; name < nameCount; name++)
        {
            while (strcmp(nameArray[name], nameArray[name - 1]) < 0)
            {
                // Swap names
                strcpy(temp, nameArray[name - 1]);
                strcpy(nameArray[name - 1], nameArray[name]);
                strcpy(nameArray[name], temp);
            }
        }
    }
    
    /*
    // Bubble sort
    for (i = 0; i < nameCount; i++)
    {
        for (name = 1; name < nameCount; name++)
        {
            if (strcmp(nameArray[name], nameArray[name - 1]) < 0)
            {
                // Swap names
                strcpy(temp, nameArray[name - 1]);
                strcpy(nameArray[name - 1], nameArray[name]);
                strcpy(nameArray[name], temp);
            }
            else
            {
                continue;
            }
        }
    }
    */
    
    // Output
    printf("\n*** Sorted List *** \n");
    
    for (name = 0; name < nameCount; name++)
    {
        nameArray[name][0] -= 32;
        printf("%s \n", nameArray[name]);
    }
    
    printf("\nProgram ended. \n");

    return 0;
}
