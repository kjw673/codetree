#include <stdio.h>

int main() {
    // Please write your code here.
    int score;
    scanf("%d",&score);
    int pass = score == 100 ? 1 : 0;
    if(pass == 1){
        printf("pass");
    } 
    else{
        printf("failure");
    }
    return 0;
}