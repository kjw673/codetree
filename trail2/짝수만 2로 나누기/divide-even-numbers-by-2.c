#include <stdio.h>

int n;
int arr[50];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(*(arr+i)%2==0){
            *(arr+i)/=2;
        }
    }

    for(int i=0;i<n;i++){
        printf("%d ",*(arr+i));
    }

    // Please write your code here.
    return 0;
}