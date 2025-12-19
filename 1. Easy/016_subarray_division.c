// Problem: Subarray Division
// link: https://www.hackerrank.com/challenges/the-birthday-bar/problem
// Approach: // Approach: Iterate over all possible starting indices of contiguous subarrays
//              of length m. For each starting index, calculate the sum of the next m elements.
//              If the sum equals d, increment the count.


#include<stdio.h>
#include<stdlib.h>

int main(){

    int size = 0;
    scanf("%d", &size);

    int *arr = calloc(size, sizeof(int));  // initialize all elements of array to 0

    for (int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    int d = 0, m = 0;
    scanf("%d %d", &d, &m);

    int count = 0;

    for (int i = 0; i <= size - m; i++){    // this is where the counting starts from 
        int sum = 0;

        for(int j = 0; j < m; j++){
            sum += arr[i + j];
        }

        if (sum == d){
            count ++;
        }
    }
    
    printf("%d", count);

    free(arr);

    return 0;
}