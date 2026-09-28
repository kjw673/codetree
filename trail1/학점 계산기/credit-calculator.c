#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    float grade[5],sum=0;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%f ",&grade[i]);
        sum+=grade[i];
    }

    float avg=sum/n;

    printf("%.1f\n",avg);

    if(avg>=4){
        printf("Perfect");
    }else if(avg>=3){
        printf("Good");
    }else{
        printf("Poor");
    }
    return 0;
}