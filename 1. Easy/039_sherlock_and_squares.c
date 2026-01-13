// Problem: Sherlock and Squares
// link: https://www.hackerrank.com/challenges/sherlock-and-squares/problem
// Approach: Find the lowest and highes square root in the range. Use (high - low + 1) formula to 
//           calculate the numbers of square number in the range.


#include<stdio.h>
#include<math.h>

int main(){

    int testCase = 0;
    scanf("%d", &testCase);

    while (testCase--){
        int start = 0, end = 0, count = 0;
        scanf("%d %d", &start, &end);

        int low = ceil(sqrt(start));                        // The lowest square root in the range
        int high = floor(sqrt(end));                        // The highest square root in the range

        if (low > high){
            printf("0\n");
        }

        else{
            printf("%d\n", high - low + 1);                 // The number of square numbers in the range
        }
    }
    


    return 0;
}