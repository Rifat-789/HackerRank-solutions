#include<stdio.h>
#include<stdlib.h>

int main(){

    int size = 0;
    scanf("%d", &size);

    int *arr = calloc(size, sizeof(int));
    for (int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    
    int type1 = 0,type2 = 0,type3 = 0,type4 = 0,type5 = 0;

    for (int i = 0; i < size; i++){
        switch (arr[i])
        {
        case 1:
            type1++;
            break;
        case 2:
            type2++;
            break;
        case 3:
            type3++;
            break;
        case 4:
            type4++;
            break;
        case 5:
            type5++;
            break;
        }
    }

    int types[5] = {type1, type2, type3, type4, type5};
    
    int max = types[0];
    int result = 1;
    for (int i = 1; i < 5; i++){
        if (types[i] > max){
            max = types[i];
            result = i + 1;
        }
    }
    
    printf("%d", result);


    free(arr);

    return 0;
}