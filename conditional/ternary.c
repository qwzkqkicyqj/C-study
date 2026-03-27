//삼항연산자: if~else를 간결히 표현
//조건? A:B -> 조건이 참이면 A 아니면 B

#include <stdio.h>
int main(void) {
	//int a = 10;
	//int b = 20;
	//int max;
	//
	//max = a > b ? a : b;
	//printf("%d", max);

	int num;
	printf("정수 입력: ");
	scanf_s("%d", &num);
	num % 2 == 0 ? printf("짝수입니다.") : printf("홀수입니다.");
	//삼항연산자: if~else를 간결히 표현
	//조건? A:B -> 조건이 참이면 A 아니면 B
	//num이 짝수라면 나머지가 0이 되므로 참으로 판단하여 printf("짝수입니다.")가 실행 됨
	//num이 홀수라면 나머지가 0이 되지 않으므로 거짓으로 판단하여 printf("홀수입니다.")가 실행 됨
	return 0;
}