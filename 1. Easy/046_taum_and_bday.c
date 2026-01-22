// Problem: Taum and B'day
// link: https://www.hackerrank.com/challenges/taum-and-bday/problem
// Approach: Check which costs less , The original price of the gift or the transformation. Fix the lower one
//           as the main price and calculate total price.


#include<stdio.h>

int main(){

    long long testCase = 0;
    scanf("%lld", &testCase);

    while (testCase--){
        long long b, w;
        long long total = 0;
        scanf("%lld %lld", &b, &w);

        long long bc, wc, z;
        scanf("%lld %lld %lld", &bc, &wc, &z);

        if ((bc + z) < wc){
            wc = bc + z;
        }

        if ((wc + z) < bc){
            bc = wc + z;
        }

        total = (bc * b) + (wc * w);
        
        printf("%lld\n", total);
    }
    



    return 0;
}