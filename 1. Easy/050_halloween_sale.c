// Problem: Halloween Sale
// link: https://www.hackerrank.com/challenges/halloween-sale/problem
// Approach: Take all the inputs. Reduce the available currency by current price. increase count. Then check
//           if the next discount price is possible or not. 


#include<stdio.h>

int main(){

    int p, d, m, s;
    scanf("%d %d %d %d", &p, &d, &m, &s);

    int count = 0;
    int current = p;
    while (s >= current){
            s -= current;
           count++;
        
        if (current - d >= m){
            current -= d;
        }

        else{
            current = m;
        }
    }
    
    printf("%d", count);


    return 0;
}