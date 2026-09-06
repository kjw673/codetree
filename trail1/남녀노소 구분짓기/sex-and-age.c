#include <stdio.h>

int main() {
    // Please write your code here.
    int man = 0;
    int woman = 1;
    int gender, age;
    scanf("%d\n%d",&gender,&age);
    if(age>=19){
        if(gender == man){
            printf("MAN");
        }else{
            printf("WOMAN");
        }
    }else{
        if(gender == man){
            printf("BOY");
        }else{
            printf("GIRL");
        }
    }
    return 0;
}