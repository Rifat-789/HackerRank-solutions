// Problem: Jumping on the clouds
// link: https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem
// Approach: Check the 2nd cloud from the current cloud. If it is 0 then go to 2nd cloud. If it is 1, then go forward 1 cloud.
//           Increase jump count every time.

#include<stdio.h>
#include<stdlib.h>

int main(){

    int size = 0;
    scanf("%d", &size);

    int *arr = calloc(size, sizeof(int));
    for (int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    int count = 0, i = 0;
    while (i < size - 1){
        if (i + 2 < size && arr[i + 2] == 0){
            i += 2;
        }

        else{
            i++;
        }

        count++;
    }

    printf("%d", count);



    free(arr);

    return 0;
}