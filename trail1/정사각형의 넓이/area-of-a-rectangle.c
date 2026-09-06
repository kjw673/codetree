#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n<5){
        printf("%d\ntiny",n*n);
    }
    else{
        printf("%d",n*n);
    }
    return 0;
}