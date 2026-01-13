// Problem: Append and Delete
// link: https://www.hackerrank.com/challenges/append-and-delete/problem
// Approach: Find the common prefix of the two strings, then calculate minimum deletions and appends.
//           Check if the total operations can be done in k moves, considering extra moves or full delete+rebuild.


#include<stdio.h>
#include<string.h>


int main(){

    char initial[100];
    char desired[100];
    int k = 0;

    scanf("%s", &initial);
    scanf("%s", &desired);
    scanf("%d", &k);

    int common = 0;                         
    while (initial[common] != '\0' &&                               // This finds the common prefix in both inputs
           desired[common] != '\0' && 
           initial[common] == desired[common]){
        common++;
    }
    
    int deletion = strlen(initial) - common;
    int add = strlen(desired) - common;
    int total = deletion + add;                                     // Total number of operation needed
    
    if (total > k) {
        printf("No");
    }

    else if ((k - total) % 2 == 0 || k >= strlen(initial) + strlen(desired)) {
        printf("Yes");
    }

    else{
        printf("No");
    }

    
    
    
    
    



    return 0;
}