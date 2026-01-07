// Problem: Save the Prisoner
// link: https://www.hackerrank.com/challenges/save-the-prisoner/problem
// Approach: Find the poisonde sweet using (startPoint + sweets - 1) % prisoner.


#include<stdio.h>

int main(){

    int testCase = 0;
    scanf("%d", &testCase);

    while (testCase--){
        int prisoners = 0, sweets = 0, startPoint = 0;
        scanf("%d %d %d", &prisoners, &sweets, &startPoint);

        int poisonde = (startPoint + sweets - 1) % prisoners;                       // Finds the poisoned in circular way

        if (poisonde == 0){                                 // The last prisoner
            poisonde = prisoners;
        }

        printf("%d\n", poisonde);
    }
    

    return 0;
}