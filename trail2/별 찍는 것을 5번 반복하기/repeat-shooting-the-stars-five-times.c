#include <stdio.h>
void Print10Stars(){
    for(int i=0;i<10;i++){
        printf("*");
    }
}

int main() {
    // Please write your code here.
    for(int i=0;i<5;i++){
        Print10Stars();
        printf("\n");
    }
    return 0;
}