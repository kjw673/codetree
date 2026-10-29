#include <stdio.h>

int isLeapYear(int year);
void printExistDay(int y, int m, int d);
char* returnWeather(int m);

int main(void) {
    int y, m, d;
    scanf("%d %d %d", &y, &m, &d);
    
    printExistDay(y,m,d);
    
    return 0;
}

int isLeapYear(int year){
    if((year%4==0 && year%100!=0) || year%400==0){
        return 1;
    }else{
        return 0;
    }
}

void printExistDay(int y, int m, int d){
    int leapYear=isLeapYear(y);
    
    switch(m){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            if(d<=31){
                printf("%s",returnWeather(m));
            }else{
                printf("-1");
            }
            break;

        case 4: case 6: case 9: case 11:
            if(d<=30){
                printf("%s",returnWeather(m));
            }else{
                printf("-1");
            }
            break;

        case 2:
            if(d<=28+leapYear){
                printf("%s",returnWeather(m));
            }else{
                printf("-1");
            }
            break;

        default:
            printf("-1");
            break;
    }
}

char* returnWeather(int m){
    switch(m){
        case 3: case 4: case 5:
            return "Spring";
        case 6: case 7: case 8:
            return "Summer";
        case 9: case 10: case 11:
            return "Fall";
        case 12: case 1: case 2:
            return "Winter";
    }
}