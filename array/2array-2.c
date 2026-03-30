#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
int main(void)
{
    int i;
    char menu[3][10] = { //5행 10열 (0~4행, 0~9행)
        "init", //1행씩 초기값 설정
        "open", 
        "close"
    };

    for (i = 0; i < 3; i++)
        printf("%d 번째 메뉴: %s \n", i, menu[i]); //menu[i]는 행을 의미

    return 0;
}