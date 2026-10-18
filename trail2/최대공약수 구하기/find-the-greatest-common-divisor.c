#include <stdio.h>

void printGCD(int n1, int n2){
    int GCD;
    for(int i=1;i<=n2;i++){
        if(n1%i==0 && n2%i==0){
            GCD=i;
        }
    }
   
    printf("%d",GCD);
}
int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    // Please write your code here.
    printGCD(n, m);
    
    return 0;
}