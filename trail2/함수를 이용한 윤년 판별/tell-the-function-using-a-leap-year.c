#include <stdio.h>

int isLeapYear(int year){
    if((year%4==0 && year%100!=0)||year%400==0){
        return 1;
    }else{
        return 0;
    }
}

int main() {
    int y;
    scanf("%d", &y);
    
    // Please write your code here.
    printf("%s", isLeapYear(y)?"true":"false");
    return 0;
}