#include <stdio.h>
#include <string.h>

char text[1001];
char pattern[1001];

int partString(){
    for(int i=0;i<=strlen(text)-strlen(pattern);i++){
        if(text[i]==pattern[0]){
            int yes=1;
            for(int j=0;j<strlen(pattern);j++){
                if(text[i+j]==pattern[j]){
                    yes*=1;
                }else{
                    yes*=0;
                    break;
                }
            }
            if(yes==1){
                return i;
            }
        }   
    }
    return -1;
}
int main() {
    scanf("%s", text);
    scanf("%s", pattern);
    printf("%d",partString());
    // Please write your code here.
    
    return 0;
}