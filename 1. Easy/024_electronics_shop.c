// Problem: Electronics Shop
// link: https://www.hackerrank.com/challenges/electronics-shop/problem
// Approach: Check every keyboard–USB price combination and track the highest total 
//           that does not exceed the budget


#include<stdio.h>
#include<stdlib.h>

int main(){

    int budget = 0, keyboard = 0, usb = 0;
    scanf("%d %d %d", &budget, &keyboard, &usb);

    int *keyboardPrices = calloc(keyboard, sizeof(int));
    for (int i = 0; i < keyboard; i++){
        scanf("%d", &keyboardPrices[i]);
    }

    int *usbPrices = calloc(usb, sizeof(int));
    for (int i = 0; i < usb; i++){
        scanf("%d", &usbPrices[i]);
    }
    
    int max = -1;
    for (int i = 0; i < keyboard; i++){
        for (int j = 0; j < usb; j++){
            int total = keyboardPrices[i] + usbPrices[j];

            if (total <= budget && total > max){                    // highest total that doesn't exceed the budget
                max = total;
            }
        }
    }
    
    printf("%d", max);


    free(keyboardPrices);
    free(usbPrices);

    return 0;
}