#include <stdio.h>

int main() {
    // Please write your code here.
    int n,num=11;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        num+=i*2;
        for(int j=0;j<n;j++){
            printf("%d ",num);
            num+=2;
        }
        printf("\n");
        num=11;
    }
    return 0;
}