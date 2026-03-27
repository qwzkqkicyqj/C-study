#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	//int a = 1, b = 1;
	//while (a < 4) {
	//	while (b < 4) {
	//		printf("%d %d\n", a, b);
	//		++b;
	//	}
	//	++a;
	//	b = 1;
	//	printf("\n");
	//}

	int a, b;
	for(a = 1; a<4; a++){
		for (b = 1; b < 4; b++) {
			printf("%d %d\n", a, b);
		}
	}


	return 0;
}