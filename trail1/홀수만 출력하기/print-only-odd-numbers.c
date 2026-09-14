#include <stdio.h>

int main() {
    // Please write your code here.
    int n,i=1;
    char num[100];
    scanf("%d",&n);
    for(int j =0;j<n;j++){
        scanf("%d",&num[j]);
    }
    for(int j =0;j<n;j++){
        if(num[j]%2==1 && num[j]%3==0){
            printf("%d\n",num[j]);
        }
    }
    
    return 0;
}