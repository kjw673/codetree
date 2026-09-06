#include <stdio.h>

int main() {
    // Please write your code here.
    int a_m,a_e,b_m,b_e;
    scanf("%d %d",&a_m,&a_e);
    scanf("%d %d",&b_m,&b_e);
    printf("%d",a_m>b_m && a_e>b_e);
    return 0;
}