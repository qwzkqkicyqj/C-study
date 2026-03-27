#include <stdio.h>
void main() {
	int b[4][3] = { {1,2,3},{4,5,6},{7,8,9},{10,11,12} };
	//a[행][열] 0~2 0~2

	int i, j, sum=0;
	for (i = 0; i < 4; i++) { //i 행 의미 0~2
		for(j = 0; j < 3; j++) { //j 는 열 의미 0~2
			printf("%d\t", b[i][j]);
			sum += b[i][j];
		}
		printf("\n");
	}
	printf("%d", sum);
}