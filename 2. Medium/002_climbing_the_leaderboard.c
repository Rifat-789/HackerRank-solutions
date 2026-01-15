// Problem: Climbing the Leaderboard
// link: https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem
// Approach: Remove duplicate scores from the leaderboard to create a unique ranking list.
//           Then, starting from the lowest rank, compare each player’s score with the unique
//           leaderboard scores. Move upward while the player’s score is greater than
//           or equal to the leaderboard score and assign the rank accordingly.


#include<stdio.h>
#include<stdlib.h>

int main(){

    int sizeLeaderboard = 0;
    scanf("%d", &sizeLeaderboard);

    int *leaderboard = calloc(sizeLeaderboard, sizeof(int));
    for (int i = 0; i < sizeLeaderboard; i++){
        scanf("%d", &leaderboard[i]);
    }

    int sizePlayer = 0;
    scanf("%d", &sizePlayer);

    int *player = calloc(sizePlayer, sizeof(int));
    for (int i = 0; i < sizePlayer; i++){
        scanf("%d", &player[i]);
    }

    int *uniqueScore = calloc(sizeLeaderboard, sizeof(int));
    int uniqueSize = 0;

    uniqueScore[uniqueSize++] = leaderboard[0];                             // Include the first score of the leaderboard 
    for (int i = 1; i < sizeLeaderboard; i++){                              // Make a new unique leaderboard
        if (leaderboard[i] != leaderboard[i - 1]){
            uniqueScore[uniqueSize++] =leaderboard[i]; 
        }
    }
    
    int *position = calloc(sizePlayer, sizeof(int));                        // This will calculate player position
    int j = uniqueSize - 1;                                                 // Start from the lowest rank
    
    for (int i = 0; i < sizePlayer; i++){
        while (j >= 0 && player[i] >= uniqueScore[j]){
            j--;
        }
        
        position[i] = j + 2;
    }
    
    for (int i = 0; i < sizePlayer; i++){
        printf("%d\n", position[i]);
    }
    



    free(leaderboard);
    free(player);
    free(uniqueScore);
    free(position);


    return 0;
}