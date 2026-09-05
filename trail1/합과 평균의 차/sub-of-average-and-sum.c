#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d\n%d\n%d",a+b+c,(a+b+c)/3,2*(a+b+c)/3);
    return 0;
}