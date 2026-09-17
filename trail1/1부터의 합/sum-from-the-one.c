#include <stdio.h>

int main() {
    // Please write your code here.
    int n,sum=0;
    scanf("%d",&n);

    for(int i=1;i<=100;i++){
        sum+=i;
        if(sum>=n){
            printf("%d",i);
            break;
        }
    }
    return 0;
}