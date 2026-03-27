#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int num1, num2=1;
	printf("----- 구구단 프로그램 -----\n");
	printf("출력하고싶은 단을 입력하시오.: ");
	scanf("%d", &num1);
	while (num2 < 10) {
		printf("%d * %d = %d\n", num1, num2, num1 * num2);
		++num2;
	}

	return 0;
}