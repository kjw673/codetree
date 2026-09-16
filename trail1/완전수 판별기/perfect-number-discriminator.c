#include <stdio.h>

int main() {
    // Please write your code here.
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    printf("%c",sum==n ? 'P' : 'N');
    return 0;
}