#include <stdio.h>

int main() {
    // Please write your code here.
    int element[10],sum=0;
    for(int i=0;i<10;i++){
        scanf("%d ",&element[i]);
        sum+=element[i];
    }
    printf("%d",sum);
    return 0;
}