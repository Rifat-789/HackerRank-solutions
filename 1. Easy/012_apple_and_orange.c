// Problem: Apple and orange
// link: https://www.hackerrank.com/challenges/apple-and-orange/problem
// Approach: Calculate each fruit's landing position.
//           count how many lie in sam's house.


#include<stdio.h>


int main(){

    int samStart = 0;
    int samEnd = 0;

    scanf("%d %d", &samStart, &samEnd);

    int appleTree = 0;
    int orangeTree = 0;

    scanf("%d %d", &appleTree, &orangeTree);

    int appleNum = 0;                 // number of apples
    int orangeNum = 0;                // number of oranges

    scanf("%d %d", &appleNum, &orangeNum);

    int apple[appleNum];             // distance of apples
    int orange[orangeNum];           // distance of oranges

    for (int i = 0; i < appleNum; i++){
        scanf("%d", &apple[i]);
    }
    
    for (int i = 0; i < orangeNum; i++){
        scanf("%d", &orange[i]);
    }
    
    int appleCount = 0;              // number of apples fallen 
    int orangeCount = 0;             // number of oranges fallen

    for (int i = 0; i < appleNum; i++){
        if ((appleTree + apple[i]) >= samStart && (appleTree + apple[i]) <= samEnd){
            appleCount += 1;
        }
    }

    for (int i = 0; i < orangeNum; i++){
        if ((orangeTree + orange[i]) >= samStart && (orangeTree + orange[i]) <= samEnd){
            orangeCount += 1;
        }
    }
    
    printf("%d\n%d", appleCount, orangeCount);
    
    

    return 0;
}