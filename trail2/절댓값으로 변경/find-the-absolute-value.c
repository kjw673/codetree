#include <stdio.h>
#include <stdlib.h>

#define MAX_N 50

int arr[MAX_N];
void absArray(int arr[],int len){
    for(int i=0;i<len;i++){
        arr[i]=abs(arr[i]);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    absArray(arr,n);

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    // Please write your code here.
    
    return 0;
}