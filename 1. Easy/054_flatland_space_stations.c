// Problem: Flatland Space Stations
// link: https://www.hackerrank.com/challenges/flatland-space-stations/problem
// Approach: Use qsort function to sort the array of stations. Using this sorted array, calculate the distance before the 1st station, 
//           distance after the last station and distance between every two stations. Then print the maximum distance among them.

#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}

int main(){

    int n = 0, m = 0;
    scanf("%d %d", &n, &m);

    int arr[m];

    for (int i = 0; i < m; i++){
        scanf("%d", &arr[i]);
    }

    qsort(arr, m, sizeof(int), compare);

    int maximum = 0;

    if (arr[0] > maximum){
        maximum = arr[0];
    }

    for (int i = 0; i < m - 1; i++){
        int distant = (arr[i + 1] - arr[i]) / 2;

        if (distant > maximum){
            maximum = distant;
        }
    }

    if ((n - 1 - arr[m - 1]) > maximum){
            maximum = n - 1 - arr[m - 1];
        }

    
    printf("%d", maximum);

    return 0;
}