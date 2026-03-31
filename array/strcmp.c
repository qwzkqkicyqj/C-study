#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char a[30];
	char b[30];
	int res;
	printf("a에 넣을 문장을 입력하시오.: ");
	scanf("%s", a);
	printf("b에 넣을 문장을 입력하시오.: ");
	scanf("%s", b);
	res = strcmp(a, b);//문자열 비교
	if (res == 0) { //문자열 1과 문자열 2가 사전순으로 같음
		printf("%s와 %s가 같이있다.", a, b);
	}
	else if (res < 0) { //음수이면 문자열1이 문자열2보다 사전순으로 앞에 있음
		printf("%s가 %s보다 앞에 있다.", a, b);
	}
	else if (res > 0) { //음수이면 문자열1이 문자열2보다 사전순으로 뒤에 있음
		printf("%s가 %s보다 뒤에 있다.", a, b);
	}

	//&: 주소 의미
	//배열명은 배열의 첫 주소이다 따라서 &를 사용하지 않음. 그러나 a[2]와 같이 특정 인덱스에 값을 넣고싶은 경우 &를 사용한다.

	return 0;
}