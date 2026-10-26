#include <stdio.h>

int IsPrimeNum(int a){
    int prime=1;
    for(int i=2;i*i<=a;i++){
        if(a%i==0){
            prime=0;
            break;
        }
    }
    if(prime==1){
        return a;
    }else{
        return 0;
    }
}

int main() {
    int a, b,sum=0;
    scanf("%d %d", &a, &b);
    // Please write your code here.
    for(int i=a;i<=b;i++){
        sum+=IsPrimeNum(i);
    }

    printf("%d",sum);
    return 0;
}