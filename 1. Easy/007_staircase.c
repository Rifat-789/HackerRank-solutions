#include<stdio.h>

int main(){

    char sign = '#';
    int size = 0;

    scanf("%d", &size);

    for (int i = 1; i <= size; i++){

        for (int s = 0; s < size - i; s++){
            printf(" ");
        }

        for (int h = 0; h < i; h++){
            printf("#");
        }
        
        printf("\n");
        
    }
    

    return 0;
}