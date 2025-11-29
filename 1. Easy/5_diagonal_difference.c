#include<stdio.h>
#include<math.h>

int main(){

    int size = 0;
    scanf("%d", &size);

    int arr[size][size];

    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    
    int primarySum = 0;
    int secondarySum = 0;

    for (int i = 0; i < size; i++){
        primarySum += arr[i][i];                   // sum of primary diagonal
        secondarySum += arr[i][size - 1 - i];      // sum of secondary diagonal
    }

    printf("%d", abs(primarySum - secondarySum));    

    return 0;
}