// Problem: Grading student
// link: https://www.hackerrank.com/challenges/grading/problem
// Approach: If the grade is equal or larger than 38, calculate the next multiple 
//           and check if the difference between grade and next multiple is smaller than 3.

#include<stdio.h>

int main(){

    int size = 0;
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++){
        if (arr[i] >= 38){
            int nextMultiple = ((arr[i] / 5 ) + 1 ) * 5;

            if ((nextMultiple - arr[i]) < 3){
                arr[i] = nextMultiple;
            }
        }
    }

    for (int i = 0; i < size; i++){
        printf("%d\n", arr[i]);
    }


    return 0;
}