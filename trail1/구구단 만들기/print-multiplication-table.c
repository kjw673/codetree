#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d %d",&a,&b);

    for(int i=1;i<=9;i++){
        for(int j=b;j>=a;j-=2){
            printf("%d * %d = %d",j,i,i*j);
            if(j!=a){
                printf(" / ");
            }
        }
        printf("\n");
    }
    return 0;
}