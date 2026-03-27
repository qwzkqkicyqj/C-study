#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int i, j;
    //중복 for: 밖의 for 1번 - 안쪽 for 전부 반복
    for (i = 1; i <= 12; i += 3) { //i는 단 1~12단
        //1즐에 3단이 출력하면 다음줄 4단이 시작되므로
        // i+=3 으로 증가
        printf("  %d단\t    %d단\t       %d단 \n", i, i + 1, i + 2);
        //제목 3단씩 출력, \t는 탭으로 간격을 줌
        //예) i가 1단 i+1 2단 i+2 3단
        for (j = 1; j <= 9; j++) {
            //j는 1~9 곱하는 수
            printf("%d x %d = %2d\t", i, j, i * j); //1*1=1
            printf("%d x %d = %2d\t", (i + 1), j, (i + 1) * j); //2*1=2
            printf("%d x %d = %2d\n", (i + 2), j, (i + 2) * j); //3*1=3
        }
        printf(" \n"); //밖에 for 문장이므로
                       //1~12단의 3단씩 줄바꿈
    }
}
//#include <stdio.h>
//int main() {
//	int a, b, c, d;
//	for (a=1; a <= 12; a+=3) {
//		for (b = a; b < a+3; b++) {
//			printf("\t%d단\t", b);
//		}
//		printf("\n");
//		for (c = 1; c <= 9; c++) {
//			for (d = a; d <= a + 2; d++) {
//				printf("%d * %d = %d\t", d, c, d * c);
//			}
//			printf("\n");
//		}
//	}
//}