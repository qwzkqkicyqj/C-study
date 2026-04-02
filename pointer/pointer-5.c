#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int add(int a, int b);
void sub(int a, int b);
void arrprn(int a[10]);
int main() {
	int a=10, b=20;
	int c[5] = {1,2,3,4,5}; //배열

	printf("a + b = %d\n", add(a, b)); //함수 호출, 인수 2개 -> a, b
	sub(a, b);
	arrprn(c);
	return 0;
}

int add(int a, int b) { //매개변수 형을 선언
	return a + b;
}

void sub(int a, int b) { //매개변수 형을 선언
	printf("a - b = %d\n", a - b);
}

void arrprn(int a[5]) {
	for (int i = 0; i < 5; i++) {
		printf("%d", a[i]);
	}
}