// Problem: Lisa's Workbook
// link: https://www.hackerrank.com/challenges/lisa-workbook/problem
// Approach: Start at page 1. Use a nested loop where first loop is for chapters and 2nd loop is for problems. In 2nd loop, check if the problem
//           number is equal to the current page number and increase special problem number. Then, if the page is full move to the next page. 

#include<stdio.h>
#include<math.h>

int main(){

    int n, k;
    scanf("%d %d", &n, &k);

    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int special_problems = 0;
    int page = 1;

    for (int i = 0; i < n; i++){
        int problems = arr[i];

        for (int j = 1; j <= problems; j++){
            if (j == page){
                special_problems++;
            }

            if (j % k == 0 || j == problems){
                page++;
            }
        }
    }
    
    printf("%d", special_problems);


    return 0;
}