#include <stdio.h>

int main() {
    // Please write your code here.
    int n,x=0;
    scanf("%d",&n);
    while(1){
        if(n==1){
            printf("%d",x);
            break;
        }
        n/=2;
        x++;

    }
    return 0;
}