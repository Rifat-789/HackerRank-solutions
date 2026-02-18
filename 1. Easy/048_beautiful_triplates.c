// Problem: Beautiful Triplates
// link: https://www.hackerrank.com/challenges/beautiful-triplets/problem
// Approach: For each element , find element + d, element + 2d. If they exist, increase count. Then print total count.

#include<stdio.h>
#include<stdlib.h>

int main(){

    int n , d;
    scanf("%d %d", &n, &d);

    int *arr = calloc(n, sizeof(int));
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int count = 0;
    for (int i = 0; i < n; i++){
        int a = arr[i];
        int b = a + d;
        int c = a + (2 * d);

        for (int j = i + 1; j < n; j++){
            if (arr[j] == b){
                for (int k = j + 1; k < n; k++){
                    if(arr[k] == c){
                        count++;
                    }
                }
            }
        }
    }
    
    printf("%d", count);
    


    free(arr);

    return 0;
}