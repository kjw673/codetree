#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d %d",&b,&a);
    b = b%2==0 ? b : b-1;
    while(b>=a){
        printf("%d ",b);
        b-=2;
    }
    return 0;
}