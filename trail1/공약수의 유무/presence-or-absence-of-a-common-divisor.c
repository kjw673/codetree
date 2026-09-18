#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b,cnt=0;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        if(1920%i==0 && 2880%i==0){
            cnt++;
        }
    }

    printf("%d",cnt>0 ? 1 : 0);
    return 0;
}