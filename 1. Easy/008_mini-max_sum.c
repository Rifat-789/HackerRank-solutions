// Problem: Mini-max sum
// link: https://www.hackerrank.com/challenges/mini-max-sum/problem
// Approach: Calculate the total sum of all five numbers,
// then subtract the maximum value to get the minimum sum and subtract the minimum value
// to get the maximum sum.


#include<stdio.h>

int main(){

    long long arr[5] = {0};
    long long total = 0;
    long long largeSum = 0;
    long long smallSum = 0;

    for (int i = 0; i < 5; i++){
        scanf("%lld", &arr[i]);
        total += arr[i];
    }

    long long smallest = arr[0];
    long long largest = arr[0];

    for (int i = 0; i < 5; i++){
        if (arr[i] < smallest){
            smallest = arr[i];
        }

        if (arr[i] > largest){
            largest = arr[i];
        }
    }
    
    printf("%lld ", smallSum = total - largest);
    printf("%lld", largeSum = total - smallest);

    return 0;
}