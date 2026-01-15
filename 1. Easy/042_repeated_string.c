// Problem: Repeated String
// link: https://www.hackerrank.com/challenges/repeated-string/problem
// Approach: First, find the length of the string and count how many times 'a' appears in it. Then calculate
//           how many full repetitions of the string fit into n and multiply that by the 'a' count. 
//           Finally, count 'a' in the remaining characters and add it to the total.


#include<stdio.h>

int main(){

    char s[101];
    scanf("%s", s);

    long long n = 0;
    scanf("%lld", &n);

    long long length = 0;
    for (int i = 0;s[i] != '\0' ; i++){                                 // This calculates the length of the string
        length++;
    }
    
    long long result = n / length;
    long long remainder = n % length;

    long long frequency = 0;
    for (int i = 0;s[i] != '\0'; i++){                                  // This calculates how many 'a' is in the string
        if (s[i] == 'a'){
            frequency++;
        }
    }

    long long total = result * frequency;
    long long extra = 0;
    for (int i = 0; i < remainder; i++){                                // This calculates number of extra 'a' in the remainder
        if (s[i] == 'a'){
            extra++;
        }
        
    }
    

    long long final = total + extra;
    
    printf("%lld", final);


    return 0;
}