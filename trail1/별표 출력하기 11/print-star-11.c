#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);

    for(int i=0;i<2*n+1;i++){
        if(i%2==0){
            for(int j=0;j<2*n+1;j++){
                printf("* ");
            }
        }
        else{
            for(int k=0;k<2*n+1;k++){
                if(k%2==0) printf("* ");
                else printf("  ");
            }
        }

        printf("\n");
    }
    return 0;
}