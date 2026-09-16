#include <stdio.h>

int main() {
    // Please write your code here.
    int n,sum=0;
    scanf("%d",&n);
    for(int i=n;i<=100;i++){
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}