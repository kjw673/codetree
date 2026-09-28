#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                printf("%d ", i*n+j+1);
            }
        }else{
            for(int j=0;j<n;j++){
                printf("%d ", (i+1)*n-j);
            }
        }
        printf("\n");
    }
    return 0;
}