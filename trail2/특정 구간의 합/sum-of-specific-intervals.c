#include <stdio.h>

int arr[101];
int queryA1[101];
int queryA2[101];
int sumArrN1ToN2(int n1, int n2);


int main() {
    int n, m, i;
    scanf("%d %d", &n, &m);
    
    for(i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < m; i++) {
        scanf("%d %d", &queryA1[i], &queryA2[i]);
    }
    
    for(i=0;i<m;i++){
        printf("%d\n",sumArrN1ToN2(queryA1[i], queryA2[i]));
    }
    return 0;
}

int sumArrN1ToN2(int n1, int n2){
    int sum=0;
    for(int i=n1;i<=n2;i++){
        sum+=arr[i];
    }

    return sum;
}