#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	//int i = 3000;
	//int* p = NULL; //포인터 변수 선언

	//p = &i; // i변수의 주소를 p포인터 변수에 줌

	//printf("p = %p\n", p);
	////%p: 주소를 출력하는 서식 문자
	//printf("&i = %p\n\n", &i);

	//printf("i = %d\n", i);
	//printf("*p = %d\n\n", *p);
	////주소에 저장된 내용에 접근하는 포인터

	//i = 4000;
	//printf("i = %d\n", i);
	//*p = 5000;
	//printf("*p = %d\n", *p);

	int x = 10, y = 20;
	int* pi; //포인터변수

	pi = &x; //포인터변수에 변수 x의 주소 입력
	printf("pi = %p\n", pi); //포인터변수 pi가 가리키는 x의 주소 출력
	printf("*pi = %d\n", *pi); //포인터 변수가 가리키는 x의 값 출력 //10

	pi = &y;//포인터변수에 변수 y의 주소 입력
	printf("pi = %p\n", pi);//포인터변수 pi가 가리키는 y의 주소 출력
	printf("*pi = %d\n", *pi); //포인터 변수가 가리키는 y의 값 출력 //20
	return 0;
}