// Problem: Minimum Distances
// link: https://www.hackerrank.com/challenges/minimum-distances/problem
// Approach: Take the input array. For each number in array , find the closest matching number and store the distance.
//           Compare with the minimum distance and find the shortest distance.


#include<stdio.h>
#include<stdlib.h>

int main(){

    int size = 0;
    scanf("%d", &size);

    int *arr = calloc(size, sizeof(int));
    for (int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    int min = -1;
    for (int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if (arr[i] == arr[j]){
                int distance = j - i;

                if(min == -1 || distance < min){
                    min = distance;
                    break;
                }
            }
        }
    }

    if(min == 0){
        printf("-1");
    }

    else{
    printf("%d", min);
    }
    

    return 0;
}