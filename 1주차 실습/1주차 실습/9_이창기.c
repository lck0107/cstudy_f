/*
	1. N을 정의하고 입력받는다.
	2. N보다 작은 수를 반복문 돌린다.
	3. 반복문 안에서 조건문으로 N보다 크거나 같을 경우를 설정한 뒤  변수를 출력해주고 break로 탈출한다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int N;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
	{
		if (i * i >= N)
		{
			printf("%d", i);
			break;
		}
	}
	return 0;
}