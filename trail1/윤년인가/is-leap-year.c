#include <stdio.h>

int main() {
    // Please write your code here.
    int Y;
    scanf("%d",&Y);
    if(Y%4==0){
        if(Y%100==0 && Y%400!=0){
            printf("false");
        }
        else{
            printf("true");
        }
    }else{
        printf("false");
    }
    return 0;
}