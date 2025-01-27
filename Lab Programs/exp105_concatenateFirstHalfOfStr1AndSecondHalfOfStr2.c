/*
Program to read two strings 'str1' and 'str2' from the user. The size of each string which is entered by the user is allocated dynamically.
A new string 'str3' concatenates the first half of 'str1' and
second half of 'str2'. The size of 'str3' is estimated in runtime and sufficient memory is allocated
dynamically to hold relevant parts of 'str1' and 'str2'.

Note: If length is odd, then the first half is integer part of division by 2 and
second half is length minus integer part (i.e., if length is 5, then first half is 2 chars and
3 chars (i.e., 5-2) is the second half).

Example 1:
Input:
 str1 = "abcde"
 str2 = "wxyz"
Output:
 str3 = "abyz"

Example 2:
Input:
 str1 = "abcd"
 str2 = "vwxyz"
Output:
 str3 = "abxyz"
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Input
    int len1, len2;
    printf("Enter length of first string: ");
    scanf("%d", &len1);
    printf("Enter length of second string: ");
    scanf("%d", &len2);

    // Dynamic memory allocation
    char *str1Ptr = malloc(sizeof(char) * len1);
    char *str2Ptr = malloc(sizeof(char) * len2);
    
    printf("\nEnter first string: ");
    scanf("%s", str1Ptr);
    printf("Enter second string: ");
    scanf("%s", str2Ptr);

    int len3;

    // Length of third string
    if (len2 % 2 == 0) {
        len3 = len1 / 2 + len2 / 2;    // Calculated as (len1 / 2) + (len2 / 2)
    }
    else {
        len3 = len1 / 2 + len2 / 2 + 1;    // Calculated as (len1 / 2) + ((len2 / 2) + 1)
    }

    char *str3Ptr = malloc(sizeof(char) * len3);    // Dynamic memory allocation
    int firstHalf = len1 / 2;
    int secondHalf = len2 / 2;
    int i, j;

    // Append first half of 'str1'
    for (i = 0; i < firstHalf; i++) {
        *(str3Ptr + i) = *(str1Ptr + i);
    }

    // Append second half of 'str2'
    for (i = firstHalf, j = secondHalf; i < len3; i++, j++) {
        *(str3Ptr + i) = *(str2Ptr + j);
    }

    // Output:
    printf("\n*** Output String *** \n");

    for (i = 0; i < len3; i++) {
        printf("%c", *(str3Ptr + i));
    }

    printf("\n");
    
    return 0;
}
