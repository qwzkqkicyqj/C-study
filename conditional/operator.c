#include <stdio.h>
int main()
{
	int num1, num2;
	int res1; //정수형 결과값
	double res2; //실수형 결과값
	char op, yn; //op: 연산자, yn: 반복 종료 변수 (문자형)


	while (1) { //무한반복
		printf("첫번째 숫자를 입력하세요:  ");
		scanf_s("%d", &num1); //num1에 연산할 값1 입력 / 오버플로우(지정한 크기 값보다 큰 값이 입력되어 오류가 발생함)를 방지하기 위해 scanf_s가 사용됨.
		printf("연산자를 입력하세요(+ - * /):  ");
		scanf_s(" %c", &op); //연산자 입력
		printf("두번째 숫자를 입력하세요:  ");
		scanf_s("%d", &num2); //num2에 연산할 값2 입력

		switch (op) { //연산자op를 switch로 여러 경우로 나눔

		case '+': //연산자가 '+'일 경우
			res1 = num1 + num2;
			break;

		case '-': //연산자가 '-'일 경우
			res1 = num1 - num2;
			break;

		case '*': //연산자가 '*'일 경우
			res1 = num1 * num2;
			break;
		case '/': //연산자가 '/'일 경우
			res2 = (double)num1 / num2; //정수형과 정수형이 연산할 경우 결과값이 정수형으로 나오기 때문에 형변환(캐스팅)을 통해 실수형 결과값이 나오도록 함.
			break;
		}

		if (op == '-' || op == '*' || op == '+') { //연산자가 '-', '*', '+' 일 경우
			printf("연산 결과: %d\n", res1);

		}
		else if (op == '/') { //연산자가 '/'일 경우
			printf("연산 결과: %.2lf\n", res2);

		}
		else { //op에 '-', '*', '+', '/' 중 하나가 입력되지 않은 경우
			printf("입력이 잘못되었습니다.\n");
		}
		printf("연산을 종료하시겠습니까?(y/Y or other any key): ");
		scanf_s(" %c", &yn); //반복 종료 여부 입력
		if (yn == 'y' || yn == 'Y') { //반복이 종료되길 원하는 경우 (y/Y 입력)
			printf("연산이 종료되었습니다.\n");
			break;
		}
		else { //반복이 종료되길 원하지 않는 경우 (y/Y가 아닌 다른 키 입력)
			printf("연산이 계속됩니다.\n");
		}
	}
	return 0;
}
