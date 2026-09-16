#include <stdio.h>

int main() {
    // Please write your code here.
    int n,sum=0,cnt=0;
    float avg;
    for(int i=0;i<10;i++){
        scanf("%d",&n);
        if(n>=0 && n<=200){
            sum+=n;
            cnt++;
        }
    }
    avg = 1.0*sum/cnt;
    printf("%d %.1f",sum,avg);
    return 0;
}