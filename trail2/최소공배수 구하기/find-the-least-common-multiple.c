#include <stdio.h>

void printLCM(int n1, int n2){
    int LCM,sum1=n1,sum2=n2;
    while(1){
        if(sum1<sum2){
            sum1+=n1;
        }else if(sum1>sum2){
            sum2+=n2;
        }else{
            LCM=sum1;
            break;
        }
    }
    printf("%d",LCM);
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    // Please write your code here.
    printLCM(n, m);
    return 0;
}