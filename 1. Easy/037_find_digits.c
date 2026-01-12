// Problem: Find Digits
// link: https://www.hackerrank.com/challenges/find-digits/problem
// Approach: Use a while loop for multiple test case. Extract digits from the nubmer using modulo formula. 
//           Divide the number with each digits and increase the count. Then print the count for each test case.


#include<stdio.h>

int main(){

    int testCase = 0;
    scanf("%d", &testCase);

    while (testCase--){                                     // The loop runs testCase number of times.
        int number = 0;
        scanf("%d", &number);

        int temp = number;
        int digit = 0;
        int count = 0;
        while(temp != 0){
            digit = temp % 10;                              // Finds the last digit.

            if (digit != 0 && number % digit == 0){
                count++;
            }

            temp = temp / 10;                               // Removes the last digit.
        }

        printf("%d\n", count);
    }
    
    


    return 0;
}