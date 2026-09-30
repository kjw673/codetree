#include <stdio.h>

int main() {
    // Please write your code here.
    int intg[100];
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&intg[i]);
    }

    for(int i=n-1;i>=0;i--){
        if(intg[i]%2==0){
            printf("%d ",intg[i]);
        }
    }
    return 0;
}