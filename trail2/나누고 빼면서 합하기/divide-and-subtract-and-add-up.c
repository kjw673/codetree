#include <stdio.h>

int arr[101];
int index;
int sum=0;
void printSumElement();

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++){
        scanf("%d", &arr[i]);
    }

    index=m;
    printSumElement();
    // Please write your code here.
    return 0;
}

void printSumElement(){
    while(index>=1){
        sum+=arr[index];
        if(index%2==0){
            index/=2;
        }else{
            index--;
        }
    }

    printf("%d",sum);
}