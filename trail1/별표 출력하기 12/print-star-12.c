#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0){
                printf("* ");
            }
            else if(j%2==0){
                printf("  ");
            }else{
                if(j>=i){
                    printf("* ");
                }else{
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}