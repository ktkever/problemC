#include <stdio.h>
void changeDouble(int *p) {     //참조에 의한 호출(주소를 받음)
    *p = *p * 2;    //주소에 있는값에 적용
}

int main() {
    int num;
    int *p = &num;      //p = num의 주소값
    scanf("%d", &num);
    changeDouble(p);        //num의 주소 넘김
    printf("%d",num);
}