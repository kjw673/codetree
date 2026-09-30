#include <stdio.h>

int main() {
    // Please write your code here.
    float scores[8];
    float sum=0;
    for(int i=0;i<8;i++){
        scanf("%f",&scores[i]);
        sum+=scores[i];
    }
    printf("%.1f",sum/8);
    return 0;
}