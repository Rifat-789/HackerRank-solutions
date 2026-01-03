// Problem: The Hurdle Race
// link: https://www.hackerrank.com/challenges/the-hurdle-race/problem
// Approach: Take all inputs. Find highest number on the array. Decrease maximum jump hight from
//           highest obstacle hight. 


#include<stdio.h>
#include<stdlib.h>

int main(){

    int size = 0, max = 0;
    scanf("%d %d", &size, &max);

    int *arr = calloc(size, sizeof(int));

    for (int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    
    int highest = 0;
    highest = arr[0];                       // Initiate index 0 as highest

    for (int i = 1; i < size; i++){                     // Compare all index to find highest index value
        if (arr[i] > highest){
            highest = arr[i];
        }
    }
    
    if (highest <= max){                    // If the character can already clear all of the hurdles, return 0.
        printf("0");
    }
    
    else{
        printf("%d", highest - max);
    }



    free(arr);

    return 0;
}