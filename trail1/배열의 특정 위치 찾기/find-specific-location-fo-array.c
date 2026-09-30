#include <stdio.h>

int main() {
    // Please write your code here.
    int intg[10];
    int arrEven=0,arrM3=0;
    for(int i=0;i<10;i++){
        scanf("%d",&intg[i]);
        if((i+1)%2==0) arrEven+=intg[i];
        if((i+1)%3==0) arrM3+=intg[i];
    }
    printf("%d %.1f",arrEven,(float)arrM3/3);
    
    return 0;
}