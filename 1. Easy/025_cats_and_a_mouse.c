// Problem: Cats and a Mouse
// link: https://www.hackerrank.com/challenges/cats-and-a-mouse/problem
// Approach: Make  an array for catA, catB and mouse. Take user input q times and
//           compare the absolute values of distance.


#include<stdio.h>
#include<stdlib.h>

int main(){

    int q = 0;
    scanf("%d", &q);
   
    int catA[q], catB[q], mouse[q];
    for (int i = 0; i < q; i++){
        scanf("%d %d %d", &catA[i], &catB[i], &mouse[i]);
    }
    
    for (int i = 0; i < q; i++){
        if ((abs(mouse[i] - catA[i])) < (abs(mouse[i] - catB[i]))){
            printf("Cat A\n");
        }

        else if ((abs(mouse[i] - catA[i])) > (abs(mouse[i] - catB[i]))){
            printf("Cat B\n");
        }
        
        else{
            printf("Mouse C\n");
        }
    }

    return 0;
}