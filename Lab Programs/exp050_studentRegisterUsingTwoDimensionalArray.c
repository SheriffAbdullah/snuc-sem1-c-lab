/*
Program using 2-D arrays to store register number (ranges from 1 to 10) of a student and the marks scored by the
student in maths, physics and chemistry - each row contains the details of 1 student. Calculate the total marks scored
by each student in the three subjects and save it in a new column. Finally, print all the subject marks and total for
each student in the form of a table.
*/

#include <stdio.h>

int main()
{
    // Default array
    int studentArray[11][5] = {{1, 99, 89, 95}, {2, 90, 95, 90}, {3, 80, 80, 90}, {4, 100, 99, 98}, {5, 95, 95, 95}, {6, 75, 70, 85}, {7, 90, 98, 91}, {8, 80, 70, 75}, {9, 60, 70, 75}, {10, 100, 100, 100}};
    int mathMarks, physicsMarks, chemistryMarks;
    int i;

    // Input
    printf("*** Enter Student Details *** \n");

    for (i = 0; i < 10; i++)
    {
        printf("\nStudent Register Number - %d \n", i + 1);
        printf("* Enter marks (out of 100) * \n");
        printf("Mathematics: ");
        scanf("%d", &mathMarks);
        printf("Physics: ");
        scanf("%d", &physicsMarks);
        printf("Chemistry: ");
        scanf("%d", &chemistryMarks);

        studentArray[i][0] = mathMarks;
        studentArray[i][1] = physicsMarks;
        studentArray[i][2] = chemistryMarks;
        studentArray[i][3] = chemistryMarks + mathMarks + physicsMarks;
    }

    // Output
    printf("\n*** Student Details *** \n");
    printf("_________________________________________________________________________ \n");
    printf("| Register Number | Mathematics | Physics       | Chemistry | Total     | \n");
    printf("------------------------------------------------------------------------- \n");

    for (i = 0; i < 10; i++)
    {
        printf("| %d\t\t  | %d\t        | %d\t        | %d\t    | %d\t|\n", i + 1, studentArray[i][0], studentArray[i][1], studentArray[i][2], studentArray[i][3]);
    }

    printf("------------------------------------------------------------------------- \n");

    return 0;
}

