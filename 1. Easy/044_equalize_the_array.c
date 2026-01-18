// Problem: Equalize the Array
// link: https://www.hackerrank.com/challenges/equality-in-a-array/problem
// Approach: Count frequency of each value. Find out the maximum value of frequency. Print array size - Max value of frequency


#include<stdio.h>
#include<stdlib.h>

int main(){

    int size = 0;
    scanf("%d", &size);

    int frequency[size];
    int *arr = calloc(size, sizeof(int));
    for (int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
        frequency[i] = -1;
    }

    for (int i = 0; i < size; i++){
        int count = 1;
        for (int j = i + 1; j < size; j++){
            if (arr[i] == arr[j]){
                count++;
                frequency[j] = 0;                           // Not no count frequency of same element again
            }
        }

        if (frequency[i] != 0){
                frequency[i] = count;
            }
    }

    int largest = frequency[0];
    for (int i = 0; i < size; i++){
        if (frequency[i] > largest){
            largest = frequency[i];
        }
    }

    printf("%d", size - largest);
    
    
    

    free(arr);

    return 0;
}