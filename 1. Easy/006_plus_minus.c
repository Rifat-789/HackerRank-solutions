#include<stdio.h>
#include<stdlib.h>

int main(){

    int size = 0;
    scanf("%d", &size);

    int *inputs = calloc(size, sizeof(int));

    if (inputs == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }

    float positive = 0;
    float negative = 0;
    float zero = 0;

    for (int i = 0; i < size; i++){
        scanf("%d", &inputs[i]);

        if (inputs[i] < 0){
            negative += 1;
        }
        else if (inputs[i] > 0){
            positive += 1;
        }
        else{
            zero += 1;
        }
    }

    printf("%.6f\n", positive / size);
    printf("%.6f\n", negative / size);
    printf("%.6f\n", zero / size);

   
    free(inputs);
    inputs = NULL;

    return 0;
}