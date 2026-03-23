// Problem: Chocolate Feast
// link: https://www.hackerrank.com/challenges/chocolate-feast/problem
// Approach: Use while loop for multiple test cases. Start total chocolate with init. Add the number of chocolate after each exchange.
//           Keep track of remaining wrappers. loop until wrapper reach 0.


#include<stdio.h>
#include<math.h>

int main(){

    int test;
    scanf("%d", &test);

    while(test--){
        int n, c, m, init;
        scanf("%d %d %d", &n, &c, &m);

        init = n / c;                       // The chocolate you can get with only the money
        
        int total, remaining, add;
        total = init;                       // start with init chocolates

        while(init / m != 0){
            remaining = init % m;           // How many wrappers left after exchange
            add = floor(init / m);          // Number of chocolate from exchange
            total = total + add;            // add to the total

            init = remaining + add;         // Number of wrappers after the exchange
        }

        printf("%d\n", total);
    }




    return 0;
}