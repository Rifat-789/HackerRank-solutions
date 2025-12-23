// Problem: Counting Valley
// link: https://www.hackerrank.com/challenges/counting-valleys/problem
// Approach: Check each index using a switch . Count valley while exiting it.

#include<stdio.h>
#include<stdlib.h>

int main(){

    int size = 0;
    scanf("%d", &size);

    char *input = calloc(size, sizeof(char));
    int position = 0;

    for (int i = 0; i < size; i++){
        scanf(" %c", &input[i]);
    }
    
    int valley = 0;
    for (int i = 0; i < size; i++){
        switch (input[i]){
            case 'U':
                position++;

                if (position == 0){      // Count the valley while exiting it.
                    valley++;
                }

            break;
            case 'D':
                position--;
            break;
    }
    }

    printf("%d", valley);


    free(input);

    return 0;
}