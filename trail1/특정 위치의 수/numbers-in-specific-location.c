#include <stdio.h>

int main() {
    // Please write your code here.
    int intg[10];
    for(int i=0;i<10;i++){
        scanf("%d",&intg[i]);
    }

    printf("%d",intg[2]+intg[4]+intg[9]);
    return 0;
}