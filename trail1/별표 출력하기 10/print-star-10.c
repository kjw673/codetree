#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);

    for(int i=1;i<=2*n;i++){
        if(i%2==1){
            for(int j=0;j<i/2+1;j++){
                printf("* ");
            }
        }
        else{
            for(int j=0;j<n-i/2+1;j++){
                printf("* ");
            }
        }

        printf("\n");
    }
    return 0;
}