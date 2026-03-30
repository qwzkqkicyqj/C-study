#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char str[30] = "C language"; //문자배열 30자
	int i = 0; //배열이 0부터 시작

	while (str[i] != '\0') { //만족할때 반복
		i++;				 //!=: 다르다, \0: null -> null이 아니라면
							 //문자열 내용 끝나는 지점 다음에 NULL이 자동으로 들어감.
							 //따라서 널 값을 고려히여 배열의 크기를 짜야 함.
	}
	printf("문자열\"%s\"의 길이는 %d입니다.\n", str, i);

	return 0;
	}
