#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);

    for(int i=n;i>0;i--){
        for(int j=1;j<=n;j++){
            if(j>=i){
                printf("%d ",j);
            }
        }
        printf("\n");
    }
    return 0;
}