#include <stdio.h>

void reverseArr(int *arr){
    int tmpArr[5] = {};
    for(int i = 0; i < 5; i++)
        tmpArr[i] = arr[i];
    for(int i = 0; i < 5; i++)
        arr[i] = tmpArr[4-i];
}

int main() {
    int s[5] = {1,2,3,4,5};
    printf("original: ");
    for(int i = 0; i < 5; i++)
        printf("%d ",s[i]);
    reverseArr(s);          //int s[] == int *s
    printf("\nreversed Array: ");
    for(int i = 0; i < 5; i++)
        printf("%d ",s[i]);
}