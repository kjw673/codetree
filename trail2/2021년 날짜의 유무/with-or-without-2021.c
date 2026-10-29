#include <stdio.h>

char* existDay(int m, int d){
    switch(m){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            if(d<=31){
                return "Yes";
            }else{
                return "No";
            }

        case 4: case 6: case 9: case 11:
            if(d<=30){
                return "Yes";
            }else{
                return "No";
            }
        case 2:
            if(d<=28){
                return "Yes";
            }else{
                return "No";
            }

        default:
            return "No";
    }
}
int main() {
    int m, d;
    scanf("%d %d", &m, &d);
    // Please write your code here.
    printf("%s",existDay(m,d));
    return 0;
}