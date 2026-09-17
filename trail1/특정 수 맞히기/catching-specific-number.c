#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    while(1){
        scanf("%d",&n);
        if(n<25){
            printf("Higher\n");
        }else if(n>25){
            printf("Lower\n");
        }else if(n==25){
            printf("Good\n");
            break;
        }else{
            printf("Not Number\n");
        }

    }
    return 0;
}