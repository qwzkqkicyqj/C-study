#include <stdio.h>
int main() {
	//int num1=0, a = 1;
	//while (a < 11) {
	//	if (a % 2 != 0)
	//		num1 += a;
	//	++a;
	//}
	//printf("%d", num1);
	int a ,num1 = 0;
	for (a = 1; a < 11; a+=2) {
			num1 += a;
		
	}
	printf("i: %d, 홀수 총합%d",a, num1);
}