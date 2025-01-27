/*
Program to demonstrate the use of ‘break’ and ‘continue’ statements.

Note:
1. The program should contain nested ‘for’ loops to establish the difference
between ‘break’ and ‘continue’ statements.
2. You can design your own problem statements to justify your answer. You
may also use 2D arrays in your program.
3. Name the program as Q3_BreakContinue.c with appropriate comments.

Problem Statement:
- Take 'n' number of words as input from the user.
- If the word contains 5 or more vowels, print the word and the number of vowels in the word.
- If a word containing 'z' is found:-
i) Print 'z'.
ii) Stop iterating through trailing characters in that word.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char wordArray[20][100] = {""};
    char vowelArray[5] = {'a', 'e', 'i', 'o', 'u'};
    int i, word, letter, vowelCount, numOfWords;

    printf("Enter number of words: ");
    scanf("%d", &numOfWords);
    scanf("%*c");
    printf("\n");

    // Input
    for (word = 0; word < numOfWords; word++) {
        printf("Enter word: ");    // Newline character is included in every word
        fgets(wordArray[word], 100, stdin);   // Syntax: fgets(<destination_string>, <maximum_characters>, <input_stream>)
        wordArray[word][strlen(wordArray[word])-1] = '\0';    // Remove trailing newline character

        // Lowercase
        for (i = 0; i < strlen(wordArray[word]); i++) {
            wordArray[word][i] = tolower(wordArray[word][i]);    // tolower(<char>) - defined in header <ctype.h>
        }
    }
    
    printf("\n*** Printing Words Containing More Than 5 Vowels *** \n");
    printf("*** (or) 'z' for Words Containing The Letter 'z' ***\n");
    printf("\n");
    // Outer 'for' loop.
    for (word = 0; word < numOfWords; word++) {
        vowelCount = 0;

        // Inner 'for' loop
        // Search for 'z' in word
        for (letter = 0; letter < strlen(wordArray[word]); letter++) {
            if (wordArray[word][letter] == 'z') {
                printf("\'z\' \n");
                vowelCount = 0;
                break;    // Terminate the enclosing inner 'for' loop and execute (A) the code outside the loop
                // Note: 'break' terminates only inner loop (enclosing loop) and does not terminate outer loop.
                // 'goto' statement can be used to break out of more than 1 loop.
            }

            // Search for vowels in word
            for (i = 0; i < 5; i++) {
                if (wordArray[word][letter] == vowelArray[i]) {
                    vowelCount += 1;
                }
            }
        }
        // (A) - Code outside the inner 'for' loop

        if (vowelCount < 5) {
            continue;    // Skip to the last line of the enclosing 'for' loop (B)
        }

        // Output
        printf("%s - %d vowels. \n", wordArray[word], vowelCount);
        // (B) - Last line of outer 'for' loop.
    }
    
    printf("\nProgram ended. \n");
    return 0;
}





