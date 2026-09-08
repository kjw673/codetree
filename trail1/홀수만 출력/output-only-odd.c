#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d %d",&a,&b);
    a = a%2==0 ? a+=1 : a;
    for(int i=a; i<=b; i+=2){
        printf("%d ",i);
    }
    return 0;
}