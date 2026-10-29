#include <stdio.h>


int n1, n2;
int a[100], b[100];

char* isSequence(int a[],int b[]){
    
    for(int j=0;j<n1;j++){
        if(a[j]==b[0]){
            int e=1;
            for(int i=0;i<n2;i++){
                if(a[j+i]==b[i]){
                    e*=1;
                }else{
                    e*=0;
                }
            }
            if(e==1){
                return "Yes";
            }
        }
    }
    
    return "No";
}

int main() {
    scanf("%d %d", &n1, &n2);
    for (int i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    for (int j = 0; j < n2; j++)
        scanf("%d", &b[j]);
    
    // Please write your code here.
    printf("%s",isSequence(a, b));
    
    return 0;
}