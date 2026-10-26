#include <stdio.h>

int plus(int a, int b){
    return a+b;
}

int minus(int a, int b){
    return a-b;
}

int product(int a, int b){
    return a*b;
}

int divide(int a, int b){
    return a/b;
}


int main() {
    int a, c;
    char o;
    
    scanf("%d %c %d", &a, &o, &c);
    
    switch(o){
        case '+':
            printf("%d %c %d = %d",a,o,c,plus(a,c));
            break;
        case '-':
            printf("%d %c %d = %d",a,o,c,minus(a,c));
            break;
        case '*':
            printf("%d %c %d = %d",a,o,c,product(a,c));
            break;
        case '/':
            printf("%d %c %d = %d",a,o,c,divide(a,c));
            break;
        default:
            printf("False");
            break;
    }
    // Please write your code here.
    
    return 0;
}