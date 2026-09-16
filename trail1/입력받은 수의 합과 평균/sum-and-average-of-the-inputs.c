#include <stdio.h>

int main() {
    // Please write your code here.
    int n,num,sum=0;
    float avg;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&num);
        sum+=num;
    }
    avg = 1.0*sum/n;
    printf("%d %.1f",sum,avg);
    return 0;
}