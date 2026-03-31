#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //include: 전처리기, 입출력 관련 헤더파일
#include <string.h> //문자열 함수 사용위한 헤더파일

int main() {
	char a[10] = { "hello" };
	printf("%s\n", a);
	printf("%c\n", a[0]);

	char b[10];
	//b = "love"; //오류
	strcpy(b, "love"); //문자열 복사(대상, 문자열)
	//b[0] = 'l';
	//b[1] = 'o';
	//b[2] = 'v';
	//b[3] = 'e';
	//b[4] = '\0';
	printf("%s", b);
	//strcpy: 문자배열을 선언이후 뒤에 초기화가 안됨.
	//이후 문자열을 복사할 때.

	return 0;
}