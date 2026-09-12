#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d %d",&a,&b);
    while(a<=b){        
        printf("%d ",a);
        if(a%2==0){
            a+=3;
        }else{
            a*=2;
        }
    }
    return 0;
}