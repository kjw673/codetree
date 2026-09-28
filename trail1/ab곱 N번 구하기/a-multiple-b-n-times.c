#include <stdio.h>


int main() {
    // Please write your code here.
    int n,a,b,prod;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        prod=1;
        scanf("%d %d",&a,&b);
        for(int j=a;j<=b;j++){
            prod*=j;
        }
        printf("%d\n",prod);
    }

    
    return 0;
}