#include <stdio.h>

int main() {
    // Please write your code here.
    int intg[10];
    int frontZero;
    for(int i=0;i<10;i++){
        scanf("%d",&intg[i]);
        if(intg[i]==0){
            frontZero = i-1;
            break;
        }else{
            frontZero=9;
        }
    }

    for(int i=frontZero;i>=0;i--){
        printf("%d ",intg[i]);
    }
    return 0;
}