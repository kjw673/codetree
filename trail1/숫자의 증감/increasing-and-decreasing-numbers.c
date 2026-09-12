#include <stdio.h>

int main() {
    // Please write your code here.
    char c;
    int n;
    scanf("%c %d",&c,&n);
    if(c == 'A'){
        for(int i=1;i<=n;i++){
            printf("%d ",i);
        }
    }else{
        for(int i=n;i>0;i--){
            printf("%d ",i);
        }
    }
    return 0;
}