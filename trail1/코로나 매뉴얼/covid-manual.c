#include <stdio.h>

int main() {
    int emergency = 0;
    int t1,t2,t3;
    char s1,s2,s3;
    scanf(" %c %d",&s1,&t1);
    scanf(" %c %d",&s2,&t2);
    scanf(" %c %d",&s3,&t3);

    if(s1 == 'Y' && t1 >= 37){
        emergency+=1;
    }
    if(s2 == 'Y' && t2 >= 37){
        emergency+=1;
    }
    if(s3 == 'Y' && t3 >= 37){
        emergency+=1;
    }

    
    if(emergency>=2){
        printf("E");
    }else{
        printf("N");
    }
    
    return 0;
}