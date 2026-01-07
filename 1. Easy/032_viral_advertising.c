// Problem: Viral Advertising
// link: https://www.hackerrank.com/challenges/strange-advertising/problem
// Approach: Each day, half of the people like the ad and each share it with 3 friends
//           Accumulate likes and update the number of people daily


#include<stdio.h>
#include<math.h>

int main(){

    int day = 0;
    scanf("%d", &day);

    int people = 5;
    int liked = 0;
    int shared = 0;
    int totalLiked = 0;
    for (int i = 0; i < day; i++){
        liked = floor(people / 2);
        shared = liked * 3;
        people = shared;
        totalLiked = totalLiked + liked;
    }
    
    printf("%d", totalLiked);


    return 0;
}