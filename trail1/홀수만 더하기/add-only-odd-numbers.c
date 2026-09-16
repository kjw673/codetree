#include <stdio.h>

int main() {
    // Please write your code here.
    int n,num,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&num);
        if(num%3==0 && num%2==1){
            sum+=num;
        }
    }
    printf("%d",sum);
    return 0;
}