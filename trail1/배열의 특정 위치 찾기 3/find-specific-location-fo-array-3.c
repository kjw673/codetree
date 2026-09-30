#include <stdio.h>

int main() {
    // Please write your code here.
    int intg[100];
    int sum=0,i=0;

    while(1){
        scanf("%d",&intg[i]);
        if(intg[i]==0){
            sum+=intg[i-1] + intg[i-2] + intg[i-3];
            printf("%d",sum);
            break;
        }
        i++;
    }
    return 0;
}