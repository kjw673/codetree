#include <stdio.h>

int main() {
    // Please write your code here.
    int start,end,cntThree=0;

    scanf("%d %d",&start,&end);
    for(int i=start;i<=end;i++){
        int cnt=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                cnt++;
            }
        }
        if(cnt==3){
            cntThree++;
        }
    }
    printf("%d",cntThree);
    return 0;
}