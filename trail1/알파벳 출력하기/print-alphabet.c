#include <stdio.h>

int main() {
    // Please write your code here.
    int n,c=65;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>=j){
                printf("%c",c);
                if(c>89){
                    c=65;
                }else{
                    c++;
                }
            }
        }
        printf("\n");
    }
    return 0;
}