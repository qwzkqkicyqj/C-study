#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	//int sum = 0, num1;
	//printf("숫자를 입력하세요.: ");
	//scanf("%d", &num1);
	//for (int i = 1; i <= num1; i++) {  
	//	sum += i;
	//}
	//printf("%d", sum);
	//int num;
	//printf("원하는 단을 입력하세요.: ");
	//scanf("%d", &num); //원하는 단 입력 -> num변수에 값 삽입
	//printf("----------%d단----------\n", num);
	//for (int i = 1; i <= 9; i++) { //i가 1~9일 때까지 반복
	//	printf("%d * %d = %d\n", num, i, num * i); //입력한 단 출력 (num * 1~9)
	//}
	for (int i = 2; i <= 9; i++) { //i는 2~9단
		//i는 j가 반복(9번)이 끝나면 1 증가한다.
		printf("------%d단------\n", i); //단 안내
		for (int j = 1; j <= 9; j++) { //곱하는 1~9 반복
			printf("%d * %d = %d\n", i, j, i * j);
			//3d -> 3자리
			//원래는 오른쪽 정렬
			//-를 붙이면 왼쪽정렬
		} //j for 끝
		printf("\n");
	} //i for 끝
	return 0;
}