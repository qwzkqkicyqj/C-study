#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int i = 10;
	int a, sum=0;
	float result;
	while (i != 0) {
		printf("학생의 점수를 입력하세요.: ");
		scanf("%d", &a);
		sum += a;
		i--;	
	}
	printf("점수의 총합: %d\n", sum);
	result = (float)sum / 10;
	printf("점수의 평균: %.2f", result);

}