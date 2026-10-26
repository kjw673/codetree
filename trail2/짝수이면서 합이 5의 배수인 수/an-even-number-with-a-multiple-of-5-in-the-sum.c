#include <stdio.h>

int isNum(int n){
    return (n%2==0 && (n/10 + n%10)%5==0) ? 1 : 0;
}

int main() {
    int n;
    scanf("%d", &n);
    
    // Please write your code here.
    printf("%s", isNum(n)?"Yes":"No");
    return 0;
}