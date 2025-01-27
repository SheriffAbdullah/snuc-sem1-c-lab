/*
Program using structures to manage student information.
For each student, maintain the following information:
roll no
name
mark1
mark2
mark3
average_marks

Get the details from the user and calculate each student's average mark.
Also calculate class average which is average of all the students' averages.
*/

#include <stdio.h>

struct
{
    int rollNum;
    char name[30];
    int mark1;
    int mark2;
    int mark3;
    float avgMark;
} s1, s2, s3, s4, s5;    // Fixed structure variables. New variables -> Not allowed.

int main() {
    // Input
    printf("***** Enter Student Details ***** \n");

    printf("*** Student - 1 *** \n");
    printf("Enter roll number: ");
    scanf("%d", &s1.rollNum);
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter mark - 1 (Max. 100): ");
    scanf("%d", &s1.mark1);
    printf("Enter mark - 2 (Max. 100): ");
    scanf("%d", &s1.mark2);
    printf("Enter mark - 3 (Max. 100): ");
    scanf("%d", &s1.mark3);

    printf("*** Student - 2 *** \n");
    printf("Enter roll number: ");
    scanf("%d", &s2.rollNum);
    printf("Enter name: ");
    scanf("%s", s2.name);
    printf("Enter mark - 1 (Max. 100): ");
    scanf("%d", &s2.mark1);
    printf("Enter mark - 2 (Max. 100): ");
    scanf("%d", &s2.mark2);
    printf("Enter mark - 3 (Max. 100): ");
    scanf("%d", &s2.mark3);

    printf("*** Student - 3 *** \n");
    printf("Enter roll number: ");
    scanf("%d", &s3.rollNum);
    printf("Enter name: ");
    scanf("%s", s3.name);
    printf("Enter mark - 1 (Max. 100): ");
    scanf("%d", &s3.mark1);
    printf("Enter mark - 2 (Max. 100): ");
    scanf("%d", &s3.mark2);
    printf("Enter mark - 3 (Max. 100): ");
    scanf("%d", &s3.mark3);

    printf("*** Student - 4 *** \n");
    printf("Enter roll number: ");
    scanf("%d", &s4.rollNum);
    printf("Enter name: ");
    scanf("%s", s4.name);
    printf("Enter mark - 1 (Max. 100): ");
    scanf("%d", &s4.mark1);
    printf("Enter mark - 2 (Max. 100): ");
    scanf("%d", &s4.mark2);
    printf("Enter mark - 3 (Max. 100): ");
    scanf("%d", &s4.mark3);

    printf("*** Student - 5 *** \n");
    printf("Enter roll number: ");
    scanf("%d", &s5.rollNum);
    printf("Enter name: ");
    scanf("%s", s5.name);
    printf("Enter mark - 1 (Max. 100): ");
    scanf("%d", &s5.mark1);
    printf("Enter mark - 2 (Max. 100): ");
    scanf("%d", &s5.mark2);
    printf("Enter mark - 3 (Max. 100): ");
    scanf("%d", &s5.mark3);

    // Individual Average Marks = Average of students' individual marks
    s1.avgMark = (s1.mark1 + s1.mark2 + s1.mark3) / 3;
    s2.avgMark = (s2.mark1 + s2.mark2 + s2.mark3) / 3;
    s3.avgMark = (s3.mark1 + s3.mark2 + s3.mark3) / 3;
    s4.avgMark = (s4.mark1 + s4.mark2 + s4.mark3) / 3;
    s5.avgMark = (s5.mark1 + s5.mark2 + s5.mark3) / 3;

    // Class average mark = Average of all students' averages
    float classAvgMark = (s1.avgMark + s2.avgMark + s3.avgMark + s4.avgMark + s5.avgMark) / 5;

    // Output
    printf("The class average mark is %.2f.", classAvgMark);

    return 0;
}

