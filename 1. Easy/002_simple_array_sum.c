// Problem: Simple array sum
// link: https://www.hackerrank.com/challenges/simple-array-sum/problem
// Approach: Take the array size , add all the elements using a for loop, print the sum.


#include<stdio.h>

int main(){

    int size = 0;
    int sum = 0;

    scanf("%d", &size);

    int ar[size];

    for (int i = 0; i < size; i++){
        scanf("%d", &ar[i]);
    }
    
    for (int i = 0; i < size; i++){
        sum = sum + ar[i];
    }
    
    printf("%d", sum);
    

    return 0;
}