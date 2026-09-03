#include <stdio.h>

int main() {
    int a = 5;
    int b = 6;
    int c = 7;
    int temp;
    temp = c;
    a = temp;
    b = temp;
    printf("%d %d %d",a,b,c);
    return 0;
}