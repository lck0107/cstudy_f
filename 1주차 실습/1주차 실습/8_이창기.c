/*
	a 기준으로 
	a가 b,c보다 모두 크거나 같으면 -> max = a
	a가 b보다 작거나 c보다 작을 때 -> b,c 비교를 통해 큰 값이 max 값.
	a가 b,c 둘다 보다 작을 떄 -> b,c 비교를 통해 max 값.

	따라서 a가 b,c보다 모두 크거나 같은 경우 / 그렇지 않은 경우로 나누면 됨.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int a, b, c;
	int max;
	scanf("%d %d %d", &a, &b, &c);
	if (a >= b && a >= c)
	{
		max = a;
	}
	else
	{
		if (b >= c)
		{
			max = b;
		}
		else
		{
			max = c;
		}
	}
	printf("%d", max);
	return 0;
}