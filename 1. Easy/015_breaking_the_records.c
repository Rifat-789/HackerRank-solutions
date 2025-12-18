// Problem: Breaking the Records
// link: https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem
// Approach: set element 0 as minimum and maximum, compare miminum and maximum with each element
//           increase the score for each condition met, print the score.


#include<stdio.h>

int main(){

    int size = 0;
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    int maxPoint = 0;
    int minPoint = 0;

    for (int i = 1; i < size; i++){
        if (arr[i]  > max){
            max = arr[i];
            maxPoint++;
        }
    }
    
    for (int i = 1; i < size; i++){
        if (arr[i] < min){
            min = arr[i];
            minPoint++;
        }
    }
    
    printf("%d %d", maxPoint, minPoint);


    return 0;
}