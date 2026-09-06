#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);
    if(n==2){
        printf("28");
    }
    else if(n<=7 && n%2==1){
        printf("31");
    }
    else if(n<=6 && n%2==0){
        printf("30");
    }
    else if(n>=9 && n%2==1){
        printf("30");
    }else if(n>=8 && n%2==0){
        printf("31");
    }
    return 0;
}