// Problem: Queen's Attack II
// link: https://www.hackerrank.com/challenges/queens-attack-2/problem
// Approach: First, calculate the maximum number of squares the queen can move in all 8 directions assuming no obstacles.
//           Then, for each obstacle, check if it lies in the same row, column, or diagonal as the queen.
//           If it does, reduce the reachable distance in that direction to just before the obstacle. Finally,
//           sum the remaining moves from all directions to get the total number of valid moves.


#include<stdio.h>

int min(int x, int y){
    return (x > y ? y : x);
}

int abs(int x){
    return x < 0 ? -x : x;
}


int main(){

    int length = 0, numObs = 0;
    scanf("%d %d", &length, &numObs);

    int Rq = 0, Cq = 0;
    scanf("%d %d", &Rq, &Cq);

    int up, down, left, right;
    up = length - Rq;
    down = Rq - 1;
    left = Cq - 1;
    right = length - Cq;

    int upLeft , upRight, downLeft, downRight;
    upLeft = min(length - Rq, Cq - 1);
    upRight = min(length - Rq, length - Cq);
    downLeft = min(Rq - 1, Cq - 1);
    downRight = min(Rq - 1, length - Cq);


    
    for (int i = 0; i < numObs; i++){                           // When obstacles are in effect
        int Ro = 0, Co = 0;
        scanf("%d %d", &Ro, &Co);

        int Dr = 0 ,Dc = 0;
        Dr = Ro - Rq;
        Dc = Co - Cq;

        // Left
        if (Ro == Rq && Co < Cq){
            left = min(left, Cq - Co - 1);
        }

        // Right
        else if (Ro == Rq && Co > Cq){
            right = min(right, Co - Cq - 1);
        }

        // Up
        else if (Co == Cq && Ro > Rq){
            up = min(up, Ro - Rq - 1);
        }

        // Down
        else if (Co == Cq && Ro < Rq){
            down = min(down, Rq - Ro - 1);
        }


        // Diagonals
        else if(abs(Dr) == abs(Dc)){
            if (Dr > 0 && Dc < 0){
                upLeft = min(upLeft, abs(Dr) - 1);
            }

            else if (Dr > 0 && Dc > 0){
                upRight = min(upRight, abs(Dr) - 1);
            }

            else if (Dr < 0 && Dc < 0){
                downLeft = min(downLeft, abs(Dr) - 1);
            }

            else{
                downRight = min(downRight, abs(Dr) - 1);
            }
        }
    }
    
    int total = up + down + left + right + upLeft + upRight + downLeft + downRight;

    printf("%d", total);



    return 0;
}