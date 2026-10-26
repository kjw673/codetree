#include <stdio.h>
int count369(int a, int b){
    int cnt=0;
    while(a<=b){
        int i=a;
        if(a%3==0){
            cnt++;
            a++;
            continue;
        }
        while(i>0){
            if(i%10==3 || i%10==6 || i%10==9){
                cnt++;
                break;
            }
            i/=10;
        }
        a++;
    }
    return cnt;
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    // Please write your code here.
    printf("%d",count369(a, b));
    return 0;
}