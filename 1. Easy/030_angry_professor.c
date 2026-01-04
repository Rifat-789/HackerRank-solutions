// Problem: Angry Professor
// link: https://www.hackerrank.com/challenges/angry-professor/problem
// Approach: Use a while loop for multiple test cases. Get all inputs. Calculate how many students arrived on or before time. 
//           Compare it with threshold and print YES or NO accordingly.


#include<stdio.h>
#include<stdlib.h>

int main(){

    int testNum = 0;
    scanf("%d", &testNum);

    while (testNum--){
        int student = 0;
        int threshold = 0;

        scanf("%d %d", &student, &threshold);

        int *arr = calloc(student, sizeof(int));
        int onTime = 0;

        for (int i = 0; i < student; i++){
            scanf("%d", &arr[i]);

           if (arr[i] <= 0){
              onTime++;
           }
        }

        if (onTime >= threshold){
            printf("NO\n");
        }

        else{
            printf("YES\n");
        }


        free(arr);
    }
    

    return 0;
}