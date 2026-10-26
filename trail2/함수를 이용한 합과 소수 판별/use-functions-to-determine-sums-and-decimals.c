#include <stdio.h>

int isSuperNum(int n);
int countSuperNum(int a, int b);


int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    // Please write your code here.
    printf("%d",countSuperNum(a,b));
    return 0;
}

int isSuperNum(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
            break;
        }
    }

    if((n%10+n/10)%2==0){
        return 1;
    }

    return 0;
}

int countSuperNum(int a, int b){
    int count=0;
    for(int i=a;i<=b;i++){
        count+=isSuperNum(i);
    }
    return count;
}