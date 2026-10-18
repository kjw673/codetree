#include <stdio.h>

void printSquare(int n){
    int num = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",num);
            if(num>=9){
                num=1;
            }else{
                num++;
            }
        }
        printf("\n");
    }
}
int main() {
    int N;
    scanf("%d", &N);
    // Please write your code here.

    printSquare(N);
    return 0;
}