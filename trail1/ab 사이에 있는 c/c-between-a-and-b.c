#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b,c,ex=0;
    scanf("%d %d %d",&a,&b,&c);
    for(int i=a;i<=b;i++){
        if(i%c==0) ex++;
    }

    printf("%s", ex>0 ? "YES" : "NO");
    return 0;
}