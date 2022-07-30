/*
	1. 변수 3개 설정 (a,b,c) 및 입력받기
	2. a~b까지 반복문 돌리기
		c로 나눠지는가?(나머지가 0인가) -> 나눠지면 숫자를 알려줄 변수(num) 값 한 개 증가.
	3. num 값 출력.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int a, b, c;
	int num = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a <= b)
	{
		for (int i = a; i <= b; i++)
		{
			if (i % c == 0)
			{
				num++;
			}
		}
	}										// 처음에 여기까지만 적었는데, a가 b보다 큰 경우 고려 못해서 밑에 else if 문 추가.
	else if (a > b)
	{
		for (int i = b; i <= a; i++)
		{
			if (i % c == 0)
			{
				num++;
			}
		}
	}
	printf("%d", num);
	return 0;
}