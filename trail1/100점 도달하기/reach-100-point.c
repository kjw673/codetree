#include <stdio.h>

int main() {
    // Please write your code here.
    int score;
    scanf("%d",&score);
    while(100>=score){
        if(score>=90){
            printf("A ");
        }else if(score>=80){
            printf("B ");
        }else if(score>=70){
            printf("C ");
        }else if(score>=60){
            printf("D ");
        }else{
            printf("F ");
        }
        score+=1;
    }
    return 0;
}