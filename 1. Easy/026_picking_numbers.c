#include<stdio.h>
#include<stdlib.h>

int main(){

    int size = 0;
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    int freq[101] = {0};

    for (int i = 0; i < size; i++){ 
        freq[arr[i]]++;
    }

    int maxLen = 0;
    for (int i = 0; i < 100; i++){
        int current = freq[i] + freq[i + 1];

        if (current > maxLen){
            maxLen = current;
        }
    }
    
    printf("%d", maxLen);
    

    return 0;
}