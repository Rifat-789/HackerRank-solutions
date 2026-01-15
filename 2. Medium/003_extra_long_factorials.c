// Problem: Extra Long Factorials
// link: https://www.hackerrank.com/challenges/extra-long-factorials/problem
// Approach: Store the factorial as digits in an array and multiply step-by-step while handling carry manually.
//           Print the result in reverse order to form the final number.

#include<stdio.h>

int main(){

    int arr[3000];
    int number = 0;
    scanf("%d", &number);

    arr[0] = 1;
    int carry = 0;
    int size = 1;

    for (int j = 1; j <= number; j++){
        carry = 0;
        int i = 0;

        while(i < size){
            arr[i] = (arr[i] * j) + carry;
            carry = arr[i] / 10;                    // get digits except unit digit
            arr[i] = arr[i] % 10;                   // get unit digit
            i++;
        }
        
        while (carry != 0){                         // This loop appends remaining carry digits to the number
            arr[size] = carry % 10;
            carry = carry / 10;
            size++;                                 // Increases size while multiplication overflows
        }
    }
    
    for (int i = size - 1; i >= 0; i--){
        printf("%d", arr[i]);
    }
    




    return 0;
}