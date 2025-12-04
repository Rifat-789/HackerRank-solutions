// Problem: Staircase
// link: https://www.hackerrank.com/challenges/staircase/problem
// Approach: For each row, print size - i spaces followed by i hash characters.

#include<stdio.h>

int main(){

    int size = 0;

    scanf("%d", &size);

    for (int i = 1; i <= size; i++){

        for (int s = 0; s < size - i; s++){
            printf(" ");
        }

        for (int h = 0; h < i; h++){
            printf("#");
        }
        
        printf("\n");
        
    }
    

    return 0;
}