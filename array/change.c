#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int price, money, c5000, c1000, c100, result;
	printf("물건값을 입력하세요.: ");
	scanf("%d", &price);
	printf("투입 금액을 입력하세요.: ");
	scanf("%d", &money);
	if (price > money) {
		printf("잔액이 부족합니다.\n");
	}
	else {
		money = money - price;
		result = money;
		c5000 = money / 5000;
		money = money - 5000 * c5000;
		c1000 = money / 1000;
		money = money - 1000 * c1000;
		c100 = money / 100;
		money = money - 100 * c100;
		printf("5000원: %d장, 1000원: %d장, 100원: %d개\n", c5000, c1000, c100);
		printf("그 외 금액: %d원\n", money);
		printf("최종 나머지 금액: %d", result);
	}
	return 0;
}