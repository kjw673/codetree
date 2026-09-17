#include <stdio.h>

int main() {
    // Please write your code here.
    int n,div,cnt=0;
    scanf("%d",&n);
    div = n;
    for(int i=1;i<=n;i++){
        div/=i;
        if(div <=1){
            printf("%d",i);
            break;
        }
    }
    return 0;
}