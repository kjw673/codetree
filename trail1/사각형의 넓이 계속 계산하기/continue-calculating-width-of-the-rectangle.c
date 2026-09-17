#include <stdio.h>

int main() {
    // Please write your code here.
    int L1,L2;
    char C;
    while(1){
        scanf("%d %d %c",&L1,&L2,&C);
        printf("%d\n",L1*L2);
        if(C == 'C') break;
    }
    return 0;
}