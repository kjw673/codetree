#include <stdio.h>

int main() {
    // Please write your code here.
    int num[10],sum=0,cnt=0,j=0;

    for(int i=0;i<10;i++){
        scanf("%d ",&num[i]);
    }
    
    while(1){
        if(num[j]<250){
            sum+=num[j];
            cnt++;
        }
        else{
            printf("%d %.1f",sum,1.0*sum/cnt);
            break;
        }
        j++;
    }
    return 0;
}