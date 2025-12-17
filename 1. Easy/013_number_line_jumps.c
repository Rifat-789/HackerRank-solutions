#include<stdio.h>

int main(){

    int x1 = 0, x2 = 0, v1 = 0, v2 = 0;
    int count = 0;

    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);

    if (v1 > v2 && (x2 - x1) % (v1 - v2) == 0){
        printf("YES");
    }

    else{
        printf("NO");
    }
    

    return 0;
}