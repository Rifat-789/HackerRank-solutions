// Problem: Divisible Sum Pairs
// link: https://www.hackerrank.com/challenges/divisible-sum-pairs/problem
// Approach: Use two nested loops to generate all pairs (i, j) such that i < j.
//           For each pair, check if the sum of the two elements is divisible by k.
//           Increment the count for every valid pair.


#include<stdio.h>
#include<stdlib.h>

int main(){

    int n = 0, k = 0;
    scanf("%d %d", &n, &k);

    int *arr = calloc(n, sizeof(int));
    
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int count = 0;

    for (int i = 0; i < n; i++){
        int num1 = arr[i];
        int sum = 0;

        for (int j = i + 1; j < n; j++){
            int num2 = arr[j];

            sum = num1 + num2;

            if (sum % k == 0){
            count++;
        }
        }
    }
    
    printf("%d", count);

    return 0;
}