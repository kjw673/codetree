#include <stdio.h>

int main() {
    // Please write your code here.
    int n,cnt=2;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",cnt);
            if(cnt==8){
                cnt=2;
            }else{
                cnt+=2;
            }
        }
        printf("\n");
    }
    return 0;
}