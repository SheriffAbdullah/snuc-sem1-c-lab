/*
Program to read a sentence from the user and output the following:
i) The length of each word.
ii) If a word contains any special characters or digits other than lower and upper case letters,
then it should also be reported as YES, otherwise NO.
iii) The program should first print the sentence accepted from the user,
and then print the word, its length and character check status line by line for each word.
See the example output below.

*** Example ***
Input: The quick brown fox! jumps ov3r the lazy Dog!
Output:
Sentence is : The quick brown fox! jumps ov3r the lazy Dog!
The - 3 - NO
quick - 5 - NO
brown - 5 - NO
fox! - 4 - YES
jumps - 5 - NO
ov3r - 4 - YES
the - 3 - NO
lazy - 4 - NO
Dog! - 4 - YES

Note:
1. Use appropriate user defined functions to make the code more readable.
2. Name the program as Q4_StringHandling.c with appropriate comments.
*/

#include <stdio.h>
#include <string.h>

int isletter(char character){
    int ascii = character;
    if (ascii >= 65 && ascii <= 90 || ascii >= 97 && ascii <= 122) {
        return 0;    // If 'character' is an upper case (or) a lower case letter in English alphabet
    }
    else {
        return 1;    // If 'character' is a special character or a digit
    }
}

int main() {
    char sentence[200] = "";
    int character;
    int numOfChars = 0, numOfSpecialChar = 0;

    // Input
    printf("Enter a sentence: ");
    fgets(sentence, 200, stdin);

    // Replace newline (from input) with space
    sentence[strlen(sentence)-1] = ' ';    

    // Print input sentence
    printf("Sentence is: %s \n", sentence);
    
    for (character = 0; character < strlen(sentence); character++)
    {
        if (sentence[character] == ' ') {
            
            // Print number of characters
            printf(" - %d - ", numOfChars);
            
            // Print if special character(s) or digit(s) present in word
            if (numOfSpecialChar > 0) {
                printf("YES \n");
            }
            else {
                printf("NO \n");
            }
            
            numOfChars = 0;
            numOfSpecialChar = 0;
        }
        else {
            
            // Count number of characters
            if (isletter(sentence[character] == 0)) {
                numOfChars += 1;
            }
            else {
                numOfSpecialChar += 1;
                numOfChars += 1;
            }
            
            // Print individual word
            printf("%c", sentence[character]);
        }
    }
    
    return 0;
}

