#include <stdio.h>

int main() {
    // Please write your code here.
    char c[10];

    for(int i=0;i<10;i++){
        scanf(" %c",&c[i]);
    }

    printf("%c %c %c",c[1],c[4],c[7]);
    return 0;
}