#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int count_even(int a[10]); //10개의 배열(0~9)
void Printcount(int a);
int main() {
	int ar[10] ;
	printf("정수 10개를 입력하시오.\n");
	for (int i = 0; i <= 9; i++) {
		scanf("%d", &ar[i]);
	}
	Printcount(count_even(ar)); //함수 호출
	return 0;
}

//함수 정의
int count_even(int a[10]) {
	int cnt=0;
	for (int i = 0; i < 10; i++) {
		if (a[i] % 2 == 0) {
			cnt++;
		}
	}
	return cnt;
}

//함수정의
void Printcount(int a) {
	printf("짝수의 개수: %d", a);
}