// Problem: Bill Division
// link: https://www.hackerrank.com/challenges/bon-appetit/problem
// Approach: calculate the total bill and anna's bill. compare it with the bill charged

#include<stdio.h>
#include<stdlib.h>

int main(){

    int n = 0, k = 0;
    scanf("%d %d", &n, &k);

    int *arr = calloc(n, sizeof(int));
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int charged = 0;
    scanf("%d", &charged);
    
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    
    sum = sum - arr[k];                 // This is where we calculate anna's bill 
    int annaPortion = sum / 2;

    if (annaPortion == charged){        // Compare the bills
        printf("Bon Appetit");
    }

    else{
        printf("%d", charged - annaPortion);
    }


    free(arr);

    return 0;
}