#include<stdio.h>

int main(){

    char s[100];
    scanf("%s", &s);

    int n = 0;
    scanf("%d", &n);

    int count = 0;
    for (int i = 0;s[i] != '\0' ; i++){
        count++;
    }
    
    int result = n / count;
    int remainder = n % count;

    int frequency = 0;
    for (int i = 0;s[i] != '\0'; i++){
        if (s[i] == 'a'){
            frequency++;
        }
    }

    int total = result * frequency;
    int final = total + remainder;
    
    printf("%lld", final);


    return 0;
}