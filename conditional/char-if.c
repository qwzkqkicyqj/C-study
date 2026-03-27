//문제) 1글자를 받아 대문자, 소문자, 숫자로 분류
#include <stdio.h>
int main() {
	char ch;
	printf("문자를 입력하세요.: ");
	ch = getchar(); //1글자 입력
	//scanf_s("%c", &ch); 와 동일함. 자주 사용되지 않음

	if (ch >= 'A' && ch <= 'Z') { //65 ~ 90: A ~ Z의 아스키코드 값
		//(ch >= 65 && ch <= 90)
		printf("대문자");
	}
	else if (ch >= 'a' && ch <= 'z') { //97 ~ 122: a ~ z의 아스키코드 값
		//(ch >= 97 && ch <= 122)
		printf("소문자");
	}
	else if (ch >= '0' && ch <= '9') { //48 ~ 57: 0 ~ 9의 아스키코드 값
		//(ch >= 48 && ch <= 57)
		printf("숫자");
	}
	else {
		printf("그 외 문자"); //특수문자 ex)/, $, @, ! 등등
	}



	return 0;
}