#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b,c,cnt=0;
    scanf("%d %d %d",&a,&b,&c);
    for(int i=a;i<=b;i++){
        if(i%c==0) cnt++;
    }
    printf("%s",cnt>0 ? "NO" : "YES");
    return 0;
}