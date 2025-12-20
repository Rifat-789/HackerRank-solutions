// Problem: Day of the Program
// link: https://www.hackerrank.com/challenges/day-of-the-programmer/problem
// Approach: // Check leap year rules for the given year and compute the date of the 256th day.

#include<stdio.h>

int main(){

    int year = 0;
    scanf("%d", &year);

    if (year > 1918){
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
            printf("12.09.%d", year);
        }
        
        else{
            printf("13.09.%d", year);
        }
    }
    
    else if (year < 1918){
        if (year % 4 == 0){
            printf("12.09.%d", year);
        }
        
        else{
            printf("13.09.%d", year);
        }
    }
    
    else if (year == 1918){
        printf("26.09.%d", year);
    }
    

    return 0;
}