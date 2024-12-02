#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str;
    int a, b;
    str = (char*)malloc(100);

    if(str == NULL) {
        printf("메모리 할당 실패");
        return 0;
    }

    gets(str);
    do { 
        scanf("%d %d", &a, &b);
    } while ((a < 1) && (b > 100));

    for(int i = a-1; i < b; i++) {
        printf("%c",str[i]);
    }
    free(str);
}