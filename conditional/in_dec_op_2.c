#include <stdio.h>
int main() {
	int a, b, c;
	a = 5 % 3; //5 / 3의 나머지
	a--; //a의 값이 1 감소하여 1이 됨
	b = (a++) + 3; //b에 a + 3의 결과값이 대입된 이후 a의 값이 증가하여 2가 됨.
	printf("%d, %d\n", a, b); //출력: 2, 4
	c = (++a) + 3; //1이 증가된 a + 3이 대입됨. c: 6
	printf("%d, %d, %d", a, b, c); //출력: 3, 4, 6

	return 0;
}