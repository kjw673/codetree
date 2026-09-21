#include <stdio.h>

int main() {
    // Please write your code here.
    int n,temp;
    scanf("%d",&n);
    temp = n;
    for(int k=0;k<temp;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                printf("*");
            }
            printf(" ");
        }
        printf("\n");
        n--;
    }

    return 0;
}