#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);
    for(int i = 0; i <= 100 - n; i++){
        printf("%d ", n + i);
    }
    return 0;
}