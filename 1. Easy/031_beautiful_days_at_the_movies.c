// Problem: Beautiful Day at the Movies
// link: https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem
// Approach: For each number in the range, reverse it and check divisibility of the absolute difference


#include<stdio.h>
#include<stdlib.h>

int reverse(int n){
    int rev = 0;

    while(n > 0){
    rev = rev * 10 + (n % 10);
    n = n / 10;
    }

    return rev;
}

int main(){

    int start = 0, end = 0, divisor = 0;
    scanf("%d %d %d", &start, &end, &divisor);

    int count = 0;

    for (int i = start; i <= end; i++){
        int rev = reverse(i);

        if (abs(i - rev) % divisor == 0){
            count++;
        }
    }
    
    printf("%d", count);
    

    return 0;
}