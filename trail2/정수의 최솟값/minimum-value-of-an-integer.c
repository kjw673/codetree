#include <stdio.h>

int returnMin(int a, int b, int c){
    int min=a;

    if(min>b){
        min = b;
    }
    if(min>c){
        min = c;
    }

    return min;
}
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    // Please write your code here.
    printf("%d",returnMin(a, b, c));
    
    return 0;
}