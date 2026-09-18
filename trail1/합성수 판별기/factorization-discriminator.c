#include <stdio.h>

int main() {
    // Please write your code here.
    int n,com=0;

    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i==0) com++;
    }
    printf("%c",com>0 ? 'C' : 'N');
    return 0;
}