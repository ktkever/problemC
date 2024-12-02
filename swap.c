#include <stdio.h>
void swap(int *p1, int *p2){
    int tmp;
    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    swap(&x,&y);
    printf("%d %d",x,y);
}