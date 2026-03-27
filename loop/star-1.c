#include <stdio.h>
int main() {
	for (int i = 5; i != 0; --i) {
		for (int j = 1; j <= i; ++j) {
			printf("*");
		}
		printf("\n");
	}
	
	//for (int a = 1; a <= 5; a++) {
	//	for (int b = 1; b <= a; b++) {
	//			printf("*");
	//		
	//	}
	//	printf("\n");
	//}
	return 0;
}