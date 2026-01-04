// Problem: Utopia Tree
// link: https://www.hackerrank.com/challenges/utopian-tree/problem
// Approach: For each test case, start height at 1. For each cycle: double height in spring (odd), add 1 in summer (even)


#include<stdio.h>
#include<stdlib.h>

int main(){

    int test = 0;
    scanf("%d", &test);

    int *arr = calloc(test, sizeof(int));
    for (int i = 0; i < test; i++){
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < test; i++){
        int height = 1;

        for (int cycle = 1; cycle <= arr[i]; cycle++){
            if (cycle % 2 == 0){
                height = height + 1;                                // summer
            }

            else{
                height = height * 2;                                // spring
            }
        }
        
        printf("%d\n", height);
    }
    
    
    


    free(arr);

    return 0;
}