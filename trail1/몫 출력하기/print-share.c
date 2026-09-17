#include <stdio.h>

int main() {
    // Please write your code here.
    int n,stop=0;
    while(1){
        scanf("%d",&n);
        if(n%2==0){
            printf("%d\n",n/2);
            stop++;
        }

        if(stop == 3){
            break;
        }
    }
    return 0;
}