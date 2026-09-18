#include <stdio.h>

int main() {
    // Please write your code here.
    int n,NotPrime=0;
    scanf("%d",&n);
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            NotPrime++;
        }
    }
    printf("%c",NotPrime>0 ? 'C' : 'P');
    return 0;
}