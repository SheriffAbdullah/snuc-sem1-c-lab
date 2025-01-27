/*
Program using strcpy(), strcmp(), strlen() and strcat().
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char name1[25] = "";
    printf("Enter a name: ");
    scanf("%s", name1);

    printf("That's %lu letters. \n", strlen(name1));    // strlen() returns 'unsigned long' (lu)
    char name2[25] = "";
    printf("Enter another name: ");
    scanf("%s", name2);

    char name3[25] = "";
    strcpy(name3, name1);    // strcpy() - Copy 'name1' to 'name3'
    if (strcmp(name1, name2) == 0)    // strcmp() - Compare 'name1' & 'name2'
    {
        printf("They are the same name. \n");
        printf("The third name can also be %s. \n", name3);
    }
    else
    {
        printf("A different name. \n");
        printf("Together, they look like '%s' \n", strcat(name1, name2));    // strcat() - Concatenate 'name2' to 'name1'
    }

    printf("Program finished. \n");
    return 0;
}
