#include <stdio.h>

float avg(int n,int m)
{
    return (n+m)/2.0;
}


int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d %.1f",a+b,avg(a,b));
    return 0;
}
