
// Problem: Non-Divisible Subset
// link: https://www.hackerrank.com/challenges/non-divisible-subset/problem
// Approach: Calculate and store the frequency of each remainder. If index 0 has value higher than 0 , count = 1. 
//           Calculate count for each valid pair.

#include<stdio.h>
#include<stdlib.h>

int main(){

    int size = 0, k = 0;
    scanf("%d %d", &size, &k);

    int *arr = calloc(size, sizeof(int));
    for (int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    
    int *freq = calloc(k, sizeof(int));
    for (int i = 0; i < size; i++){
        int r = arr[i] % k;
        freq[r]++;
    }

    int count = 0;

    if (freq[0] > 0){                                   // Remainder 0 can only have 1 maximum
        count = 1;
    }

    for (int i = 1; i <= k / 2; i++){
        if (i == k - i){                                // Special case
            if (freq[i] > 0){
                count++;
            }
        }

        else{
            count += (freq[i] > freq[k - i] ? freq[i] : freq[k - i]);
        }
    }
    
    printf("%d", count);
    
    
    

    free(arr);
    free(freq);

    return 0;
}
