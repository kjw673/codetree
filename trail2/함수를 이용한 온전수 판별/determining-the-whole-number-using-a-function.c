#include <stdio.h>
int isOnjeon(int n){
    if(n%2==0 || n%10==5 || (n%3==0 && n%9!=0)){
        return 0;
    }else{
        return 1;
    }
}

int countOnjeon(int a, int b){
    int count=0;    
    for(int i=a;i<=b;i++){
        if(isOnjeon(i)) count++;
    }

    return count;
}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    printf("%d",countOnjeon(A, B));
    return 0;
}