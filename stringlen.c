#include <stdio.h>
#include <string.h>

int stringLength(char *str) {
    int lenCount = 0;
    while(str[lenCount])
        lenCount++;
    return lenCount;
}

int main() {
    char myString[] = "Hello, World!";
    printf("문자열의 길이는: %d\n", stringLength(myString)); // 13을 출력해야 합니다.
    return 0;
}
