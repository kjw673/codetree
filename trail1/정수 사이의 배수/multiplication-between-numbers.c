#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b,sum=0,cnt=0;
    float avg;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        if(i%5==0 || i%7==0){
            sum+=i;
            cnt++;
        }

    }
    avg = 1.0*sum/cnt;
    printf("%d %.1f",sum,avg);
    return 0;
}