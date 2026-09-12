#include <stdio.h>

int main() {
    // Please write your code here.
    int n,a,temp = 1;
    scanf("%d %d",&n,&a);
    while(n>=temp){
        if(temp%a==0){
            printf("1\n");
        }else{
            printf("0\n");
        }
        temp+=1;
    }
    return 0;
}