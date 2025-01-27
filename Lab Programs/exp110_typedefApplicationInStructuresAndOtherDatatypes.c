/*
Program to demonstrate the 'typedef' in the context of structures and other data types.
Store book details in a structure with appropriate member variables. Print book's name whose price is less than Rs. 800.
*/

#include <stdio.h>

typedef long int LINT;    // 'LINT' instead of 'long int'

typedef struct Book {
    char name[50];
    char author[30];
    int price;
    LINT serialNum;
} BOOK;

// (or)

/*
struct Book {
    char name[50];
    char author[30];
    int price;
    LINT serialNum;
};

typedef struct Book BOOK;
*/

int main () {
    // Input
    int numOfBooks;
    printf("Enter number of books: ");
    scanf("%d%*c", &numOfBooks);    // '%*c' to read newline character form input after reading an integer. Prevents errors.

    BOOK book[numOfBooks];    // 'Book book[numOfBooks]' instead of 'struct Book book[numOfBooks]'

    for (int i = 0; i < numOfBooks; i++) {
        printf("\n*** Book - %d *** \n", i + 1);
        printf("Enter book name: ");
        gets(book[i].name);
        printf("Enter author name: ");
        gets(book[i].author);
        printf("Enter price: ");
        scanf("%d%*c", &book[i].price);
        printf("Enter serial number: ");
        scanf("%ld%*c", &book[i].serialNum);
    }

    // Output
    int bookCount = 0;
    printf("\n*** Books Below Rs. 800 ***\n");

    for (int i = 0; i < numOfBooks; i++) {
        if (book[i].price < 800) {
            bookCount ++;
            printf("%d. %s \n", i + 1, book[i].name);
        }
    }

    if (bookCount == 0) {
        printf("- \n");
    }

    return 0;
}

/*
'typedef' syntax:
typedef <data_type> <shortened_name>;
E.g. typedef long long float LFLT;

Convention: Name the shortened variables in CAPS.

‘typedef’ w/ structures syntax:

typedef struct <struct_tag> {
    // Variables inside structures are called ‘member’ variables
    <data_type> <var_name>;
    ….
} <shortened_name>;

E.g.
typedef struct Student {
    int rollNum;
    char studName[30];
    int total_marks;
} STDNT;

*/
