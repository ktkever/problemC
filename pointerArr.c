#include <stdio.h>

double getArrAvg(int *vals, int n){
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += vals[i];
    }
    double res = sum/n;
    return res;
}

void printArr(int *vals, int n){
    printf("[ ");
    for(int i = 0; i < n; i++)
        printf("%d ",*(vals+i));
    printf("]");
}

int main() {
    int array[] = {10,20,30,40,50};
    int n = 5;
    printArr(array,n);
    printf("\ngetArrAvg() 호출\n");
    printf("배열 요소 평균: %.3lf",getArrAvg(array,n));
}