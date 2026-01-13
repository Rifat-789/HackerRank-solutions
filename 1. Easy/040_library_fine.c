// Problem: Library Fine
// link: https://www.hackerrank.com/challenges/library-fine/problem
// Approach: Compare return date with due date step by step (year → month → day). Apply the highest applicable fine: 
//           year late → 10000, same year but month late → 500 per month, same month but day late → 15 per day, otherwise no fine.


#include<stdio.h>

int main(){

    int d1, m1, y1;
    scanf("%d %d %d", &d1, &m1, &y1);                       // Return date

    int d2, m2, y2;
    scanf("%d %d %d", &d2, &m2, &y2);                       // Due date


    if (y1 > y2){
        printf("10000");
    }
    
    else if(y1 == y2 && m1 > m2){
        printf("%d", (m1 - m2) * 500);
    }

    else if(y1 == y2 && m1 == m2 && d1 > d2){
        printf("%d", (d1 - d2) * 15);
    }

    else{
        printf("0");
    }





    return 0;
}