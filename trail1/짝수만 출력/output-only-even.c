#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b,i;
    scanf("%d %d",&a,&b);
    i=a;
    while(b>=i){
        if(i%2==0){
            printf("%d ",i);
        }
        i++;
    }
    return 0;
}