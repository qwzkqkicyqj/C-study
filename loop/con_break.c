#include <stdio.h>
int main() {
	for (int a = 1; a <= 10; ++a) { //1~10
		printf("%d\n", a);
		if (a % 7 == 0) { //7의 배수일 경우
			printf("반복문 종료");
			//break;
			continue; //아래문장으로 내려가지 않고 다시 반복문의 조건으로 올라가서 물어보고 반복
		}
	}	

	return 0;
}