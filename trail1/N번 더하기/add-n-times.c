#include <stdio.h>

int main() {
    // Please write your code here.
    int a,n;
    scanf("%d %d",&a,&n);
    for(int i=0;i<n;i++){
        printf("%d\n",a+n);
        a+=n;
    }
    return 0;
}