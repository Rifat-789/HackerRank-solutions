// Problem: Birthday Cake Candles
// link: https://www.hackerrank.com/challenges/time-conversion/problem
// Approach: Find the maximum candle height in the array, then count how many times it appears.

#include<stdio.h>

int main(){

    int size = 0;
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    int maxvalue = arr[0];

    for (int i = 0; i < size; i++){
        if (arr[i] > maxvalue){
            maxvalue = arr[i];
        }
    }

    int tallestCandles = 0;

    for (int i = 0; i < size; i++){
        if (maxvalue == arr[i]){
            tallestCandles += 1;
        }
    }
    
    printf("%d", tallestCandles);

    return 0;
}