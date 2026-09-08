#include <stdio.h>

int main() {
    // Please write your code here.
    int n,i=1;
    scanf("%d",&n);

    while(n>=i){
        if(i%3==0){
            printf("%d ",i);
        }
        i++;
    }
    return 0;
}