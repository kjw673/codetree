#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        if(i%2==1) printf("*");

        if(i%2==0){
            for(int j=0;j<i;j++){
                printf("* ");
            }
        }
        
        printf("\n");
    }
    return 0;
}