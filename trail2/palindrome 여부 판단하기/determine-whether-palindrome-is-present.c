#include <stdio.h>


char* isPalindrome(char arr[], int len){
    for(int i=0;i<len;i++){
        if(arr[i] != arr[len-i-1]){
            return "No";
        }
    }
    return "Yes";
}
int main() {
    char A[101];
    scanf("%s", A);
    int len = 0;
    for(int i=0;i<101;i++){
        if(A[i]!='\0'){
            len++;
        }else{
            break;
        }
    }
    // Please write your code here.
    printf("%s",isPalindrome(A,len));
    return 0;
}