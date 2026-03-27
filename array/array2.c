#define _CRT_SECURE_NO_WARNINGS
#define STUDENTS 5 //기호상수 5->STUDENTS
#include <stdio.h>
int main() {
	int score[STUDENTS]; //5개
	for (int i = 0; i < STUDENTS; i++) {
		printf("점수를 입력하세요.(%d번 입력 필요)", STUDENTS - i);
		scanf("%d", &score[i]);
		if (score[i] > 100 || score[i] < 0) {
			i--;
			continue;
		}
	}
	int a=0, sum=0;
	float avg;
	for (int i = 0; i < STUDENTS; i++) {
		if (score[i] != 0) {
			sum += score[i];
		}
	}
	printf("합계: %d\n", sum);
	for (int i = 0; i < STUDENTS; i++) {
		if (score[i] != 0)
			a++;
	}
	avg = (float)sum / a;
	printf("평균: %2.f", avg);
	return 0;
}