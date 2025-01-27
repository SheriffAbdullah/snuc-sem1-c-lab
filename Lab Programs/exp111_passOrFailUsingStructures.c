/*
Program to read 'N' records of students and find out how many of them have passed.
The fields are students' roll number, name, total_mark and result.
Evaluate the result as follows: If total_mark>35, result="Pass" else "Fail".
*/

#include <stdio.h>
#include <string.h>

typedef struct Student {
    int rollNum;
    char name[30];
    float total_mark;
    char result[4];
} STDNT;

int main() {
    // Input
    int N;    // N = Number of students
    printf("Enter number of students: ");
    scanf("%d", &N);

    STDNT student[N];
    int i;

    for (i = 0; i < N; i++) {
        printf("\n*** Student - %d *** \n", i + 1);
        printf("Enter roll number: ");
        scanf("%d%*c", &student[i].rollNum);
        printf("Enter name: ");
        gets(student[i].name);
        printf("Enter total mark: ");
        scanf("%f%*c", &student[i].total_mark);
    }

    // Compute result - pass or fail
    for (i = 0; i < N; i++) {
        if (student[i].total_mark > 35) {
            strcpy(student[i].result, "PASS");
        }
        else {
            strcpy(student[i].result, "FAIL");
        }
    }

    // Output
    printf("\n*** Student Results *** \n");

    for (i = 0; i < N; i++) {
        printf("%d. %s - %s \n", i + 1, student[i].name, student[i].result);
    }

    return 0;
}

/*
Structure syntax:

struct <structure_tag> {    // Structure name (a.k.a) structure tag
    // Variables inside structures are called 'members' or 'fields'.
    <member_variable_datatype> <member_variable_name>;
    ...
}

For example,

struct Book {
    char bookName[50];
    char authorName[30];
    int price;
} [<variable1>, <variable2>...];    // ';' (semicolon) is important

[ ] = Optional. If structure variables (struct <struct_name> <struct_var_name>) are declared
within the structure definition as shown above in structure 'Book', then definition of other structure variables
of that structure outside the definition is Invalid.

As per convention, use title case for structure tag (First letter -> Caps).
*/

