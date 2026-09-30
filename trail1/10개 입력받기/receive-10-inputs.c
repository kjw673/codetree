#include <stdio.h>

int main() {
    // Please write your code here.
    int intg[10];
    int cnt=0,sum=0,i=0;

    while(1){
        scanf("%d",&intg[i]);
        if(intg[i]==0 || i>9){
            printf("%d %.1f",sum,(float)sum/cnt);
            break;
        }
        cnt++;
        sum+=intg[i];
        i++;
    }
    return 0;
}