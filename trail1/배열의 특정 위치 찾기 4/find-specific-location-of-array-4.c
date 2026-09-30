#include <stdio.h>

int main() {
    // Please write your code here.
    int intg[10],sum=0,cnt=0,stop;
    for(int i=0;i<10;i++){
        scanf("%d",&intg[i]);
        if(intg[i]==0){
            break;
        }else if(intg[i]%2==0){
            cnt++;
            sum+=intg[i];
        }
    }
    printf("%d %d",cnt,sum);
    return 0;
}