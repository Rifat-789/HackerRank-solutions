// Problem: Modified Kapraker Number
// link: https://www.hackerrank.com/challenges/kaprekar-numbers/problem
// Approach: Count the digits of the given number. Calculate left and right number using pow10 function. Add both
//             and check if it equals to the number.


#include<stdio.h>

int countDigits(int n){
    if(n == 0){
        return 1;
    }

    int d = 0;
    while (n > 0){
        d++;
        n /= 10;
    }
    return d;
}

long long pow10_int(int d){
    int power = 1;
    while(d--){
        power *= 10;
    }
    return power;
}


int main(){

    int p, q;
    scanf("%d %d", &p, &q);

    int found = 0;

    for (int i = p; i <= q; i++){
        int digit = countDigits(i);

        long long square = 1LL * i * i;
        long long mult = pow10_int(digit);

        long long right = square % mult;
        long long left = square / mult;
        
        if(right + left == i){
            if(found){
                printf(" ");
            }
            printf("%d", i);
            found = 1;
        }
    }

    if(!found){
        printf("INVALID RANGE");
    }
    


    return 0;
}