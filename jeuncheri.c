#include <stdio.h>

int main() {
    char strA[100];
    printf("문자열 입력: ");
    scanf("%s",strA);

    //문자 아스키코드 값 a: 97 ~ z: 122, A: 65 ~ Z: 90
    printf("출력 문자열: ");
    int i = 0;
    while(strA[i]) {
        if((strA[i] >= 97 && strA[i] <= 122) || (strA[i] >= 65 && strA[i] <= 90))
            printf("%c",strA[i]);
        i++;
    }
}