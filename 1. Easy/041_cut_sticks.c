// Problem: Cut the sticks
// link: https://www.hackerrank.com/challenges/cut-the-sticks/problem
// Approach: Repeatedly find the smallest non-zero stick, cut all sticks by that length, and record
//           how many sticks remain after each operation until none are left.

#include<stdio.h>
#include<stdlib.h>

int main(){

    int size = 0;
    scanf("%d", &size);

    int *arr = calloc(size, sizeof(int));
    for (int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    int tempSize = size;
    int *result = calloc(size, sizeof(int));
    int resIndex = 0;

    while (tempSize > 0){
        result[resIndex++] = tempSize;

        int smallest = -1;

        for (int i = 0; i < size; i++){                                     // This finds the length of the smallest stick
            if (arr[i] > 0){
                if (smallest == -1 || arr[i] < smallest){
                    smallest = arr[i];
                }
            }
        }

        for (int i = 0; i < size; i++){                                     // This loop cuts sticks
            if (arr[i] > 0){
                arr[i] -= smallest;

                if (arr[i] == 0){
                    tempSize--;
                }
            }
        }
    }
    

    for (int i = 0; i < resIndex; i++){                                     // Print the result
        printf("%d\n", result[i]);      
    }
    
    



    free(arr);
    free(result);

    return 0;
}