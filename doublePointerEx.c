#include <stdio.h>
int global_value = 30;

void call_by_value(int *val) {
       val = &global_value; //값에 의한 호출, 즉 함수 종료 시 삭제
}

void call_by_reference(int **ref) {
       *ref = &global_value;	// 함수 외부에서 선언된 포인터 변수를 조작하기 위함(포인터 변수에 접근)
}

int main(void) {	
	int local_val = 10; 
	int *value = &local_val;
	int *reference = &local_val; 

	printf("before : *value=%d, *reference=%d\n",*value, *reference);
	call_by_value(value);
	call_by_reference(&reference);
	printf("after: *value=%d, *reference=%d\n", *value, *reference);
	return 0;
}