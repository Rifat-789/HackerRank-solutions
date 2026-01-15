// Problem: Forming a Magic Square.
// link: https://www.hackerrank.com/challenges/magic-square-forming/problem
// Approach: Store all 8 possible magic squares. Compare the input square with each magic square cell by cell.
//           Calculate the cost for each and keep track of the minimum cost.


#include<stdio.h>
#include<stdlib.h>

int main(){

    int magic[8][3][3] = {{{8,1,6},{3,5,7},{4,9,2}},                // 8 possible magic squares for 3x3.
                          {{6,1,8},{7,5,3},{2,9,4}},
                          {{4,9,2},{3,5,7},{8,1,6}},
                          {{2,9,4},{7,5,3},{6,1,8}},
                          {{8,3,4},{1,5,9},{6,7,2}},
                          {{4,3,8},{9,5,1},{2,7,6}},
                          {{6,7,2},{1,5,9},{8,3,4}},
                          {{2,7,6},{9,5,1},{4,3,8}}
                         };


    int matrix[3][3] = {0};

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    int minCost = 9999;
    for (int k = 0; k < 8; k++){                                // Compare cell by cell differences for each possible square.
        int cost = 0;
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                cost += abs(matrix[i][j] - magic[k][i][j]);
            }
        }

        if (cost < minCost){                                    // Compare each cost and calculate  minimum cost.
            minCost = cost;
        }
    }
    
    printf("%d", minCost);
    

    return 0;
}