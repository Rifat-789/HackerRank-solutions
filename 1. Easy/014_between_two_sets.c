// Problem: Between two sets
// link: https://www.hackerrank.com/challenges/between-two-sets/problem
// Approach: Compute LCM of the first array and GCD of the second array.
//           Iterate through multiples of the LCM up to the GCD and count those
//           that divide the GCD exactly.

#include<stdio.h>

int gcd(int a, int b){
    while (b != 0){
        int temp = b;
        b = a % b;
        a = temp;
   }
   return a;
}

int gcd_arr(int arr[], int n){
    int result = arr[0];

    for (int i = 1; i < n; i++){
        result = gcd(result, arr[i]);
    }
    return result;
}

int lcm(int a, int b){
    return (a * b) / gcd(a, b);
}

int lcm_arr(int arr[], int n){
    int result = arr[0];

    for (int i = 1; i < n; i++){
        result = lcm(result, arr[i]);
    }
    return result;
}



int main(){

    int size1 = 0, size2 = 0;
    scanf("%d %d", &size1, &size2);


    int arr1[size1], arr2[size2];

    for (int i = 0; i < size1; i++){
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < size2; i++){
        scanf("%d", &arr2[i]);
    }
    
    int lcmA = lcm_arr(arr1, size1);
    int gcdB = gcd_arr(arr2, size2);

    int count = 0;

    for (int i = lcmA; i <= gcdB; i += lcmA){
        if (gcdB % i == 0){
            count++;
        }
    }
    
    printf("%d", count);


    return 0;
}