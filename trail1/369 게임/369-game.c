#include <stdio.h>

int main() {
    
    int n,i=1;
  
    scanf("%d", &n);
  
    while(n>=i){
        if((i%10==3 || i%10==6 || i%10==9) || i%3==0){
            printf("0 ");
        }else{
            if((i/10==3 || i/10==6 || i/10==9) && i>=10){
                printf("0 ");
            }else{
                printf("%d ",i);
            }
        }
        i+=1;
    }
    return 0;
}