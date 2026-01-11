// Problem: Jumping on the Clouds
// link: https://www.hackerrank.com/challenges/jumping-on-the-clouds-revisited/problem
// Approach: Simulate jumps using indices and modulo to move circularly. Deduct energy on each jump and apply extra cost
//           for thunderclouds until returning to the starting position.


#include<stdio.h>
#include<stdlib.h>

int main(){

    int size = 0, jump = 0;
    scanf("%d %d", &size, &jump);

    int *arr = calloc(size, sizeof(int));
    for (int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    int position = 0;
    int energy = 100;
    do
    {
        position = (position + jump) % size;
        energy--;

        if (arr[position] == 1){
            energy -= 2;
        }
        
    } while (position != 0);
    
    
    printf("%d", energy);
    


    free(arr);

    return 0;
}