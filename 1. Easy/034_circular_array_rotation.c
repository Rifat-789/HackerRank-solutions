// Problem: Circular Array Rotation
// link: https://www.hackerrank.com/challenges/circular-array-rotation/problem
// Approach: Reduce rotations using modulo. For each query, compute the original index with (q - rotation + size) % size and
//           print the value directly without rotating the array.

#include<stdio.h>
#include<stdlib.h>

int main(){

    int size = 0, rotation = 0, queries = 0;
    scanf("%d %d %d", &size, &rotation, &queries);

    int *arr = calloc(size, sizeof(int));
    for (int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    rotation = rotation % size;                                 // In case the rotation is bigger than the size

    for (int i = 0; i < queries; i++){
        int q = 0;
        scanf("%d", &q);

        int index = (q - rotation + size) % size;               // This is the formula to find the query value after right rotation
        printf("%d\n", arr[index]);
    }
    
    
    
    


    free(arr);

    return 0;
}