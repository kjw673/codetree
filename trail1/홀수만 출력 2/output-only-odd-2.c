#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d %d",&b,&a);
    b = b%2==0 ? b-1 : b;
    for(int i =b; i>=a;i-=2){
        printf("%d ",i);
    }
    return 0;
}