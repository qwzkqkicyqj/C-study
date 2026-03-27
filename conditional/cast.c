#include <stdio.h>
int main() {
//	int a;
//	a = sizeof(int) + sizeof(char); //sizeof는 byte를 단위로 하여 크기를 나타냄
//	printf("%d", a);
//int a = 7 + 6;
//int b = (int)7.3 + (int)6.7; //형변환(cast)을 사용하여 소숫점 아래 제거
//printf("%d %d", a, b);
	float t;
	t = 10 / 3; //정수형끼리 계산 -> 결과: 정수형
	printf("%f", t);
	t = (float)10 / 3; //계산에 실수형이 포함됨 -> 결과: 실수형
	printf("%f", t);
	return 0;
}