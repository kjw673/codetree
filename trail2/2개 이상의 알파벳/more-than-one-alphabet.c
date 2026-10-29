//a~z 97~122
#include <stdio.h>
char A[101];


int countDiffChar(char arr[],int len){
    int count=0;
    int alphabet[26]={0};

    alphabet[(int)arr[0]-97]=1;
    for(int i=1;i<len;i++){
        if(arr[0]!=arr[i]){
            alphabet[(int)arr[i]-97]+=1;
        }
    }
    for(int i=0;i<26;i++){
        if(alphabet[i]!=0){
            count++;
        }
    }
    return count;
}
int main() {
    scanf("%s", A);
    int len = sizeof(A)/sizeof(A[0]);

    if(countDiffChar(A,len)>=2){
        printf("Yes");
    }else{
        printf("No");
    }
    // Please write your code here.
    
    return 0;
}