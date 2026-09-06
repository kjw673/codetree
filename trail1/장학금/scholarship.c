#include <stdio.h>

int main() {
    // Please write your code here.
    int mid,final;
    scanf("%d %d",&mid,&final);
    if(mid>=90 && final >=95){
        printf("100000");
    }
    else if(mid>=90 && final>=90){
        printf("50000");
    }
    else{
        printf("0");
    }
    return 0;
}