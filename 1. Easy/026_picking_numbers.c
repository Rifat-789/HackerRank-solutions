// Problem: Picking Numbers
// link: https://www.hackerrank.com/challenges/picking-numbers/problem
// Approach: Count the frequency of each number. For each value x, calculate freq[x] + freq[x+1].
//           The maximum of these sums is the longest valid subarray.


#include<stdio.h>
#include<stdlib.h>

int main(){

    int size = 0;
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    int freq[101] = {0};

    for (int i = 0; i < size; i++){                     // Counts the frequency for each number and stores them in array.
        freq[arr[i]]++;
    }   

    int maxLen = 0;
    for (int i = 0; i < 100; i++){
        int current = freq[i] + freq[i + 1];           // Counts the element number of each sub array that meets the criteria    

        if (current > maxLen){                         // Gets the highest element number
            maxLen = current;
        }
    }
    
    printf("%d", maxLen);
    

    return 0;
}