// Problem: Bigger is Greater
// link: https://www.hackerrank.com/challenges/bigger-is-greater/problem
// Approach: Start from the right. Find the point where the descending has stopped. Mark that as i. Now find the smallest word at the right of i
//           which is bigger than i. then swap them. After that, reverse the descending to ascending.
#include<stdio.h>
#include<string.h>

int main(){

    int test;
    scanf("%d", &test);

    int length;
    while (test--){
        char word[101];
        scanf("%s", &word);

        length = strlen(word);

        int i = length - 2;
        while (i >= 0 && word[i] >= word[i + 1]){
            i--;
        }

        if (i < 0){
            printf("no answer\n");
            continue;
        }

        int j = length - 1;
        while (word[j] <= word[i]){
            j--;
        }

        char temp = word[i];
        word[i] = word[j];
        word[j] = temp;

        int start = i + 1;
        int end = length - 1;
        while (start < end){
            char temp = word[start];
            word[start] = word[end];
            word[end] = temp;
            start++;
            end--;
        }

        printf("%s\n", word);
    }


    return 0;
}