// Problem: Drawing Book
// link: https://www.hackerrank.com/challenges/drawing-book/problem
// Approach: Calculate the number of page turns needed from the front and
//           from the back using integer division by 2, then print the minimum of the two.

#include<stdio.h>

int main(){

    int n = 0, p = 0;

    scanf("%d", &n);
    scanf("%d", &p);

   int fromFrotn = p / 2;
   int fromBack = (n / 2) - (p  / 2) ;

    printf("%d", fromFrotn < fromBack ? fromFrotn : fromBack);
    
    
    return 0;
}