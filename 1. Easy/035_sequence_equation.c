// Problem: Sequence Equation
// link: https://www.hackerrank.com/challenges/permutation-equation/problem
// Approach: Start with i = 1 and increase size by 1. Then find the array index that mathces the value of i. Keep that array index
//           in a new array and print it.

#include<stdio.h>
#include<stdlib.h>

int main(){

    int size = 0;
    scanf("%d", &size);

    int *arr = calloc(size + 1, sizeof(int));
    for (int i = 1; i <= size; i++){
        scanf("%d", &arr[i]);
    }

    int *newArr = calloc(size + 1, sizeof(int));                        // To store the new values
    for (int i = 1; i <= size; i++){
       for (int j = 1; j <= size; j++){
            if(arr[j] == i){                                            // Finds the same value as i in the array
                for (int k = 1; k <= size; k++){
                    if (arr[k] == j){                                   // Finds the index of that vlaue and stores it in the new array
                        newArr[i] = k;
                        break;
                    }
                }
                break;
            }
       }
    }

    for (int i = 1; i <= size; i++){
        printf("%d\n", newArr[i]);
    }
    
    
    


    free(arr);
    free(newArr);

    return 0;
}