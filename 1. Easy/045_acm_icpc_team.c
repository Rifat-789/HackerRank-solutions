// Problem: ACM ICPC Team
// link: https://www.hackerrank.com/challenges/acm-icpc-team/problem
// Approach: Convert each member’s knowledge to binary, check all pairs, count combined known topics,
//           then find the maximum and how many teams reach it.

#include<stdio.h>
#include<stdlib.h>

int main(){

    int members = 0, topics = 0;
    scanf("%d %d", &members, &topics);

    int arr[members][topics];

    for (int i = 0; i < members; i++){                                  // Takes input in string
       char s[topics + 1];
       scanf("%s", s);

       for (int j = 0; j < topics; j++){                                // Converts it into integer
           arr[i][j] = s[j] - '0';
       }
    }

    int size = members * (members - 1) / 2;                             // Number of teams
    int *count = calloc(size, sizeof(int));

    int teamIndex = 0;
    for (int i = 0; i < members; i++){
        for(int j = i + 1; j < members; j++){
            for (int k = 0; k < topics; k++){
                if (arr[i][k] == 1 || arr[j][k] == 1){
                    count[teamIndex]++;
                }
            }

            teamIndex++;
        }
    }
    
    int maxNum = count[0];
    for (int i = 0; i < teamIndex; i++){                                // Finds the maximum number of subjects each team know
        if (count[i] > maxNum){
            maxNum = count[i];
        }
    }

    int totalTeam = 0;
    for (int i = 0; i < teamIndex; i++){                                // Finds the number of teams that know max number subject
        if (count[i] == maxNum){
            totalTeam++;
        }
    }
    
    printf("%d\n%d", maxNum, totalTeam);
    
    


    free(count);

    return 0;
}