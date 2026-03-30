#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>

int main() {
	char fuirts[3][21];
	for (int i = 0; i <= 2; i++) {
		printf("과일 이름을 입력하세요.: ");
		scanf("%s", fuirts[i]);
	}
	for (int j = 0; j <= 2; j++) {
		printf("%d번쩨 과일: ", j+1);
		printf("%s\n", fuirts[j]);
	}

	return 0;
}