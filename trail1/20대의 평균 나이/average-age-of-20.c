#include <stdio.h>

int main() {
    // Please write your code here.
    int age,person=0,sum=0;

    while(1){
        scanf("%d",&age);
        if(age/10 != 2){
            printf("%.2f",1.0*sum/person);
            break;
        }
        sum+=age;
        person++;
    }
    return 0;
}