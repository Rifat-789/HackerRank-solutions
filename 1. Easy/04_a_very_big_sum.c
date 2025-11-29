#include<stdio.h>
#include<stdlib.h>

int main(){

    int size = 0;
    scanf("%d", &size);

    long long *bigNum = calloc(size, sizeof(long long));
    long long result = 0;

    for (int i = 0; i < size; i++){
        scanf("%lld", &bigNum[i]);
    }
    
    for (int i = 0; i < size; i++){
        result += bigNum[i];
    }
    
    printf("%lld", result);

    free(bigNum);

    return 0;
}