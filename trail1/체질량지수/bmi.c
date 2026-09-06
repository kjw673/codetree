#include <stdio.h>

int bmi(int w, int h){
    return 10000*w/(h*h);
}
int main() {
    int h,w;
    scanf("%d %d",&h,&w);
    if(bmi(w,h)>=25){
        printf("%d\nObesity",bmi(w,h));
    }else{
        printf("%d",bmi(w,h));
    }
    return 0;
}