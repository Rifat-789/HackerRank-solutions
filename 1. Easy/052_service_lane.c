// Problem: Service Lane
// link: https://www.hackerrank.com/challenges/service-lane/problem
// Approach: Use while loop for multiple cases. Take the range as x and y. Set lowest to arr[x]. Then check through the range to find the lowest
//           one. Print the lowest one.

#include<stdio.h>
#include<stdlib.h>

int main(){

    int n, t;
    scanf("%d %d", &n, &t);

    int *arr = calloc(n, sizeof(int));                  // allocate memory for the width
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    while(t--){
        int x, y;
        scanf("%d %d", &x, &y);

        int lowest = arr[x];                        // Set as lowest
        for(int i = x; i <= y; i++){
            if(lowest > arr[i]){                    // Check the actual lowest one and print it
                lowest = arr[i];
            }
        }

        printf("%d\n", lowest);
    }
    

    free(arr);                                      // Free the memory
    arr = NULL;

    return 0;
}