// Problem: The Time in Words
// link: https://www.hackerrank.com/challenges/the-time-in-words/problem
// Approach: Store the word value of number 0 to 29 in an array. Calculate the answer using if-else condition.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    int h, m;
    scanf("%d", &h);
    scanf("%d", &m);

    char *numbers[] = {
        "zero","one","two","three","four","five","six",
        "seven","eight","nine","ten","eleven","twelve",
        "thirteen","fourteen","quarter","sixteen",
        "seventeen","eighteen","nineteen","twenty",
        "twenty one","twenty two","twenty three",
        "twenty four","twenty five","twenty six",
        "twenty seven","twenty eight","twenty nine"
    };

    if(m == 0){
        printf("%s o' clock\n", numbers[h]);
    }

    else if(m == 15){
        printf("quarter past %s\n", numbers[h]);
    }

    else if(m == 30){
        printf("half past %s\n", numbers[h]);
    }

    else if(m == 45){
        printf("quarter to %s\n", numbers[h + 1]);
    }

    else if(m == 1){
        printf("one minute past %s\n", numbers[h]);
    }

    else if(m < 30){
        printf("%s minutes past %s\n", numbers[m], numbers[h]);
    }

    else if(m > 30){
        printf("%s minutes to %s\n", numbers[60 - m], numbers[h + 1]);
    }



    return 0;
}