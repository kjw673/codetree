#include <stdio.h>

int main() {
    int cnt=0, n[10];
    for(int i=0;i<10;i++){
        scanf("%d",&n[i]);
        if(n[i]%2==1){
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}