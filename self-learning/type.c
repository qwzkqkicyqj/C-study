#include <stdio.h>
int main() {
	int a = 7, b = 2;
	int c;
	double d, e;

	c = a / b;
	d = a / b;
	e = (double)a / b;

	printf("c = %d\n", c); //3
	printf("d = %1.f\n", d); //3.5
	printf("e = %1.f\n", e); //3.5
}