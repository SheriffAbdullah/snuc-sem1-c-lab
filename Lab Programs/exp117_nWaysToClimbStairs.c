/*
 There are n stairs (minimum 5), a person standing at the bottom wants to reach the top.
 The person can climb either 1 stair, 3 stairs or 5 stairs at a time.
 Write a C program using recursion to count the number of ways, the person can reach the top.
 */

 #include <stdio.h>
 
 // Recursive function
 int numOfWays(int n) {
     if (n == 0) {
         return 1;
     }
     else if (n < 0) {
         return 0;
     }
     else {
         return numOfWays(n - 5) + numOfWays(n - 3) + numOfWays(n - 1);
     }
 }
 
 int main() {
 // Input from user
 int numOfStairs;
 
 while (1) {    // '1' -> 'true' & '0' -> 'false'
     printf("Enter number of stairs (minimum = 5): ");
     scanf("%d", &numOfStairs);
 
     if (numOfStairs < 5) {
         printf("Invalid input. Please enter a value equal to or above 5. \n");
         continue;
     }
     else {
         break;
     }
}
 
 // Output
 int totalWays = numOfWays(numOfStairs);
 printf("There are %d ways a person can reach the top. \n", totalWays);
 
 return 0;
 }
