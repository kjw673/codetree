#include <stdio.h>

void printStringRepeatN(int n){
    for(int i=0;i<n;i++){
        printf("12345^&*()_\n");
    }

}
int main() {
    int row_num;
    scanf("%d", &row_num);
    printStringRepeatN(row_num);
    return 0;
}