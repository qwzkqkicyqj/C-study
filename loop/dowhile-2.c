#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int i = 0;
	do {
		printf("1이면 새로만들기\n2이면 파일열기\n3이면 파일닫기\n하나를 선택하세요: ");
		scanf("%d", &i);



	} while (i<1 || i>3);
	printf("선택 메뉴: %d", i);
	return 0;
}