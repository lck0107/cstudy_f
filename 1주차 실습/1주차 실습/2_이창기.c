/*
	1. 세 개의 결과를 얻어야 함. -> 반복문 3번 돌리기
    2. 각각의 반복문에서 a,b,c,d 값을 받고, 합에 따른 조건문을 작성하여 출력값 전달.
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
    int N,a,b,c,d;
    int sum;
    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        sum = a + b + c + d;
        if (sum == 0)
            printf("D\n");
        else if (sum == 1)
            printf("C\n");
        else if (sum == 2)
            printf("B\n");
        else if (sum == 3)
            printf("A\n");
        else
            printf("E\n");
    }
}