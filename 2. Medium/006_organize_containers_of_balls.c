// Problem: Organize Containers of Balls
// link: https://www.hackerrank.com/challenges/organizing-containers-of-balls/problem
// Approach: Compute row sums (container sizes) and column sums (ball type totals).
//           If both sorted lists are identical, the arrangement is possible.

#include<stdio.h>
#include<stdlib.h>

int cmp_11(const void *p1, const void *p2){
    long long a = *(const long long*)p1;
    long long b = *(const long long*)p2;

    if(a < b){
        return -1;
    }
    if(a > b){
        return 1;
    }
    return 0;
}

int main(){

    int q = 0;
    scanf("%d", &q);

    while(q--){
        int n;
        scanf("%d", &n);

        long long *cap = (long long*)calloc(n, sizeof(long long));
        long long *type = (long long*)calloc(n, sizeof(long long));

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                long long x;
                scanf("%lld", &x);

                cap[i] += x;
                type[j] += x;
            }
        }

        qsort(cap, n, sizeof(long long), cmp_11);
        qsort(type, n, sizeof(long long), cmp_11);

        int possible = 1;
        for (int i = 0; i < n; i++){
            if (cap[i] != type[i]){
                possible = 0;
                break;
            }
        }

        if(possible){
            printf("Possible\n");
        }

        else{
            printf("Impossible\n");
        }

        free(cap);
        free(type);
    }

    return 0;
}