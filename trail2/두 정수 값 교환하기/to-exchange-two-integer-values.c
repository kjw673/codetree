#include <stdio.h>

void swap(int *n1, int *n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    // Please write your code here.
    swap(&n,&m);
    printf("%d %d",n,m);
    return 0;
}