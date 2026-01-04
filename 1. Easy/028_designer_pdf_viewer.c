// Problem: Designer PDF Viewer
// link: https://www.hackerrank.com/challenges/designer-pdf-viewer/problem
// Approach: Find the maximum height of the letters in the word. Area = Height * lenght


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    int *arr = calloc(26, sizeof(int));
    for (int i = 0; i < 26; i++){
        scanf("%d", &arr[i]);
    }
    
    char *input = calloc(10, sizeof(char));
    for (int i = 0; i < sizeof(input) / sizeof(input[0]); i++)
    {
        scanf("%s", &input[i]);
    }
    
    int maxHighet = 0;
    int len = strlen(input);
    for (int i = 0; i < len; i++){                                  // This for loop assigns the input arr to every alphabet using ascii math and 
        int index = input[i] - 'a';                                 // finds the max height
        
        if (arr[index] > maxHighet){
            maxHighet = arr[index];
        }
    }

    printf("%d", maxHighet * len);
    
    

    free(arr);
    free(input);

    return 0;
}