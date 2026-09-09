#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b,temp1,temp2;
    scanf("%d %d",&a,&b);
    printf("%d.",a/b);
    temp1 =a%b*10;
    for(int i=0;i<20;i++)
    {
        printf("%d",temp1/b);
        temp1=temp1%b*10;
    
    }
    return 0;
}