// Problem: compare the triplets
// link: https://www.hackerrank.com/challenges/compare-the-triplets/problem
// Approach: Compare each score of Alice and Bob; award a point to whoever has the higher value,
//           then print both totals.

#include<stdio.h>

int main(){

    int a[3] = {0};
    int b[3] = {0};
    int alicePoint = 0;
    int bobPoint = 0;

    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    scanf("%d %d %d", &b[0], &b[1], &b[2]);

    for(int i = 0; i < 3; i++){
        if(a[i] > b[i]){
            alicePoint += 1;
        }
        
        else if(a[i] < b[i]){
            bobPoint += 1;
        }
    }

    printf("%d %d", alicePoint, bobPoint);
    
    


    return 0;
}