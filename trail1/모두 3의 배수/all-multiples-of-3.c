#include <stdio.h>

int main() {
    // Please write your code here.
    int n,No=0;
    for(int i=0;i<5;i++){
        scanf("%d",&n);
        if(n%3!=0) No++;
    }

    printf("%d",No>0 ? 0 : 1);
    return 0;
}