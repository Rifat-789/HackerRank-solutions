// Problem: Encryprion
// link: https://www.hackerrank.com/challenges/encryption/problem
// Approach: Remove spaces from the string, compute the grid size using square roots,
// then read the characters column-by-column using index arithmetic to build the encrypted output.


#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){

    char s[100];
    fgets(s, sizeof(s), stdin);

    int used = strlen(s);

    if (used > 0 && s[used - 1] == '\n'){
        used--;
    }
    
    int row = floor(sqrt(used));
    int column = ceil(sqrt(used));

    for (int c = 0; c < column; c++){
        for (int r = 0; r < row + 1; r++){
            int index = r * column + c;                                 // Formula for a grid with c columns

            if (index < used){
                putchar(s[index]);
            }
        }
        
        putchar(' ');
    }
    
    
    


    return 0;
}