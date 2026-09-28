#include <stdio.h>

int main() {
    // Please write your code here.
    int n,c=65;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%c",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}