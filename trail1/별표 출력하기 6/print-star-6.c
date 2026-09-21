#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        for(int k=0;k<i;k++){
            printf("  ");
        }
        for(int j=0;j<2*(n-i)-1;j++){
            printf("* ");
        }
        printf("\n");
    }

    for(int i=1;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            printf("  ");
        }

        for(int k=0;k<=2*i;k++){
            printf("* ");
        }

        printf("\n");
    }
    return 0;
}