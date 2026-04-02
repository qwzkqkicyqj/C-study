#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void call_value(int icopy); //함수원형(함수선언)
void call_return(int* ip); 

int main() { //포인터를 사용하는 이유 - 경제적이고 빠른 연산을 위해 사용
	int i = 777;
	call_value(i); //값의 의한 호출
	printf("값 호출 : %d\n", i);
	
	call_return(&i); //함수 호출, i의 주소, 참조(주소)에 의한 호출
	printf("참조 호출 : %d\n", i);
	return 0;
}

void call_value(int icopy) { //복사본 전달, icopy에 777을 받으나 icopy는 다른 변수 주소(새로운 공간)
	icopy = 888;
}

void call_return(int* ip) { //매개변수가 포인터변수
	//원본 전달, i주소를 받음
	*ip = 888; //ip가 가르키는 주소의 값에 888대입
}