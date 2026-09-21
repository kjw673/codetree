#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);

    for(int i=1;i<2*n;i+=2){
        for(int k=1;k<i;k+=2){
            printf("  ");
        }
        for(int j=0;j<2*n-i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}