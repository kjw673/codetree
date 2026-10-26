#include <stdio.h>

int returnSumDividedTen(int N){
    return N*(N+1)/20;
}

int main() {
    int n;
    scanf("%d", &n);
    // Please write your code here.
    printf("%d",returnSumDividedTen(n));
    return 0;
}