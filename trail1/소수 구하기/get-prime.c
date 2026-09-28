#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);

    for(int i=2;i<=n;i++){
        int notPrime=0;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                notPrime++;
            }
        }
        if(notPrime==0){
            printf("%d ",i);
        }
    }
    return 0;
}