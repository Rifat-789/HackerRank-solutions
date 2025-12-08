// Problem: Time Conversion
// link: https://www.hackerrank.com/challenges/time-conversion/problem
// Approach: Convert the first two hour characters into an integer,
// adjust the hour based on AM/PM rules (12 AM → 00, PM → +12), then convert the hour
// back into characters and remove the AM/PM part.

#include<stdio.h>

int main(){

    char time[11];
    scanf("%s", time);

    int hour = ((time[0] - '0')*10 + (time[1] - '0'));

    if (time[8] == 'A' && hour == 12){
        hour = 0;
    }

    else if (time[8] == 'P' && hour != 12){
        hour += 12;
    }

    
    time[0] = (hour / 10) + '0';
    time[1] = (hour % 10) + '0';
    

    time[8] = '\0';

    printf("%s", time);
    

    return 0;
}