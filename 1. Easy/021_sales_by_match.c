// Problem: Salse by Match
// link: https://www.hackerrank.com/challenges/sock-merchant/problem
// Approach: Iterate through the socks and use a used array to skip already paired ones.
//           For each unused sock, find the next unused sock of the same color, count the pair,
//           and mark both as used.

#include<stdio.h>
#include<stdlib.h>

int main(){

    int size = 0;
    scanf("%d", &size);

    int *arr = calloc(size, sizeof(int));
    int *used = calloc(size, sizeof(int));       // for marking the used socks

    for (int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    int pairs = 0;
    for (int i = 0; i < size; i++){
        if (used[i])continue;                   // skipping used socks

        for (int j = i + 1; j < size; j++){
            if (used[j])continue;              // skipping used  socks
            
            if (arr[i] == arr[j]){
                pairs++;

                used[i] = 1;                   // mark both socks as used
                used[j] = 1;

                break;                         // stop after forming one pair
            }
        }
    }
    
    printf("%d", pairs);

    
    free(arr);
    free(used);

    return 0;
}