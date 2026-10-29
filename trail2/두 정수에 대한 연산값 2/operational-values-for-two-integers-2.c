#include <stdio.h>

void cal(int *n1, int *n2){
    if(*n1<*n2){
        *n1+=10;
        *n2*=2;
    }else{
        *n2+=10;
        *n1*=2;
    }
}
int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    
    cal(&a,&b);
    printf("%d %d",a,b);

    return 0;
}