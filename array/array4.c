#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void f1();
void f2();
void f3();
void arrPrint();

int main() { //main함수 1개, 처음 시작할때 main부터 시작
	//f1();
	//f2();
	f3();
	return 0;
}

void f1() { //f1함수 생성 //호출해야만 작동함
	int a[2][3] = { {4, 5, 6}, {7,8,9} };
	//배열이름[배열의 개수][각 배열의 저장족ㅇ간의 개수]
	//a[0][0] = 4; 
	//a[0][1] = 5;
	//a[0][2] = 6;
	//a[1][0] = 7;
	//a[1][1] = 8;
	//a[1][2] = 9;
	printf("%d\n", a[0][0]);
	printf("%d\n", a[0][1]);
	printf("%d\n", a[0][2]);
	printf("%d\n", a[1][0]);
	printf("%d\n", a[1][1]);
	printf("%d\n", a[1][2]);
	printf("==============\n");
}

void f2() {
	int b[2][3]; //2행 3열
	int totalsize = sizeof(b); //24바이트
	printf("%d\n", totalsize);//배열 b 전체 사이즈 //24 출력
	int bsize = sizeof(b[0]);//0번째 행의 사이즈 //12바이트
	printf("%d\n", bsize); //12출력
	printf("%d\n", sizeof(b[0][0])); //0행 0번째 원소의 사이즈 //4출력
	printf("%d\n", sizeof(b) / sizeof(b[0])); //전체 크기/한 행 크기 //2출력(행 수)
	printf("%d\n", sizeof(b[0]) / sizeof(b[0][0])); //한 행 크기 / 한 원소의 크기 //3출력 (열 수)
	printf("==============\n");
}

void f3() {
	int a[2][3] = { {1,2,3},{4,5,6} }; //배열 초기화, 1,2,3,4,5,6
	//a[0][0]=1, a[0][1]=2 ....
	arrPrint(a); //인수 보내면서 함수 호출, a배열([2][3])을 arrPrint함수를 호출할 때 깥이 보냄
	int b[2][3] = { {1},{4} }; //1 0 0, 4 0 0
	arrPrint(b); //함수 호출
	int c[2][3] = {{1,2}}; //1 2 0, 0 0 0
	arrPrint(c);
	int d[2][3] = { 1,2,3,4,5,6 };
	arrPrint(d);
	int i[2][3] = { 1,2,3,4}; //1 2 3 4 0 0
	arrPrint(i);
	int j[2][3] = { 1,2 };//1 2 0 0 0 0
	arrPrint(j);
	int k[2][3] = { 0 }; //0 0 0 0 0 0 
	arrPrint(k);
}

void arrPrint(int p[2][3]) { //k는 매개변수 인수와 유형, 개수 동일
	int i;
	for (i = 0; i < 2; i++) {
		for (int j = 0; j <= 2; j++) {
			printf("%d ", p[i][j]);
		}
	}
	printf("\n\n");
}