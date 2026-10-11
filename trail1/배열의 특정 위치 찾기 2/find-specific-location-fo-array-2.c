#include <stdio.h>
#include <stdlib.h>
int main() {
    // Please write your code here.
    int intg[10];
    int sumOdd=0, sumEven=0;

    for(int i=0;i<10;i++){
        scanf("%d",&intg[i]);
        if(i%2==0){
            sumEven+=intg[i];
        }else{
            sumOdd+=intg[i];
        }
    }

    printf("%d",abs(sumOdd-sumEven));


    return 0;
}