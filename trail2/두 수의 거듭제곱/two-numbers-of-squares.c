#include <stdio.h>

int APowerOfB(int A, int B){
    int prod=1;
    for(int i=0;i<B;i++){
        prod*=A;
    }
    return prod;
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    // Please write your code here.
    printf("%d",APowerOfB(a, b));
    return 0;
}