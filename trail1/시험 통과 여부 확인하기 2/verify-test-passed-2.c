#include <stdio.h>

int main() {
    // Please write your code here.
    int student[10],scoreS1[10],scoreS2[10],scoreS3[10],scoreS4[10];
    int pass[10];
    int n,passCnt=0;

    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d %d %d %d",&scoreS1[i],&scoreS2[i],&scoreS3[i],&scoreS4[i]);
        if((scoreS1[i]+scoreS2[i]+scoreS3[i]+scoreS4[i])/4.0>=60){
            pass[i]=1;

        }else{
            pass[i]=0;
        }
    }

    for(int i=0;i<n;i++){
        if(pass[i]){
            printf("pass\n");
            passCnt++;
        }else{
            printf("fail\n");
        }
    }
    printf("%d",passCnt);
    return 0;
}